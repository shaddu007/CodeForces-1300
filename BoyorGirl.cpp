#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto c : s)
    {
        mp[c]++;
    }
    int cnt = 0;
    for( auto it : mp)
    {
        cnt += 1;
    }
    if(cnt%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}