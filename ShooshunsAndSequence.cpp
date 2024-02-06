#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>num(n,0);
    
    for(int i = 0;i < n;i++)
    {
        cin>>num[i];
    }
    int i = n-1;
    while(i>0)
    {
        if(num[i]!=num[i-1])
        {
            break;
        }
        i--;
    }
    if(i == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(i>k-1)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<i<<endl;
    return 0;
}