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
    int n,k;
    cin>>n>>k;
    vector<int>fence(n);
    for(int i = 0;i<n;i++)
    {
        cin>>fence[i];
    }
    int left = 0;
    int index = 1;
    int sum = accumulate(fence.begin(),fence.begin()+k,0);
    int minSum = sum;
   
    for (int right = k; right < n; right++)
    {
        sum-=fence[left++];
        sum+=fence[right];
        if(sum<minSum)
        {
            index = left+1;
            minSum = sum;
        }
    }
    cout<<index;
    
    return 0;

}
