#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll ans = a[n-1]-a[0];

    for(int i = 1; i < n; i++){
        ans = max(ans,a[i]-a[0]);
    }
    for(int i = 0; i < n-1; i++){
        ans = max(ans, a[n-1]-a[i]);
        ans = max(ans, a[i]-a[i+1]);
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1; 
    cin >> t;
    while(t--) solve();
    return 0;
}