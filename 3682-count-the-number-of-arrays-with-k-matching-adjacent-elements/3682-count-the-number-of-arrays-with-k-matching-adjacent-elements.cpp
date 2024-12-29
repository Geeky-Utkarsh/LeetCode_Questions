// class Solution {
// public:
//     int countGoodArrays(int n, int m, int k) {
        
//     }
// };




const int MOD = 1e9 + 7;

// Function to calculate (base^exp) % MOD efficiently
long long modExp(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to calculate factorial % MOD and modular inverse factorial % MOD
void precomputeFactorials(vector<long long>& fact, vector<long long>& invFact, int n, int mod) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    invFact[n] = modExp(fact[n], mod - 2, mod);
    for (int i = n - 1; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % mod;
    }
}

// Function to calculate nCr % MOD
long long nCr(int n, int r, const vector<long long>& fact, const vector<long long>& invFact, int mod) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[r] % mod * invFact[n - r] % mod;
}

class Solution {
public:
    int countGoodArrays(int n, int m, int k) {
        // Precompute factorials and inverse factorials
        vector<long long> fact(n + 1), invFact(n + 1);
        precomputeFactorials(fact, invFact, n, MOD);

        // Calculate the number of good arrays
        long long result = 0;

        // First element has `m` choices
        // Choose `k` positions for consecutive equal values
        // Remaining (n - 1 - k) positions have (m - 1) choices

        result = (nCr(n - 1, k, fact, invFact, MOD) * modExp(m - 1, n - 1 - k, MOD)) % MOD;
        result = (result * m) % MOD;

        return result;
    }
};
