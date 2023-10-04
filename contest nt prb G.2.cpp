#include<bits/stdc++.h>
using namespace std;


int main()
{

   int a,n,c,k;

   cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a>>c;

        if(a>c)
        {
            k=c;
        }
        else
        {
            k=a;
        }

        int counter=0;

        for(int j=1;j<=sqrt(k);j++)
        {
            if(a%j==0&&c%j==0)
            {
                counter++;

            }
        }
       if(a%k==0&&c%k==0)
       {
           cout<<counter+1<<endl;
       }
       else
       {
           cout<<counter<<endl;
       }

    }
}
