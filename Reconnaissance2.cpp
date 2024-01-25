#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n,a1;
    cin>>n>>a1;
    int prev = a1,curr,res,Reconnaissance=1000,index1,index2;
    for(int i = 2;i<=n;i++)
    {
        cin>>curr;
        if(abs(curr-prev) < Reconnaissance)
        {
            Reconnaissance = abs(curr-prev);
            index1= i-1;
            index2 = i;
        }
        prev = curr;
    }
    if(a1-prev < Reconnaissance)
    {
        index1 = n;
        index2 = 1;
    }
    cout<<index1<<" "<<index2;
    
    return 0;
}