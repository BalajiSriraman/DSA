class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) {
        return false;  
    }
    if (n == 1) {
        return true;  
    }

    // Recursive case
    if (n % 3 == 0) {
        return isPowerOfThree(n / 3);  
    }
    return false;  
    }
};