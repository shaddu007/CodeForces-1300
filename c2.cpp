#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    int mod = 1000000007;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int sum = 0;
        int index = 0;
        int maxSum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sum < 0)
                sum = 0;
            else if (sum > maxSum) {
                maxSum = sum;
                index = i;
            }
        }
        // Handle the case where maxSum is negative
        if (maxSum <= 0) {
            sum = accumulate(nums.begin(),nums.end(),0);
            cout <<mod+sum<< endl;
            continue;
        }
        while (k--) {
            nums.insert(nums.begin() + index, maxSum);
            // Adjust index to insert at the next position
            maxSum += maxSum;
            index++;
        }
     
        cout << maxSum % mod << endl;
    }

    return 0;
}
