#include <bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic warning "-std=c++11"

using ll = long long;

const int sz = 1e5 + 1;
const int mod = 1000000007;

int t, cs, n;
int ar[sz], br[sz], tr[sz];

void update(int x, int v) {
    for (; x < sz; x += (x & -x)) {
        tr[x] = (tr[x] + v) % mod;
    }
}

int query(int x) {
    int ret = 0;
    for (; x > 0; x -= (x & -x)) {
        ret = (ret + tr[x]) % mod;
    }
    return ret;
}

int main() {

    scanf("%d", &t);

    for (cs = 1; cs <=t; cs++) {

        scanf("%d", &n);

        memset(tr, 0, sizeof tr);

        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
            br[i] = ar[i];
        }

        sort(br, br + n);

        for (int i = 0; i < n; i++) {
            ar[i] = lower_bound(br, br + n, ar[i]) - br + 1;
            update(ar[i], query(ar[i] - 1) + 1);
        }

        printf("Case %d: %d\n", cs, query(n));

    }

    return 0;
}