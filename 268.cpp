int missingNumber(vector<int>& nums)
{
	int n=nums.size();
	int sum=0;
	n=(n+1)*(n+2)/2;
	for (int i = 0; i < nums.size(); ++i)
	{
		sum += nums[i];
	}

	return n-sum;
}
