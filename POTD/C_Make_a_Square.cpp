#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

bool isSubsequence(string &s, string &t){
    int i = 0,j=0;
    while( i < s.size()){
        if(s[i] == t[j]){
            j++;
        }
        i++;
    }
    return j == t.size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<string> t;

    for(int i = 1; i*i <= 2e9; i++){
        ll num = i*i;
        string temp = to_string(num);
        t.push_back(temp);
    }
    string s = to_string(n);

    ll i = 0;
    ll ans = LLONG_MAX;
    while( i < t.size() && s.size() >= t[i].size()){
        if(isSubsequence(s,t[i])){
            ll diff = s.size()-t[i].size();
            ans = min(ans, diff);
        }
        i++;
    }

    if(ans == LLONG_MAX){
        cout << -1 << endl;
    }else 
    cout << ans << endl;
    return 0;
}