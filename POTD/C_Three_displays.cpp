#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e18

void solve() {
    ll n;
    cin >> n;
    vector<ll> s(n), c(n);

    for (ll i = 0; i < n; i++) cin >> s[i];
    for (ll i = 0; i < n; i++) cin >> c[i];

    ll ans = INF;


    for (ll j = 1; j < n - 1; j++) {
        ll bestLeft = INF, bestRight = INF;

        for (ll i = 0; i < j; i++) {
            if (s[i] < s[j]) {
                bestLeft = min(bestLeft, c[i]);
            }
        }
        
        for (ll k = j + 1; k < n; k++) {
            if (s[j] < s[k]) {
                bestRight = min(bestRight, c[k]);
            }
        }

        if (bestLeft < INF && bestRight < INF) {
            ans = min(ans, bestLeft + c[j] + bestRight);
        }
    }

    if (ans == INF) cout << -1 << "\n";
    else cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
