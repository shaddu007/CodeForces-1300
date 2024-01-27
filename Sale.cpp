 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>tv(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>tv[i];
    }
    sort(tv.begin(),tv.end());
    int earn= 0;
    
    while(cnt<m)
    {
        if(tv[cnt]>0) break;
        earn+=tv[cnt++];
    }
    cout<<abs(earn)<<endl;
    return 0;

}