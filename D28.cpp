#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isBinaryDecimal(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // Check if n is already a binary decimal
        if (isBinaryDecimal(n)) {
            cout << "YES" << endl;
            continue;
        }
        
        // Check if n can be represented as a product of binary decimals
        bool possible = false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int factor = n / i;
                if (isBinaryDecimal(i) && isBinaryDecimal(factor)) {
                    possible = true;
                    break;
                }
            }
        }
        
        // Output the result
        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
