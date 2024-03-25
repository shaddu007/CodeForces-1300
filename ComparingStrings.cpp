#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;


int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(s1.size() != s2.size())
    {
        cout<<"NO";
        return 0;
    }
    unordered_map<char,int>mp;
    for(auto c:s1)
    {
        mp[c]++;
    }
    for(int i = 0;i<s2.size();i++)
    {
        if(mp.find(s2[i])!= mp.end() && mp[s2[i]] > 0)
        {
            mp[s2[i]]--;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
