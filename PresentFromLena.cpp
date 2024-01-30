 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=-n ; i<= n ;i++)// this covers no of rows
    {
        int space = 2*abs(i);
        for(int i = 0;i<space;i++) cout<<" ";
        int max = n -abs(i);
        for(int i = 0;i<max;i++) cout<<i<<" ";
        for(int i = max ; i> 0 ; i--) cout<<i<<" ";
        cout<<0<<endl; 
    }
    return 0;
}   

