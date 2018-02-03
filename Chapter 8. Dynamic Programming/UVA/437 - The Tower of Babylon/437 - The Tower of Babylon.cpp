#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int sz = 3e5 + 100;

struct block {
        int x, y, z;
        bool operator < ( const block& other ) const {
                return ( x < other.x &&  y < other.y ) || ( y < other.x &&  x < other.y );
        }
};

vector < block > ar;

int n, cs, ans;

int dp[105];

int rec( int x ) {
        int& ret = dp[x];
        if( ~ret ) return ret;
        ret = ar[x].z;
        for( int i=0; i<n; i++ ) {
                if( ar[i] < ar[x] ) ret = max( ret, ar[x].z + rec( i ) );
        }
        return ret;
}

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        while( scanf( "%d", &n ) == 1 && n ) {

                ar.clear();

                while( n-- ) {

                        int x, y, z;

                        scanf( "%d %d %d", &x, &y, &z );

                        ar.push_back( { x, y, z } );

                        ar.push_back( { x, z, y } );

                        ar.push_back( { y, z, x } );
                }

                n = (int)(ar.size());

                ans = 0;

                memset( dp, -1, sizeof dp );

                for( int i=0; i<n; i++ ) ans = max( ans, rec( i ) );

                printf( "Case %d: maximum height = %d\n", ++cs, ans );
        }

        return 0;
}
