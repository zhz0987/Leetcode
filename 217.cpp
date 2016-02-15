#include<set>

bool containsDuplicate(vector<int>& nums) 
{
	std::set<int> s;
	for (std::vector<int>::iterator i = nums.begin(); i != nums.end(); ++i)
	{
		if(s.count(*i)==0)
			s.insert(i);
		else
			return true;
	}

	return false.
}