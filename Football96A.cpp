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
    int cnt = 1;
    if(s.length()<7) 
    {
        cout<<"NO"<<endl;
        return 0;
    }
    char match=s[0];
    for(int i = 1;i<s.length();i++)
    {
        if(s[i] == match)
        cnt++;
        else{
            match=s[i];
            cnt=1;
        }
        if(cnt==7){
            cout<<"YES"<<endl;
            return 0;
           }
    }
    cout<<"NO";
    return 0;
}   

