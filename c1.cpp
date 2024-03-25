#include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i = 0 ;i<n ;i++)
        {
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int mid ;
        n%2 == 0 ? mid = n/2 -1 : mid = n/2;
        int ans = 1;
        for(int i = mid + 1; i<n; i++)
        {
            if(nums[mid] == nums[i])
            ans++;
            else break;
        }
        cout<<ans<<endl;
    }

    return 0;
}   

