 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;
void littleElephant(vector<int>&arr,int x)
{
    if(x==1){
        return ;
    }
    swap(arr[x-1],arr[x-2]);

    littleElephant(arr,x-1);

}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 1;i<=n;i++)
    {
        arr.push_back(i);
    }
    littleElephant(arr,n);
    for(int i = 0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}   

