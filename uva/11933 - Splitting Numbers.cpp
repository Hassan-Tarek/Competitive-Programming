#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
constexpr ll oo = 1e9 + 7;
constexpr double EPS = 1e-7;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    while (cin >> n && n != 0) {
        int a = 0, b = 0, mask = 1;
        bool turn = true;
        for (int i = 0; i < 31; i++) {
            if (mask & n) {
                if (turn) a |= mask;
                else b |= mask;
                turn ^= 1;
            }
            mask <<= 1;
        }
        cout << a << " " << b << endl;
    }
}
