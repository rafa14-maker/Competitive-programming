#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,i,j,p,k,l;

    cin>>k;

    for(l=0;l<k;l++)
    {
    cin>>n>>j;

int  b=j/n;
    for(i=2;i<=b;i++)
    {
        if(j%i==0&&(n*i)%j==0)
        {
            cout<<i<<endl;

            break;
        }
    }
     if(b*i!=n)
     {
         cout<<"NO SOLUTION"<<endl;
     }


    }

}
