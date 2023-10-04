#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,n,k,num,com,l;
    char c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        int arr[a];
        for(k=0;k<a;k++)
        {
            cin>>arr[k];
        }
        while(b--)
        {
            cin>>c;
            if(c=='S')
            {
                cin>>num;
                for(k=0;k<a;k++)
                {
                   arr[k]+=num;
                    }
            }
                else if(c=='M')
                { cin>>num;
                                   for(k=0;k<a;k++)
                {
                   arr[k]*=num;
                    }
                }
               else   if(c=='D')
               { cin>>num;
            for(k=0;k<a;k++)
                {
                   arr[k]/=num;
                    }
               }
                 else  if(c=='P')
                 {
                      cin>>num>>com;
                     int tmp;
                     tmp=arr[com];
                     arr[com]=arr[num];
                     arr[num]=tmp;
                 }

                  else  if(c=='R')
                  {
                      int frr[a];
                      for(k=0,l=a-1;k<a,l>=0;k++,l--)
                      {
                          frr[k]=arr[l];

                      }
                      for(k=0;k<a;k++)
                      {
                          arr[k]=frr[k];
                      }
                  }
        }
        printf("Case %d:\n",i);
        for(k=0;k<a-1;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<arr[a-1]<<endl;
    }
}
