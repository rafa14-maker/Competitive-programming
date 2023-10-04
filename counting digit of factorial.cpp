#include<bits/stdc++.h>
using namespace std;

int main()
{
    double f[10000];
     f[0]=0;
   for(long i=1;i<=1000000;i++)
        f[i]=log10((i))+f[i-1];

    for(int i=1;i<=10;i++)
    {
        cout<<(long)f[i]+1<<endl;
    }
}
