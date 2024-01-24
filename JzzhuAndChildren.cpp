#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>nums;
    for(int i = 1;i<=n;i++)
    {
        int val;
        cin>>val;
        nums.push_back({val,i});
    }
    int size = nums.size();
    int index= 0;
    while(size>0)
    {
        if(nums[0].first <= m)
        {
            index = nums[0].second;
            nums.erase(nums.begin());
            size--;
        }
        else{
            nums.push_back({nums[0].first - m,nums[0].second});
            nums.erase(nums.begin());
        }
        if (size == 0) {
            break;
        }

    }
    cout<<index<<endl;
    return 0;
}
