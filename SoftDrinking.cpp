#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;
    int totalDrink = l*k;
    int totalSlices= c*d;
    int needDrink = totalDrink/nl;
    int needSalt =p/np ;
    int minValue = min({needDrink, totalSlices, needSalt});
    
    // Output the result
    cout << minValue / n << endl;
    return 0;
}