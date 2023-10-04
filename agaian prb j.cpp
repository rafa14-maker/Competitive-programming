#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c;

    while(a!=0)
    {
        cin>>a;
        if(a==0)
        {
            return 0;
        }
        int i;

       for(i=2;i<=a;i++)
       {
          if(a%i==0)
          {
              int p=1;
              while(b<=a)
              {
             int b=pow(i,p);
                p++;
                if(b==a)
                {
                    cout<<b<<endl;
                }
              }
          }
       }


    }
}
