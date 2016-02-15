int majorityElement(vector<int>& nums)
{
	int result=0;
	int count=0;
	for(auto it = nums.begin();it!=nums.end();++it)
	{
		if(!count)
		{
			++count;
			result=*it;
		}
		else
		{
			if(result==*it)
				++count;
			else
				--count;
		}
	}
	return result;
}