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

                for( int i=1; i<=n; i++ ) {
                        printf( "%d%s", i, i == n ? "\n" : " " );
                }
        }

        return 0;
}
