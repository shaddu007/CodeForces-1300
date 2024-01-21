#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    float totalVolume = n*100;
    float volumeOfOrange=0;
    for(int i = 0; i<n;i++)
    {
        volumeOfOrange+=v[i];
    }
    float percent=(volumeOfOrange/totalVolume)*100;
    cout<<percent<<endl;
    return 0;
}