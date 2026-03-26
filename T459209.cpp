#include <bits/stdc++.h>
using namespace std;

char mp[1005][1005];
bool vis[1005][1005];
int tx[] = {0, 0, -1, 1};
int ty[] = {-1, 1, 0, 0};
int n, m;
int tmp;
int tot = 1;
int col[1010][1010];
int ans[1010101];
void dfs(int x, int y, char cur) {
    for (int i = 0; i < 4; i++) {
        int cx = x + tx[i];
        int cy = y + ty[i];
                if (cx > n || cy > n || cx < 1 || cy < 1 || mp[cx][cy] == cur || vis[cx][cy] == 1) {
            continue;
        }
        
        vis[cx][cy] = 1;
        col[cx][cy] = tot;
        ans[tot]++;
        dfs(cx, cy, mp[cx][cy]);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (!vis[i][j]) {
                vis[i][j] = 1;
                ans[tot]++;
                col[i][j] = tot;
                dfs(i, j, mp[i][j]);
                tot++;
            }
        }
    }
    
    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << ans[col[a][b]] << '\n';
    }
    
    return 0;
}
