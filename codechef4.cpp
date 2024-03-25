#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <string>
#include <math.h>
using namespace std;

std::string binary(int n) {
    std::string bin = "";
    while (n > 0) {
        int rem = n % 2;
        bin += std::to_string(rem);
        n = n / 2;
    }
    
    return bin;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        if (n <= 4) {
            std::cout << 0 << std::endl;
            continue; // Skip the rest of the loop iteration
        }
        
        std::string bin = binary(n);
        int sum = 0;
        
        bool changes = true;
        while (changes) {
            changes = false;
            int left = 0;
            int right = 0;
            for (left; left < bin.length(); left++) {
                if (bin[left] == '1') break;
            }
            
            for (right = left; right < bin.length(); right++) {
                if (bin[right] == '0') break;
            }
        
            if(right<bin.length())
            {
                sum += pow(2, left);
                changes = true;
                for(int i = 0;i<right ;i++)
                {
                    bin[i] = '0';
                }
                bin[right] ='1';
            }
   
        }
        std::cout << sum << std::endl;
    }
    return 0;
}

