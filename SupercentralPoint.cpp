 #include<iostream>
 #include<vector>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>co;
    for(int i = 0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        co.push_back({x,y});
    }
    int cnt = 0;
    for(int i = 0; i< n;i++)
    {
        int x = co[i].first,y=co[i].second;
        bool r= false,l=false,u=false,lu=false;
        for(int j = 0; j< n ;j++)
        {
            if(co[j].first > x && co[j].second==y) r=true;
            if (co[j].first < x && co[j].second==y) l = true;
            if (co[j].first == x && co[j].second > y) u= true;
            if(co[j].first == x && co[j].second < y) lu = true;
            
        }
        if(r && l && u && lu)
                {
                    cnt++;
                    
                }
       
    } 
    cout<<cnt<<endl;
    return 0;
}