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
    int n, count = 1;
    cin >> n;
    vector<int> v(n);
    for (int& x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++) {
        count += (v[i] != v[i - 1]);
    }
    cout << count << endl;
}