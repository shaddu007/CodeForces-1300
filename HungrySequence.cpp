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
    vector<int>nums(n,0);
    int sum = 3*n;
    for(int i = 0;i<n;i++)
    {
        nums[i] = sum;
        sum+=1;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
