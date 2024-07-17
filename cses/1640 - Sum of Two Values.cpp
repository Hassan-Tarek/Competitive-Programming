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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if (mp.count(x - v[i])) {
            cout << i + 1 << " " << mp[x - v[i]] << endl;
            return 0;
        }
        mp[v[i]] = i + 1;
    }
    cout << "IMPOSSIBLE" << endl;
}
