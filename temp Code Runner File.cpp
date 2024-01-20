#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    string n=to_string(x);
    string m=to_string(y);
    string ans="";
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='1' && m[i]=='0' || n[i]=='0' && m[i]=='1') ans+='1';
        else ans+='0';
    }
    // int result = stoi(ans);
    // cout<<result<<endl;
    cout<<ans<<endl;
    return 0;

}