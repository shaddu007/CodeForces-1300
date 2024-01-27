 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 using namespace std;

int main()
{
    int k;
    cin>>k;
    int water[12] ;
    for(int i = 0;i<12;i++)
    {
        cin>>water[i];
    }
    sort(water,water+12,greater<int>());
    int month= 0;
    int size= 0;
    while(size < k && month < 12)
    {
        size += water[month++];
    }
    if(month==12 && size != k) cout<<-1<<endl;
    else
    cout<<month<<endl;
    return 0;
}