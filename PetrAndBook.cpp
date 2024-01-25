 #include<iostream>
 #include<vector>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>pages(7);
    for(int i = 0 ;i<7;i++)
    {
        cin>>pages[i];
    }
    int day = 0;
    int totalPages=0;
    int i = 0;
    while (true)
    {
        totalPages+=pages[i];
        
        if(totalPages>= n)
        {
            day= i+1;
            break;
        }
        i++;
        i=i % 7;
        
    }
    cout<<day<<endl;
    return 0;
}