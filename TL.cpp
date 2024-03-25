#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <string>
#include <numeric>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>pass(n);
    vector<int>fail(m);
    for(int i = 0;i<n;i++)
    {
        cin>>pass[i];
    }
    for(int i = 0;i<m;i++)
    {
        cin>>fail[i];
    }
    bool test = true;
    int tl = 0;
    int a = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        tl = max(tl,pass[i]);
        a = min (a,pass[i]);
    }
    2*a<= tl ? test = true : test = false;
   //t cout<<tl<<endl;
    if(!test)
    {
        tl = 2*a;
        test= true;
    }
   // cout<<tl<<endl;
    for(int i = 0;i<m;i++)
    {
        if(fail[i]<=tl)
        {
            test = false;
            break;
        }
    }
    test== true ? cout<<tl:cout<<-1;
    return 0;

}
