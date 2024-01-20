#include<iostream>
#include<math.h>
using namespace std;

bool NextPrime(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}


int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<m;i++)
    {
        if(NextPrime(i)) 
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(NextPrime(m)) 
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}