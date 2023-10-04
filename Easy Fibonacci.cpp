#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int n;
        cin>>n;
        long long int counter=0,i=0;
        while(counter<n)
        {
            i++;
            counter=pow(2,i);
        }
        if(counter>n)i--;
      // cout<<i<<endl;
       if(i==0)cout<<0<<endl;
       else if(i==1)cout<<1<<endl;
        else
        {
          // i--;
          // i%=4;
           if(i%4==0)cout<<0<<endl;
           else if(i%4==1)cout<<9<<endl;
           else if(i%4==2)cout<<2<<endl;
           else if(i%4==3)cout<<3<<endl;
        }
    }
}
