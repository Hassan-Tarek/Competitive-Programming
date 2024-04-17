#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
constexpr ll oo = 1e9 + 7;
constexpr double EPS = 1e-7;

long long bin_pow(long long a, long long n, long long m) {
    long long res = 1;
    while (n > 0) {
        if (n & 1)
            res = res * a % m;
        a = a * a % m;
        n >>= 1;
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, n, m;
        cin >> a >> n >> m;
        cout << bin_pow(a, n, m) << endl;
    }
}