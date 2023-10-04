#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)cout<<-1<<endl;
      else  if(n==0)cout<<1<<" "<<1<<endl;
       else{
      for(int i=1;i<=1e5;i++)
        {
            if(i*i>=n)
            {
                if(i*i-n<2)cout<<-1<<endl;
                else
                {
                    int counter=0;
                   for(int j=2;j<i;j++)
                   {
                       if(i*i/(j*j)==(i*i)-n)
                       {
                           cout<<j<<endl;
                           counter++;
                           break;
                       }

                   }
                   if(counter==0)cout<<-1<<endl;
                }
                break;
            }
        }
    } }
}
