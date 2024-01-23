#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int maxSum = 0;

    for(int i=0; i < n;i++)
    {
        int exit,enter;
        cin>>exit>>enter;
        sum-=exit;
        sum+=enter;
        maxSum = max(maxSum,sum);
    }
    cout<<maxSum<<endl;
    return 0;
}