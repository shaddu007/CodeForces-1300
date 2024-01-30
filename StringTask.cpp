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
    int i = 0;
    int size = s.length();
    while (i<size)
    {
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u' || s[i] == 'y' || s[i] == 'Y')
        {
            s.erase(i,1);
            size--;
            continue;
        }
        if(isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
           s.insert(i,1,'.');
           i++;
           size++;
        }
        
        i++;
    }
    cout<<s;
    return 0;
}   

 