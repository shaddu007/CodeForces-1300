 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>strenght;
    for(int i = 0;i < n;i++)
    {
        int x,y;
        cin>>x>>y;
        strenght.push_back({x,y});
    }
    sort(strenght.begin(),strenght.end());
    for(int i = 0;i<strenght.size();i++)
    {
        if(s>strenght[i].first)
        {
            s+=strenght[i].second;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}   

