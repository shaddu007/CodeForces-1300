#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    vector<int>v(n);
    for(int i=1;i<=n;i++)
    {
        v[i-1]=i;
    }
    for(int i=0;i<n-1;i++)
    {
        swap(v[i],v[i+1]);
        i++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}