#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long  vasya=0;
    long long  petya = 0;
    vector<int>nums(n);
    for(int i =0 ;i<n;i++)
    {
        cin>>nums[i];
        
    }
    int m ;
    cin>>m;
    for(int i =0 ;i<m;i++)
    {
        int key;
        cin>>key;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == key)
            {
                vasya+=(i+1);
                petya+=(n-i);
                break;
            }
        }
    }
    
    cout<<vasya<<" "<<petya<<endl;
    return 0;
}