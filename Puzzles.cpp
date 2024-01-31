 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>pieces(m);
    for(int i = 0;i < m;i++)
    {
        cin>>pieces[i];
    }
    sort(pieces.begin(),pieces.end());
    int diff = INT_MAX;
    int j=0;
    for(int i = n-1; i<m;i++)
    {
        diff = min(diff,pieces[i]-pieces[j++]);
    }
    cout<<diff;
    return 0;
}   

