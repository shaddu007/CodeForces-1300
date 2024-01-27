 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int cnt = 0;
    for(int i = 0;i<=sqrt(n);i++)
    {
        for(int j =0;j<=sqrt(m);j++)
        {
            if(i*i + j == n && j*j + i == m)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;

}