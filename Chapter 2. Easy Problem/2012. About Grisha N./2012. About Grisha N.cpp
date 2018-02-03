#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int sz = 1e6 + 100;

ll n, m, l;

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        while( scanf( "%lld", &n ) == 1 ) {

                ll total_time_lagbe = ( 12ll - n ) * 45;
                ll total_time_baki = 4 * 60;

                printf( "%s\n", total_time_baki >= total_time_lagbe ? "YES" : "NO" );
        }

        return 0;
}
