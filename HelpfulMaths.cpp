#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    vector<int>num;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]=='1' || s[i]=='2' || s[i]=='3')
        {
            num.push_back((s[i]-'0'));
        }
    }
    sort(num.begin(),num.end());
    string ans=to_string(num[0]);
    for(int i = 1; i< num.size() ; i++)
    {   
        ans+='+' + to_string(num[i]);
    }
    cout<<ans<<endl;
    return 0;
}