#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // Los negativos no son palíndromos
        if (x < 0) return false;

        long long original = x;
        long long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};

int main() {
    Solution sol;

    int x = 121;
    cout << boolalpha << sol.isPalindrome(x) << endl; // true

    x = -121;
    cout << boolalpha << sol.isPalindrome(x) << endl; // false

    x = 10;
    cout << boolalpha << sol.isPalindrome(x) << endl; // false

    return 0;
}
