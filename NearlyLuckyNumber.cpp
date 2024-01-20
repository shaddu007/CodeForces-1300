 #include<iostream>
 using namespace std;

int main()
{
    long long n;
    cin>>n;
    int cnt=0;
    while(n>0)
    {
        int rem = n%10;
        n=n/10;
        if(rem == 4 || rem == 7)        
        {
            cnt++;
        }
    }
    if(cnt==4 || cnt==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}