#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    unordered_map<char,int>chars;
    
    for(auto c : s1)
    {
        if(c !=' ')
        chars[c]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if(s2[i] !=' ')
        {
            if((chars.find(s2[i]) != chars.end()) && chars[s2[i]] > 0)
            {
                chars[s2[i]]--;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
        
    }
    cout<<"YES"<<endl;
    
    return 0;
}
