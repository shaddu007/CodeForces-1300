 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,long long>mp;
    for(auto c:s)
    {
        mp[c]++;
    }
    string temp ="";
    int val = mp[s[0]];
    for(auto it : mp)
    {
        if(it.second%k != 0 )
        {
            cout<<-1<<endl;
            return 0;
        }
        for(int i = 0;i<it.second/k;i++)
        {
            temp+=it.first;
        }
    }
    string ans="";
    for(int i= 0 ;i<k;i++)
    {
        ans+=temp;
    }
    cout<<ans<<endl;
    return 0;
}   

