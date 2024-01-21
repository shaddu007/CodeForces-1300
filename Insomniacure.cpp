#include<iostream>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int damage[d]={0};
    for(int i = 1;i<=d;i++)
    {
        if(i%k==0) damage[i-1]++;
        if(i%l==0) damage[i-1]++;
        if(i%m==0) damage[i-1]++;
        if(i%n==0) damage[i-1]++;
    }
    int cnt = 0;
    for(int i=0;i<d;i++)
    {
        if(damage[i]>0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}