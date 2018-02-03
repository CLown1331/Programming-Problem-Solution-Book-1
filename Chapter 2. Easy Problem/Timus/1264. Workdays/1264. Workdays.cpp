#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int sz = 1e6 + 100;

ll n, m;

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        while( scanf( "%lld %lld", &n, &m ) == 2 ) {

                printf( "%lld\n", n * ( m + 1ll ) );
        }

        return 0;
}
