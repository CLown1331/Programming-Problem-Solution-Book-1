#include <bits/stdc++.h>
using namespace std;

int t, n, m;
int ar[105][105];
int dp[105][105];
char s[105];

int rec( int x, int y, int val ) {

        if( x < 0 || y < 0 || x >= n || y >= m ) return 0;

        if( ar[x][y] >= val ) return 0;

        if( ar[x][y] == 0 ) return 1;

        int &ret = dp[x][y];

        if( ~ret ) return ret;

        ret = 0;

        ret = max( ret, rec( x - 1, y, ar[x][y] ) );

        ret = max( ret, rec( x + 1, y, ar[x][y] ) );

        ret = max( ret, rec( x, y - 1, ar[x][y] ) );

        ret = max( ret, rec( x, y + 1, ar[x][y] ) );

        ret++;

        return ret;
}

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        scanf( "%d", &t );

        while( t-- && scanf( "%s %d %d", s, &n, &m ) == 3 ) {

                for( int i=0; i<n; i++ ) {
                        for( int j=0; j<m; j++ ) {
                                scanf( "%d", &ar[i][j] );
                        }
                }

                memset( dp, -1, sizeof dp );

                int ans = 0;

                for( int i=0; i<n; i++ ) {
                        for( int j=0; j<m; j++ ) {
                                ans = max( ans, rec( i, j, 101 ) );
                        }
                }

                printf( "%s: %d\n", s, ans );
        }

        return 0;
}
