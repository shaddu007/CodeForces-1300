 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>rear(n);
    
    for(int i = 0;i<n;i++)
    {
        cin>>rear[i];
    }
    int m ;
    cin>>m;
    vector<int>front(m);
    for(int i = 0;i<m;i++)
    {
        cin>>front[i];
    }
    int ratio= 0;
    int cnt = 0;
    for(int i = 0; i<n;i++)
    {
        int div=0;
        for(int j = 0;j<m;j++)
        {
            if(front[j]%rear[i]==0)
            {
                div = front[j]/rear[i];
                if(div > ratio)
                {
                    ratio = div;
                    cnt = 1;
                }
                else if(div == ratio)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;

}