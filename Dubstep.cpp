 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 using namespace std;

int main()
{
    string s;
    cin>>s;
    int i = 0;
    while (i<s.length())
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(i==0)
            s.replace(i,3,"");
            else if(s[i-1]==' ') 
            s.replace(i,3,""); 
            else 
            s.replace(i,3," ");
        }
        else{
            i++;
        }
    }
    cout<<s<<endl;
    // string ans="";
    // string temp="";
    // for(int i = 0;i < s.length();i++)
    // {
    //     if(s[i]!=' ')
    //     {
    //         temp+=s[i];
    //     }
    //     if(s[i]==' ' && !temp.empty())
    //     {
    //         if(ans.empty()) 
    //         {
    //             ans+=temp;
    //             temp="";
    //         }
    //         else{
    //             ans+=" "+temp;
    //             temp="";
    //         }
            
    //     }
    // }
    // if(!temp.empty()) ans+=" "+temp;
    // cout<<ans;
    return 0;
}   