#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.size();
    map<char,int>mp;
    for(auto c:s)
    {
        mp[c]++;
    }
    int len = mp.size();
    int oddOccur = 0;
    for(auto it : mp)
    {
        if(it.second & 1)
        oddOccur++;
    }
    if(oddOccur<=1)
    {
        cout<<"First";
        return 0;
    }
    else{
         if((n-1) % 2 == 0)
            cout <<"First";
        
        else 
            cout <<"Second";
    }
    return 0;
}
