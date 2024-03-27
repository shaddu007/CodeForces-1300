 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 #include<numeric>

 using namespace std;

int main()
{
    int n ;
    cin>>n;
    string s;
    cin>>s;
    int left = 0, right = 2*n-1;
    sort(s.begin(),s.begin()+n);
    sort(s.begin()+n,s.end()); 
    reverse(s.begin()+n,s.end()); 
    bool lucky1 = true;
    bool lucky2 = true;
    while(left < right)
    {
        if(s[left++] - '0' < s[right--]- '0') 
        {
            continue;
        }
        else{
            lucky1 = false;
            break;
        }
    }
    left = 0, right = 2*n -1;
    while(left < right)
    {
        if(s[left++] - '0' > s[right--]- '0') 
        {
            continue;
        }
        else {
            lucky2 = false;
            break;
        }
    }
   // cout<<s<<endl;
     if(lucky1 || lucky2) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}   

