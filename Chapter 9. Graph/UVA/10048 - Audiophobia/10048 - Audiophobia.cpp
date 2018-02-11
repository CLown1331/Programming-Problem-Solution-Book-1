#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int fl[105][105];
int mp[105][105];
int n, m, q, cs;

int main() {
        #ifdef CLown1331
                freopen("in.txt","r",stdin);
        #endif /// CLown1331
        
        while( scanf( "%d %d %d", &n, &m, &q ) == 3 && n + m + q ) {
                
                for( int i=0; i<=n; i++ ) for( int j=1; j<=n; j++ ) mp[i][j] = 1 << 28, fl[i][j] = 0;
                
                while( m-- ) {
                        
                        int x, y, z;
                        
                        scanf( "%d %d %d", &x, &y, &z );
                        
                        fl[x][y] = 1;
                        
                        fl[y][x] = 1;
                        
                        mp[x][y] = z;
                        
                        mp[y][x] = z;
                        
                }
                
                for( int via=1; via<=n; via++ ) {
                        
                        for( int from=1; from<=n; from++) {
                                
                                for( int to=1; to<=n; to++ ) {
                                        
                                        fl[from][to] |= fl[from][via] & fl[via][to];
                                        
                                        mp[from][to] = min( mp[from][to], max( mp[from][via], mp[via][to] ) );
                                        
                                }
                        }
                }
                
                if( cs ) printf( "\n" );
                
                printf( "Case #%d\n", ++cs );
                
                while( q-- ) {
                        
                        int x, y;
                        
                        scanf( "%d %d", &x, &y );
                        
                        if( fl[x][y] ) {
                                printf( "%d\n", mp[x][y] );
                        }
                        else {
                                printf( "no path\n" );
                        }
                        
                }
        }

        return 0;
}