#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,m,j,k=1,i,t,sum;
   int p=0;
    cin>>t;

    while(t--){
    cin>>n>>m;
    j=m;
    sum=(n*m)/2;


    p++;
   printf("Case %d: %lld\n",p,sum);
    }

    return 0;
}
