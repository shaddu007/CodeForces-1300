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
    vector<int>wt(n);
    int wt100 =0;
    int wt200 =0;

    for(int i = 0;i<n;i++)
    {
        cin>>wt[i];
        if(wt[i] ==100 ) wt100++;
        else wt200++;
    }
    if((wt100 %2 == 0 && wt200 %2 != 0 && wt100!=0) || (wt100 %2 == 0 && wt200 %2 == 0) )
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
