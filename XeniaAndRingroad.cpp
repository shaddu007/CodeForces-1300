 #include<iostream>
 #include<vector>
 using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>house;
    for(int i = 0 ;i<m;i++)
    {
        int val;
        cin>>val;
        house.push_back(val);
    }

    long long time = house[0] - 1;
    int prev = house[0];
    for(int i = 1;i<house.size();i++)
    {
        if(house[i]>prev)
        {
            time += house[i] - prev;
            prev = house[i];
        }
        else if(house[i] < prev)
        {
            time += n - prev + house[i];
            prev = house[i];
        }
    }
    cout<<time<<endl;
    return 0;
}