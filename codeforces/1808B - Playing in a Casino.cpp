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
    int t;
    cin >> t;
    while (t--) {
        ll n, m, ans = 0;
        cin >> n >> m;
        vector<vector<ll>> v(m, vector<ll>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[j][i];
            }
        }
        for (int i = 0; i < m; i++) {
            sort(v[i].begin(), v[i].end());
            ll sum = 0;
            for (int j = 0; j < n; j++) {
                ans += (v[i][j] * j - sum);
                sum += v[i][j];
            }
        }
        cout << ans << endl;
    }
}