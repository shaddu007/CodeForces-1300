 #include<iostream>
 #include<vector>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    int minimum = INT_MAX;
    bool flag = true;
    int index = 0;
    for(int i= 0;i<n;i++)
    {
        int val;
        cin>>val;
        if(minimum == val)
        {
            flag = false;
        }
        if( val < minimum)
        {
            minimum = val;
            flag = true;
            index = i+1;
        }
    }
    if(flag) cout<<index<<endl;
    else cout<<"Still Rozdil"<<endl;
    return 0;

}