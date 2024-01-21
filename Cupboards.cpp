#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i= 0 ;i< n ;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    int ones=0;
    int zeros = 0;
    int left = 0;
    for(int i = 0;i < n; i++)
    {
        if(v[i].first==0) zeros++;
        if(v[i].first) ones++;
    }
    left = min(ones,zeros);
    int right = 0;
    ones = 0,zeros =0;
    for(int i = 0;i < n; i++)
    {
        if(v[i].second==0) zeros++;
        if(v[i].second==1) ones++;
    }
    right = min(ones,zeros);
    cout<<left+right<<endl;
    return 0;
}