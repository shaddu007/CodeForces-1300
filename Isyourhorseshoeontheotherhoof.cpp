#include<iostream>
#include<map>
using namespace std;

int main()
{
    
    int color[4];
    for(int i=0;i<4;i++)
    {
        cin>>color[i];
    }
    map<int,int>mp;
    for(auto c:color)
    {
        mp[c]++;
    } 
    int cnt = 0;  
    for(auto it: mp)
    {
        if(it.second>1)
        {
            cnt += it.second - 1;
        }
    }
    cout<< cnt<<endl;
    return 0;
}