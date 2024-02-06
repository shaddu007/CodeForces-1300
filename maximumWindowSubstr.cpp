#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;
    void minWindow(string s, string t) {
        if( t.size() > s.size() ) return "";
        int n = s.length();
        int m = t.length();
        int start= 0 ;
        int end = 0;
        bool found = false;
        unordered_map<char,int>mp;
        for(auto c:t) mp[c]++;
        int cnt = m-1;
        vector<pair<int,int>>pr;
        for(int j = 0;j<n;j++)
        {
            if(mp.find(s[j])!=mp.end() && found == false)
            {
                start = j;
                found = true;
                mp[s[j]]--;
            }
            if(mp.find(s[j])!=mp.end() && mp[s[j]]!=0)
            {
                cnt--;
                mp[s[j]]--;
            }
            if(cnt==0)
            {
                end = j;
                pr.push_back({start,end});
                mp[start]++;
                start++;
                cnt--;
                cout<<start<<" "<<end<<endl;
            }

            while(mp.find(start)!=mp.end() && cnt==1 && start < n)
            {
                start++;
            }

        }
        int maxi = INT_MIN;
        for(int i = 0;i<pr.size();i++)
        {
            if(maxi<pr[i].second - pr[i].first)
            {
                start = pr[i].first;
                end = pr[i].second;
            }
        }
        string ans = s.substr(start,end-start+1);
        return ans;
    }
int main()
{
    string s= "ADOBECODEBANC";
    string t = "abc";
    minWindow(s,t);
    //cout<<ans;
    return 0;
}