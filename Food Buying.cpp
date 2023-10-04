#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        long long sum=0;
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }
         while(n>0)
         {
           sum+=n+(n%10);
           n=n/10;
           if(n<10)
           {
               sum+=n;
               break;
           }
         }
          cout<<sum<<endl;
    }
}
