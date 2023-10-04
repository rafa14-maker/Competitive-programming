#include<bits/stdc++.h>
using namespace std;

int main()
{
  //freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int sum=0;
        while(1==1)
        {
            int m=1,counter=1,p=-1;
            for(int i=0;i<n;i++)
            {
                counter=1;
               if(i-1>=0)counter*=arr[i-1];
               if(i+1<n)counter*=arr[i+1];

               counter*=arr[i];
             //  cout<<counter<<endl;
               if(counter>m)
               {
                   m=counter;
                   p=i;
               }
            }
            sum+=m;
            //cout<<sum<<endl;
            for(int i=p;i<n;i++)
            {
                arr[i]=arr[i+1];
            }
     //   for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
            n--;
            if(n==0)break;

        }
        printf("Case %d: %d\n",c,sum);
    }
}
