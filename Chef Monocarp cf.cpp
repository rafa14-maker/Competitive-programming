#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int frr[607];
    for(int i=0;i<606;i++)frr[i]=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long sum=0,idx=0;
    while(1){
         bool tr=true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                tr=false;
                int kp=arr[i]-idx,pk=arr[i]+idx;
               if(kp>=0&&frr[kp]==0)
                {
                    //tr=false;
                    frr[kp]=1;

                   sum+=idx;
                 //   cout<<arr[i]<<" "<<kp<<endl;
                    arr[i]=0;
                }
             else if(frr[pk]==0)
                {
                   // tr=false;
                    frr[pk]=1;
                  //  arr[i]= 0;
                    sum+=idx;
                    arr[i]=0;
                 //   cout<<arr[i]<<" "<<pk<<endl;arr[i]=0;
                }

            }

        }
        idx++;
        if(tr)break;
    }

    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
