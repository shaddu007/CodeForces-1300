 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<pair<int,char>>word;
    string match = "hello";
    int j = 0;
    for(int i = 0;i<match.length();i++)
    {
        while(j < s.length())
        {
            if(match[i] == s[j])
            {
                j++;
                break;
            }
            else{
                j++;
            }
            
        }
        if(j>=s.length() && i<match.length())
        {
            if(s[s.length()-1]=='o' && i==4)
            {
                cout<<"YES";
                return 0;
            }
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}   

