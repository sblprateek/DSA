class Solution {
public:
    int countGoodNumbers(long long n) {
        long long mod = 1e9 + 7;
        long long evenPos = (n + 1) / 2;
        long long oddPos = n / 2;

        long long ans = (power(5, evenPos, mod) * power(4, oddPos, mod)) % mod;
        return ans;
    }

private:
    long long power(long long base, long long exp, long long mod) {
        if (exp == 0) return 1;
        
        long long half = power((base * base) % mod, exp / 2, mod);

        if (exp % 2 == 0)
            return half;
        else
            return (base * half) % mod;
    }
};
