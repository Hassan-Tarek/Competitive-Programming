#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
constexpr ll oo = 1e9 + 7;
constexpr double EPS = 1e-7;

ll solve(vector<ll>& weights, int index, ll sum1, ll sum2) {
    if (index == weights.size()) {
        return abs(sum1 - sum2);
    }

    return min(solve(weights, index + 1, sum1 + weights[index], sum2),
        solve(weights, index + 1, sum1, sum2 + weights[index]));
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> weights(n);
    for (auto& weight : weights) {
        cin >> weight;
    }

    ll min_diff = solve(weights, 0, 0, 0);
    cout << min_diff << endl;
}
