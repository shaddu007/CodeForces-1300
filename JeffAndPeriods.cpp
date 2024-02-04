#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    map<int,vector<int>>mp;
    for(int i = 0;i< n;i++)
    {
        cin>>nums[i];
        if(mp.find(nums[i])!=mp.end() )
        {
            if(mp[nums[i]][1]==0){
                mp[nums[i]][1]=i;
            }
           
            else{
                int diff = mp[nums[i]][1] - mp[nums[i]][0];
                if(i-mp[nums[i]][1]!=diff)
                {
                    mp[nums[i]][2] = 0;
                }
                else{
                    mp[nums[i]][0]=mp[nums[i]][1];
                    mp[nums[i]][1] = i;
                }
            }
        }
        else{
           mp[nums[i]] = {i, 0, 1}; 
        }
    }
    
    int cnt=0;
    for(auto it: mp)
    {
        if(it.second[2]==1)
        cnt++;
    }
    if(cnt==0)
    {
        cout<<0;
        return 0;
    }
    else{
        cout<<cnt<<endl;
    }
    for(auto it:mp)
    {
        if(it.second[2]==1)
        {
            if(it.second[1]==0)
            cout<<it.first<<" "<<0<<endl;
            else
            cout<<it.first<<" "<<it.second[1]-it.second[0]<<endl;
        }
        
    }
    return 0;
}
