#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    long long  t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    for(int i = 0;i<t;i++)
    {
        if(sx==ex && sy==ey)
        {
            cout<<i<<endl;
            return 0;
        }
             if(s[i]== 'E' && ex-sx>0) sx+=1;
        else if(s[i]== 'W' && ex-sx<0) sx-=1;
        else if(s[i]== 'N' && ey-sy>0) sy+=1;
        else if(s[i]== 'S' && ey-sy<0) sy-=1;
    }
     if(sx==ex && sy==ey)
        {
            cout<<t<<endl;
            return 0;
        }
    cout<<-1<<endl;
    return 0;
}
// 19 -172106364 -468680119 -172106365 -468680119
// SSEEESSSESESWSEESSS