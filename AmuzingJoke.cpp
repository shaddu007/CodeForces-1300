#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s,l,m;
    cin>>s>>l>>m;
    if(s.length()+l.length()!= m.length())
    {
        cout<<"NO";
        return 0;
    }
    string str = s + l;
    sort(str.begin(),str.end());
    sort(m.begin(),m.end());
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]!=m[i])
        {
            cout<<"NO";
            return 0;
        }
        
    }
    cout<<"YES";
    return 0;
}