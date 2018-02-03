#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int sz = 1e6 + 100;

ll n, m, l;

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        while( scanf( "%lld %lld %lld", &n, &m, &l ) == 3 ) {

                printf( "%lld\n", n * m * l * 2ll );
        }

        return 0;
}
