#include<bits/stdc++.h>
using namespace std;

int prime(long long int n)
{
    bool prime[n+1];

    memset(prime,true,sizeof(prime));

    long long int i,j,counter=0;

    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }


     for(i=2;i<n;i++)
      {
          if(prime[i]==true)
          {
              if(i*i==n)
              {
                  return true;
              }
          }
      }
  return false;

}

int main()
{
    long long int n,i,j;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>j;

        if(j%2==0&&j!=4)
        {
            cout<<"NO"<<endl;

        }

        else
        {
            if(prime(j))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
        }
    }
}
