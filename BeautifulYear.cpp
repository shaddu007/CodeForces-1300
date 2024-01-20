#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=n+1;i<=9012;i++)
    {
        bool flag = true;
        string num=to_string(i);
        map<char,int>mp;
        for(auto c:num)
        {
            mp[c]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            flag=false;
        }
        if(flag==true)
        {
            cout<<num<<endl;
            break;
        }
    }
    return 0;
}