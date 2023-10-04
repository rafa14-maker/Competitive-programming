#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,p,b;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>k;

      if(k==1)
        {
            cout<<1<<endl;
            continue;
        }
       else if(k<10)
       {
           cout<<k+10<<endl;
       }
    else if(k>10)
    {
        b=k;p=0;
       int arr[10];
       int counter=0;

       do
       {
           for(i=9;i>0;i--)
           {
               if(b%i==0)
               {
                   arr[p]=i;
                   b/=i;
                   counter++;
               }
           }
           if(counter==9)
           {
               cout<<-1<<endl;
           }

       }while(b>0);

    }
    else
    {
        cout<<-1<<endl;
    }


}

}
