#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int sz = 1e6 + 100;

ll n, m, l;

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        while( scanf( "%lld %lld", &n, &m ) == 2 ) {

                printf( "%lld %lld\n", ( n + m - 1ll ) - n, ( n + m - 1ll ) - m );
        }

        return 0;
}
