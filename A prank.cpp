#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n+5];

    //arr[0]=1;

    for(int i=1;i<=n;i++)cin>>arr[i];

   // arr[n+1]=1000;

    int flag=0,l,r;

    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i+1]-1)
        {
            l=i;
            r=i+1;
            while(arr[r]+1==arr[r+1])
            {
                r++;
            }

            if(arr[r]==1000)
            {
                flag+=(r-l);
            }
            else if(arr[l]==1)
            {
                flag+=(r-l);
            }
            else
            {
                if(r-l<2)flag+=1;
                else flag+=(r-l)-1;
            }
          // cout<<l<<" "<<r<<endl;
            i=r;
        }
       // i=r;
     //   cout<<l<<" "<<r<<endl;
    }
    cout<<flag<<endl;

}
