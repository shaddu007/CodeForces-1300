 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 using namespace std;

int main()
{
    int n;
    string t1,t2;
    cin>>n>>t1;
    int cntT1=1;
    int cntT2=0;
    for(int i = 1; i<n;i++ )
    {
        string team;
        cin>>team;
        if(team == t1) cntT1++;
        else {
            cntT2++;
            t2 = team;
            }
    }
    if(cntT1 > cntT2) cout<<t1<<endl;
    else cout<<t2<<endl;
    return 0;

}