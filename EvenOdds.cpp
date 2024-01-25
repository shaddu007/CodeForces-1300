 #include<iostream>
 #include<vector>
 using namespace std;

int main()
{
    long long  n,m;
    cin>>n>>m;
    long long  mid = 0;
    if(n%2==0) mid = n/2;
    else mid = n/2 +1;
    long long  cnt = 0;
    if(m <= mid){
        long long  nth;
        nth = 1 + (m - 1)*2;
        cout<<nth<<endl;
        return 0;
    }
    else{
        long long nth;
        nth = 2 + (m - mid - 1)*2;
        cout<<nth<<endl;
        return 0;
    }
    
    return 0;

}