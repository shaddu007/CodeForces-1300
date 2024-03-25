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
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i<n ; i++)
    {
        cin>>nums[i];
    }

    int total = abs(accumulate(nums.begin(),nums.end(),0));
    int ans = 0;
    int avg = total/n;
    for(int i = 0; i< n-1 ; i++)
    {
        if(nums[i] ==  avg) ans++;
        else if(nums[i] > avg)
        {
            nums[i + 1] = nums[i+1]+(nums[i] - avg);
            nums[i] = avg;
            ans++; 
        }
        else{
            nums[i + 1] = nums[i + 1] - (avg - nums[i]);
            nums[i] = avg;
            ans++;
        }
    }
    if(nums[n-1] == avg ) ans++;
    
    cout<<ans<<endl;
    return 0;
}   

