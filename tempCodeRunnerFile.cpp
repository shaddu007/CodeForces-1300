string ans="";
    string temp="";
    for(int i = 0;i < s.length();i++)
    {
        if(s[i]!=' ')
        {
            temp+=s[i];
        }
        if(s[i]==' ' && !temp.empty())
        {
            if(ans.empty()) 
            {
                ans+=temp;
                temp="";
            }
            else{
                ans+=" "+temp;
                temp="";
            }
            
        }
    }
    if(!temp.empty()) ans+=temp;
    cout<<ans;