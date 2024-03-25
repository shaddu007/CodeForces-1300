#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>seg(n);
    for(int i = 0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        seg[i]={a,b};
    }
    int index = -1;
    int left = INT_MAX;
    int right = INT_MIN;
    int leftMin = INT_MAX;
    int rightMax =INT_MIN;
    for(int i = 0;i<n;i++)
    {
        if(seg[i].first <= left && seg[i].second>=right)
        {
            left = seg[i].first;
            right = seg[i].second;
            index = i+1;
        }
        leftMin = min(leftMin , seg[i].first);
        rightMax = max(rightMax,seg[i].second);
    }
    if(right == rightMax && leftMin == left)
    cout<<index<<endl;
    else cout<< -1<<endl;
    return 0;
}
