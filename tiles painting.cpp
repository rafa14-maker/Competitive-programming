#include<bits/stdc++.h>
using namespace std;

 long long lcm1( long long a , long long b ) {
        return a / __gcd( a , b ) * b;
}

long long max1(long long a,long long b)
{
    if(a>=b)return a;
    else return b;
}

int main()
{

        long long n;
        scanf("%lld",&n);
        vector <long long> V;
        for( long long i = 2; i * i <= n; i++ ) {
                if( n%i == 0 ) {
                        V.push_back( i );
                        if( n/i != i ) V.push_back( n/i );
                }
        }
        long long lcm = 1;
        for(long long x=0;x<V.size();x++ ) lcm = lcm1( lcm , V[x] );
        cout << n/lcm << endl;
        return 0;

}
