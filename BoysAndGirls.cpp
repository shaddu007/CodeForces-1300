#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<map>
#include<numeric>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n;
    cin>>m;
    if(n>m)
    {
        string s = "";
        int i ;
        for( i = 0; i<m+m ; i++)
        {
            if(i%2 == 0) s+='B';
            else s+='G';
        }
        while(i<n+m)
        {
            s+='B';
            i++;
        }
        cout<<s<<endl;
    }
    else{
        string s = "";
        int i ;
        for( i = 0; i<n+n ; i++)
        {
            if(i%2 == 0) s+='G';
            else s+='B';
        }
        while(i<n+m)
        {
            s+='G';
            i++;
        }
        cout<<s<<endl;
    }
    return 0;
}
