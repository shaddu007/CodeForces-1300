#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    int n = 5;
    vector<vector<int>> line(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> line[i][j];
        }
    }
    int p[] = {0, 1, 2, 3, 4}; // Initialize permutation array

    long long ans = 0;
    do {
        long long temp = 0;
        //12345
        temp += line[p[0]][p[1]] + line[p[1]][p[0]] + line[p[2]][p[3]] + line[p[3]][p[2]];
        //2345
        temp += line[p[1]][p[2]] + line[p[2]][p[1]] + line[p[3]][p[4]] + line[p[4]][p[3]];
        //345
        temp += line[p[2]][p[3]] + line[p[3]][p[2]];
        //45
        temp += line[p[3]][p[4]] + line[p[4]][p[3]];
        ans = max(ans, temp);
    } while (next_permutation(p, p + n)); // Generate all permutations

    cout << ans << endl;
    return 0;
}