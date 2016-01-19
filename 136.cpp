class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp=0;
        for(auto it=nums.begin();it!=nums.end();++it)
        {
            temp=temp^(*it);
        }
        
        return temp;
    }
};