#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i = 0 ;i<n;i++)
    {
        string s;
        cin>>s;
        if(s.length()>10)
        {
            string ans="";
            ans+=s[0];
            ans+=to_string(s.length()-2);
            ans+=s[s.length()-1];
            cout<<ans<<endl;
        }
        else cout<<s<<endl;
    }
    return 0;

}