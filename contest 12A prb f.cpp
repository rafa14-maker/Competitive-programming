#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,k=0;

    cin>>n;

    while(n--)
    {
        k++;
        cin>>a>>b>>c;
        if((a*a+b*b)==c*c)
        {
            printf("Case %d: yes\n",k);
        }
        else
        {
             printf("Case %d: no\n",k);
        }
    }
}
