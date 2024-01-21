 #include<iostream>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    int base;
    cin>>base;
    int maxScore=base;
    int minScore = base;
    int cnt = 0;
    for(int i = 1; i < n; i++ )
    {
        int val;
        cin>>val;
        if(val > maxScore)
        {
            cnt++;
            maxScore = val;
        }
        else if(val < minScore)
        {
            cnt++;
            minScore = val;
        }
    }
    cout<<cnt<<endl;
    return 0;
}