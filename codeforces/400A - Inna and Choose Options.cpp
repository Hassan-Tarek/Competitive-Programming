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
        string s;
        cin >> s;
        vector<pair<int, int>> ans;
        for (int i = 1; i <= 12; i++) {
            vector<string >v;
            if (12 % i != 0)
                continue;
            int sp = 12 / i;
            for (int j = 0; j < 12; j += i)
                v.push_back(s.substr(j, i));
            for (int j = 0; j < i; j++) {
                bool b = true;
                for (int k = 0; k < sp; k++) {
                    if (v[k][j] != 'X') {
                        b = false;
                        break;
                    }
                }
                if (b) {
                    ans.emplace_back(sp, i);
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans.size() << " ";
        for (auto x : ans) {
            cout << x.first << "x" << x.second << " ";
        }
        cout << endl;
    }
}
