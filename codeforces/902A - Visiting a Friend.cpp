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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mn = min(mn, a);
        if (b > mx)
            v.emplace_back(a, b), mx = b;
    }
    if (v.size() == 1) {
        if (m <= mx && mn == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else {
        bool b = true;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i].second < v[i + 1].first) {
                b = false;
                break;
            }
            if (v[i].second >= m)
                break;
        }
        cout << (b && m <= mx && mn == 0 ? "YES" : "NO") << endl;
    }
}
