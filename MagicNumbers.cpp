 #include<iostream>
 #include<vector>
 #include<string>
 using namespace std;

int main()
{
    int n;
    cin>>n;
    string s = to_string(n);
    int i = 0;
    while(i<s.length())
    {
        if(s[i] != '1' && s[i] != '4')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i+=3;
            continue;
        }
        else if(s[i]=='1' && s[i+1]=='4')
        {
            i+=2;
            continue;
        }
        else if(s[i]=='1')
        {
            i++;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        
    }
    cout<<"YES"<<endl;
    return 0;

}