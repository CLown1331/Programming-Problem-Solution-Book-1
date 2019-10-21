#include <bits/stdc++.h>
using namespace std;

int n;

int dp[44][44][44][44];
int ar[4][44];

int rec(int a, int b, int c, int d, int mask) {
    if (__builtin_popcount(mask) == 5) return 0;
    int &ret = dp[a][b][c][d];
    if (~ret) return ret;
    ret = 0;
    int h = 0, p;
    if (a < n) {
        p = ar[0][a] - 1;
        h = (mask >> p) & 1;
        ret = max(ret, h + rec(a + 1, b, c, d, mask ^ (1 << p)));
    }
    if (b < n) {
        p = ar[1][b] - 1;
        h = (mask >> p) & 1;
        ret = max(ret, h + rec(a, b + 1, c, d, mask ^ (1 << p)));
    }
    if (c < n) {
        p = ar[2][c] - 1;
        h = (mask >> p) & 1;
        ret = max(ret, h + rec(a, b, c + 1, d, mask ^ (1 << p)));
    }
    if (d < n) {
        p = ar[3][d] - 1;
        h = (mask >> p) & 1;
        ret = max(ret, h + rec(a, b, c, d + 1, mask ^ (1 << p)));
    }
    return ret;
}

int main() {
    
    while (scanf("%d", &n) && n != 0) {

        memset(dp, -1, sizeof dp);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                scanf("%d", &ar[j][i]);
            }
        }

        printf("%d\n", rec(0, 0, 0, 0, 0));

    }

    return 0;
}