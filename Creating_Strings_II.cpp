/******************************************
* AUTHOR : Prabhat Ravi *
* NICK : prabhatravi/binaryfetch/binaryfetch_9 *
******************************************/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;
const ll mod = 1e7 + 7;
const ll N = 1e6 + 5;
vector<ll>f(N);
vector<ll>inv(N);

ll binpow(ll a, ll b, ll m = 1e9 + 7) {
    ll ans = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            //odd
            ans = (ans * a) % m;
        }
        b = b / 2;
        a = (a * a) % m;
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            f[i] = 1;
        } else {
            f[i] = f[i - 1] * i % mod;
        }
        inv[i] = binpow(f[i], mod - 2);
    }
    vector<ll>v(26);
    for (int i = 0; i < n; ++i)
    {
        v[s[i] - 'a']++;
    }
    ll ans = f[n];
    for (auto i : v) {
        ans = ans * inv[i] % mod;
    }
    cout << ans;
    return 0;
}
