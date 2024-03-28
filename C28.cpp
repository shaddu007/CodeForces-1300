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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string hour = s.substr(0, 2);
        string minute = s.substr(3, 2);

        if (hour == "00")
            cout << "12:" << minute << " AM" << endl;
        else if (hour >= "01" && hour <= "11")
            cout << s << " AM" << endl;
        else if (hour == "12")
            cout << s << " PM" << endl;
        else
        {
            int time = stoi(hour) - 12;
            if (time < 10)
            {
                hour = "0" + to_string(time);
            }
            cout << hour << ":" << minute << " PM" << endl;
        }
    }
    return 0;
}
