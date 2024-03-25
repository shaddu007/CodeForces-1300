#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;


int main()
{
    string str;
    cin>>str;
    int n = str.length();
    bool flag = true;
    for(int i = 0; i<n ; i++)
    {
    
        if(str[i]=='0' && str[i-1] == '1')
        {
            flag = false;
            str.erase(i,1);
            break;
        }
    }
    if(flag) str.erase(n-1,1);
    cout<<str<<endl;
    return 0;
}
