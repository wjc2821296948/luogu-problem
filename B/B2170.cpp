#include <bits/stdc++.h>
using namespace std;
#define maxn 500010
vector<int> t[maxn];
int dep[maxn];
void dfs(int u,int pu) {
    dep[u] = dep[pu] + 1;
    for (int i = 0;i < t[u].size();i++) {
        int v = t[u][i];
        if (v != pu) {
            dfs(v, u);
        }
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 1;i < n;i++) {
        int u, v;
        cin >> u >> v;
        t[u].push_back(v);
        t[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1;i <= n;i++) {
        cout<<dep[i]<<" ";
    }
    cout<<endl;
    return 0;
}
