#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int value=0;
   while(n--)
   {
       string s;
       cin>>s;
       bool flag = true;
       for(int i = 0 ;i<s.size()-1;i++)
       {
           if(s[i]=='+' && s[i+1]=='+')
           {
               break;
           }
           else if(s[i]=='-' && s[i+1]=='-')
           {
              flag = false ;
              break;
           }
       }
       if(flag) value++;
           else value--;
   }
   cout<<value;
   return 0;
}