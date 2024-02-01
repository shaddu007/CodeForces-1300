#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> flower(n);

    // Map to store the frequency of each beauty value
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> flower[i];
        freq[flower[i]]++;
    }

    long long maxi = *max_element(flower.begin(), flower.end());
    long long mini = *min_element(flower.begin(), flower.end());

    long long ways = 0;

    if (maxi == mini) {
        // All flowers have the same beauty, calculate combinations
        ways = (long long)n * (n - 1) / 2;
    } else {
        ways = (long long)freq[maxi] * freq[mini];
    }

    cout << maxi - mini << " " << ways;

    return 0;
}
