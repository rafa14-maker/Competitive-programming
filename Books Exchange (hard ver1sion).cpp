#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        int grr[n+5]={0};
        int frr[n+5];
        int krr[n+5];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            frr[i]=arr[i];
        }
        int flag=n;
        int counter=0;
        while(flag>0)
        {
            counter++;
            if(counter%2==0)
            {
               for(int i=1;i<=n;i++)
               {
                   if(frr[i]==0){
                   krr[frr[i]]=frr[i];
                   if(krr[i]==arr[i])
                   {
                       grr[arr[i]]=counter;
                       flag--;
                   }
                   }
               }
            }
            else
            {
                 for(int i=1;i<=n;i++)
               {
                   if(krr[i]==0){
                   frr[krr[i]]=krr[i];
                   if(frr[i]==arr[i])
                   {
                       grr[arr[i]]=counter;
                       flag--;
                   }
                   }
               }
            }

        }
        for(int i=1;i<=n;i++)cout<<grr[arr[i]]<<" ";
        cout<<endl;
    }
}
