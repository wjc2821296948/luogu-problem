#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAXN = 5e4 + 2;
ll d[MAXN];

bool check(ll mid, ll l, ll n, ll m) {
    ll p = 0, c = 0;
    for(ll i = 1; i <= n + 1; i++) {
        if(d[i] - d[p] < mid) {
            c++;
            continue;
        } else {
            p = i;
        }
        // if(c >= m) {
        //     return true;
        // }
    }
    // return false;
    return c >= m;
}

ll search(ll left, ll right, ll l, ll n, ll m) {
    while(left <= right) {
        ll mid = (left + right) / 2;
        if(check(mid, l, n, m)) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return right;
}

int main(void) {
    ll l, n, m;
    cin >> l >> n >> m;
    for(ll i = 1; i <= n; i++) {
        cin >> d[i];
    }
    d[n + 1] = l;
    cout << search(1, l, l, n, m);

    return 0;
}