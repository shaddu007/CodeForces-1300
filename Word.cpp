#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int NumOfUpercase=0;
    int NumOfLowercase=0;
    for(int i = 0;i < n; i++)
    {     
        if(s[i]>=65 && s[i]<=90)
        NumOfUpercase++;
        else NumOfLowercase++; 
    }
    if(NumOfLowercase>=NumOfUpercase)
    {
        for(int i = 0;i < n; i++)
        {    
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    else
    {
        for(int i = 0;i < n; i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i] = s[i]-32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}