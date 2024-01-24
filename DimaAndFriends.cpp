#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int totalFinger = 0;
    for(int i =0 ;i < n; i++)
    {
        int friendFinger ;
        cin>>friendFinger;
        totalFinger+=friendFinger;
    }
    vector<int>finger;
    totalFinger= totalFinger%(n+1);
    for(int i = 1 ; i<=5 ; i++)
    {
        if((totalFinger+i)%(n+1)!=1)
        {
            finger.push_back(i);
        }
    }
    
    int sz = finger.size();
    cout<<sz;
    return 0;
}