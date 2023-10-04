#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,l,k,sum=0,counter=0;;


    scanf("%lld %lld %lld %lld",&n,&m,&k,&l);


    if(n>=m&&n-k>=l)
    {
        while(sum<l)
        {
            sum+=m;
            counter++;
        }
    }
    if(counter==0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%lld\n",counter);
    }

    return 0;

}
