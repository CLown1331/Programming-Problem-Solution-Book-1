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
        
        while( scanf( "%d %d %d", &n, &m, &q ) == 3 ) {
                
                while( m-- ) {
                        
                        int x, y, z;
                        
                        scanf( "%d %d %d", &x, &y, &z );
                        
                        fl[x][y] = 1;
                        
                        fl[y][x] = 1;
                        
                        mp[x][y] = z;
                        
                        mp[y][x] = z;
                        
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