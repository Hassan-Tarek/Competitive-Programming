#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
constexpr ll oo = 1e9 + 7;
constexpr double EPS = 1e-7;

void solve(string n, string m) {
    reverse(n.begin(), n.end());
    reverse(m.begin(), m.end());

    vector<int>v(700, 0);
    for (int i = 0; i < n.size(); ++i) {
        for (int j = 0; j < m.size(); ++j) {
            v[i + j] += (n[i] - '0') * (m[j] - '0');
        }
    }

    for (int i = 0; i < v.size() - 1; ++i) {
        v[i + 1] += v[i] / 10;
        v[i] %= 10;
    }

    int i = v.size() - 1;
    while (i > 0 && v[i] == 0) i--;

    for (; i >= 0; --i)
        cout << v[i];
    cout << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string n, m;
    while (cin >> n) {
        cin >> m;
        solve(n, m);
    }
}
