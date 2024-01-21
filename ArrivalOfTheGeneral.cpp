#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int minHeight = INT_MAX;
    int maxHeight = INT_MIN;
    for(int i=0 ;i<n ; i++)
    {
        cin>>v[i];
    }
    for(int i = 0;i<n;i++)
    {
        if(v[i] > maxHeight)
        maxHeight = v[i];
        if(v[i]<minHeight)
        minHeight = v[i];
    }
    // cout<<"maxheight"<<maxHeight<<endl;
    // cout<<"minheight"<<minHeight<<endl;
    int minPos = n;
    int maxPos = 0;
    int cnt = 0;
    for(int i = 0;i < n; i++)
    {
        if(v[i] == maxHeight)
        {
            maxPos = i;
            break;
        }
    }
    for(int i = maxPos;i >=1; i--)
    {
        swap(v[i],v[i-1]);
        cnt++;
    }
    // cout<<cnt<<endl;
    for(int i =n-1 ;i >= 0; i--)
    {
        if(v[i]== minHeight)
        {
            minPos = i;
            break;
        }
    }
    int i = minPos;
    // cout<<minPos<<endl;
    while(i<n-1)
    {
        swap(v[i],v[i+1]);
        i++;
        cnt++;
    }
    
    cout<<cnt<<endl;
    return 0;
}
