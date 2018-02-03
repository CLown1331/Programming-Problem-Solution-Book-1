#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int sz = 1e6 + 100;

int n;
string s[1005];
string shelf[3];

int main() {
        #ifdef CLown1331
            freopen("in.txt","r",stdin);
        #endif /// CLown1331

        shelf[0] = "APOR";
        shelf[1] = "BMS";
        shelf[2] = "DGJKTW";

        int p, ans, next;

        while( scanf( "%d", &n ) == 1 ) {

                p = 0;

                ans = 0;

                for( int i=0; i<n; i++ ) {
                        cin >> s[i];
                        next = p;
                        for( int j=0; j<3; j++ ) {
                                for( const char& c: shelf[j] ) if( c == s[i][0] ) next = j;
                        }
                        ans += abs( next - p );
                        p = next;
                }

                printf( "%d\n", ans );
        }

        return 0;
}
