// http://uva.onlinejudge.org/external/106/10622.html

// @BEGIN_OF_SOURCE_CODE

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <math.h>
#define pi acos(-1.0)
#define N 1000000
using namespace std;

int expo(int base , int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return base;
    }
    else
    {
        int r=expo(base,n/2);

        if(n%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*base;
        }
    }
}
int main ()
{
    double n;

    while ( scanf ("%lf", &n) && n ) {

        bool printed = false;
        int length;

        if ( n < 0 ) {
            length = sqrt (n * -1);
            for ( int i = -2; i >= -length; i-- ) {
                long long ans = i;
                int p = 2;
                while ( ans > n ) {
                    ans = expo (i, p);
                    p++;
                }
                if ( ans == n ) {
                    printf ("%d\n", p - 1);
                    printed = true;
                    break;
                }
            }

            if ( !printed )
                printf ("1\n");
        }
        else {
            length = sqrt (n);
            for ( int i = 2; i <= length; i++ ) {
                long long ans = i;
                int p = 2;
                while ( ans < n ) {
                    ans = expo (i, p);
                    p++;
                }
                if ( ans == n ) {
                    printf ("%d\n", p - 1);
                    printed = true;
                    break;
                }
            }

            if ( !printed ) printf ("1\n");
        }

        //printf ("%d\n", power);

    }

    return 0;
}
