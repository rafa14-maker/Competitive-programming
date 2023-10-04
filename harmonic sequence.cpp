#include<bits/stdc++.h>
#define ei 0.57721566490153286060651209
#define max 1000000

using namespace std;
double ar[max];
void harmonic()
{
    int i;

    ar[1] = 1.0;
    ar[2] = ar[1] + 0.5;

    for(i=3; i<=max; i++)
    {
        ar[i] = (ar[i-1] + (1.0 / (double(i)))) * 1.0;
    }

}

int main()
{
    harmonic();
    int n;
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>n;
        double ans;

        if(n>max){
        ans=log(n+0.5)+ei;
        printf("Case %d: %.10lf\n",i,ans);}
        else
        {
             printf("Case %d: %.9lf\n",i,ar[n]);
        }
    }
}

