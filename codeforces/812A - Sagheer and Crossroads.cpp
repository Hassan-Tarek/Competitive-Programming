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
    int l[4], s[4], r[4], p[4];
    for (int i = 1; i < 4; i++) {
        cin >> l[i] >> s[i] >> r[i] >> p[i];
    }
    cin >> l[0] >> s[0] >> r[0] >> p[0];
    bool b = false;
    for (int i = 0; i < 4; i++) {
        int c = 0;
        if (l[i])
            b = p[(i + 3) % 4], c++;
        if (s[i])
            b |= p[(i + 2) % 4], c++;
        if (r[i])
            b |= p[(i + 1) % 4], c++;
        if (c)
            b |= p[i];
        if (b)
            break;
    }
    cout << (b ? "YES" : "NO") << endl;
}
