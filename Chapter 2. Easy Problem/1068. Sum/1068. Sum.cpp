#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int sz = 1e6 + 100;

ll n, ans, x;

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        while( scanf( "%lld", &n ) == 1 ) {

                ans = 0;

                x = abs( n );

                ans = ( x * ( x + 1ll ) ) / 2ll;

                if( n <= 0 ) ans--;

                if( n <= 0 ) ans *= -1ll;

                printf( "%lld\n", ans );
        }

        return 0;
}
