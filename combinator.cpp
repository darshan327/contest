class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long power(long long a, long long b) {
        long long ans = 1;

        while (b > 0) {
            if (b & 1)
                ans = ans * a % MOD;

            a = a * a % MOD;
            b >>= 1;
        }

        return ans;
    }

    long long C(int n, int r) {
        if (r < 0 || r > n)
            return 0;

        long long fact[2005];

        fact[0] = 1;

        for (int i = 1; i <= n; i++)
            fact[i] = fact[i - 1] * i % MOD;

        long long numerator = fact[n];

        long long denominator =
            power(fact[r], MOD - 2) *
            power(fact[n - r], MOD - 2) % MOD;

        return numerator * denominator % MOD;
    }

    int numberOfSets(int n, int k) {
        return C(n + k - 1, 2 * k);
    }
};