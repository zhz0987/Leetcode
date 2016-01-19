int titleToNumber(string s) 
{
	if(s.length==0)
		return 0;
	int num=s[s.length()-1] - 64; 
	s.pop_back();
    return num + 26*titleToNumber(s);
}