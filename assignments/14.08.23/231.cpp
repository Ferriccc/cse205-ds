class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; // power of 2 cant be non-positive
        if (n == 1) return true;
        if (n % 2) return false;
        return (isPowerOfTwo(n / 2));
    }
};
