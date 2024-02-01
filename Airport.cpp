 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 #include <queue>
 using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    priority_queue<int, vector<int>, greater<int>> seatmin;
    priority_queue<int>seatmax;
    for(int i = 0; i< m;i++)
    {
        int val;
        cin>>val;
        seatmin.push(val);
        seatmax.push(val);
    }
    int maximum = 0;
    int cnt = n;
    while(true)
    {
            int top = seatmax.top();
            seatmax.pop();
            seatmax.push(top-1);
            maximum += top;
            cnt--;
            if(cnt == 0) break;
    }

    int minimum = 0;
    cnt=n;
    while(true)
    {
            int top = seatmin.top();
            seatmin.pop();
            if(top>1) seatmin.push(top-1);
            minimum += top;
            cnt--;
            if(cnt == 0) break;
    }
    cout<<maximum<<" "<<minimum;
    return 0;
}   

