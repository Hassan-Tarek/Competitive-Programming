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
    while (cin >> n && n > 0) {
        string s;
        cin >> s;
        vector<int> r_indexes, d_indexes;
        bool z_founded = false;
        for (int i = 0; i < n && !z_founded; i++) {
            if (s[i] == 'R')
                r_indexes.push_back(i);
            else if (s[i] == 'D')
                d_indexes.push_back(i);
            else if (s[i] == 'Z')
                z_founded = true;
        }
        int ans = INT_MAX;
        if (z_founded) {
            ans = 0;
        }
        else {
            for (int x : r_indexes) {
                for (int y : d_indexes) {
                    int dist = ::abs(x - y);
                    ans = min(ans, dist);
                }
            }
        }
        cout << ans << endl;
    }
}
