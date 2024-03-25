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
    int y,k,n;
    cin>>y>>k>>n;
    if(y >= n || (y/k + 1)*k>n) cout<<-1;
    else{
        vector<int>ans;
        int val ;
        y % k == 0 ? val = k : val = (y/k + 1)*k - y;
        ans.push_back(val);
        int x = ans[0];
        while(x+k <= n-y)
        {
            x += k;
            ans.push_back(x);
        }
        for(auto num : ans)
        {
        cout<<num<<" ";
        }
    }
    
    return 0;
}   

