 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n==0) return 0;
    int cnt = 0;
    for(int i = 1;i<=n;i++)
    {
        
        if(i-1>=a && n-i <= b)
        cnt++;
    }
    cout<<cnt;
    return 0;
}   

