#include<bits/stdc++.h>
using namespace std;

void seive(int n)
{
    bool prime[n+1];

    memset(prime,true,n+1);

    int i,j;

    for(i=2;i*i<n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<n;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
   int counter=0;
    for(i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
         if(n==i*i)
         {
             counter++;
         }
        }
    }

    if(counter==1)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }

}

int main()
{
    int n,a,b,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;

        if(a==4)
        {
            cout<<"YES"<<endl;
        }
        else if(a%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {

           seive(a);
        }

    }

    return 0;
}
