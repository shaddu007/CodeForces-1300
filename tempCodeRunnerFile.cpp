 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 1;i<n;i++)
    {
        arr.push_back(i+1);
    }
    arr.push_back(1);
    for(int i = 0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}   

