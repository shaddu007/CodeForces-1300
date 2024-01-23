#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string r,s;
    cin>>r>>s;
    int sum = 0;
    for(int i = 0;i<s.size();i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - ('a' - 'A');
        if (r[i] >= 'a' && r[i] <= 'z')
            r[i] = r[i] - ('a' - 'A');

        sum += r[i] - s[i];
         if(sum>0)
         {
            cout<<1; return 0;
         } 
       if(sum<0)
       {
         cout<<-1; return 0;
       }
    }    
    if(sum==0) cout<<0;
    
    return 0;

}