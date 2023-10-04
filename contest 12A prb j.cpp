#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long  a,b,n,counter,k,l,i,p=0;
    cin>>n;
    while(n--)
    {
        counter=0;
        cin>>a;
        p++;
        if(a%2!=0)
        {
            printf("Case %lli: impossible\n",p);
        }
        else
        {
            b=sqrt(a);
            for(i=2;i<=b;i++)
            {
                if(a%i==0)
                {
                    k=i;
                    l=a/i;
                    if(k%2==0&&l%2!=0)
                    {
                        counter++;
                        break;
                    }
                    else if(k%2!=0&&l%2==0)
                    {
                        counter++;
                        break;
                    }
                }
            }
            if(counter==0)
            {
                printf("Case %lli: impossible\n",p);
            }
            else
            {
                printf("Case %lli: %lli %lli\n",p,k,l);
            }

        }

    }
}
