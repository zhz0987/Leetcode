bool isAnagram(string s, string t) 
{
    int size=s.length();
    if(t.length()!=size)
        return false;
    int ch[26];
    memset(ch,0,sizeof(ch));
    for(int i=0;i<size;i++)
    {
    	++ch[s[i]%26];
    	--ch[t[i]%26];
    }
    for(int i=0;i<26;i++)
    {
    	if(ch[i]!=0)
    		return false;
    }
    return true;
}