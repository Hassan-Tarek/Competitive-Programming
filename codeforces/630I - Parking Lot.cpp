#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
constexpr ll oo = 1e9 + 7;
constexpr double EPS = 1e-7;

long long bin_pow(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1)
            res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    cin >> n;
    cout << 2 * 4 * 3 * bin_pow(4, n - 3) + (n - 3) * 4 * 9 * bin_pow(4, n - 4) << endl;
}
