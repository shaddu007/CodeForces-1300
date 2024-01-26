 #include<iostream>
 #include<vector>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    int zeroCnt= 0;
    int nineCnt = 0;
    for(int i = 0;i<n;i++)
    {
        int val;
        cin>>val;
        if(val == 5) nineCnt++;
        else zeroCnt++;
    }
    string ans = "";
    if(zeroCnt == 0)
    {
        cout<<-1;
        return 0;
    }
    if(nineCnt < 9)
    {
        cout<<0;
        return 0;
    }
    int multi= nineCnt/9;
    nineCnt = multi* 9;
    for(int i=0;i<nineCnt;i++)
    {
        ans+='5';
    }
    for(int i=0;i<zeroCnt;i++)
    {
        ans+='0';
    }
    cout<<ans<<endl;
    return 0;
}