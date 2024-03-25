#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>
using namespace std;

int maxDistinctElements(const std::vector<int>& numbers) {
    std::unordered_map<int, int> frequencies;
    std::set<int> distinctElements;

    // Count frequencies and insert into the set
    for (int num : numbers) {
        frequencies[num]++;
        distinctElements.insert(num);
    }

    // Simulate operations while elements have duplicates
    for (int num : distinctElements) {  // Iterate over distinct elements
        if (frequencies[num] > 1) {
            int extra = frequencies[num] - 1; // Elements to remove besides one
            while (extra > 0 && frequencies[num] > 0) { 
                frequencies[num]--;
                extra--;
            }
            if (frequencies[num] == 0) {  // Entirely remove if frequency is 0
                distinctElements.erase(num);
            }
        }
    }

    return distinctElements.size();
}


int main() {
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i = 0;i < n;i++)
    {
        cin>>numbers[i];
    }

   int maxDistinct = maxDistinctElements(numbers);

    std::cout << "Maximum number of distinct elements: " << maxDistinct << std::endl;

    return 0;
}
