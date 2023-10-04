#include<bits/stdc++.h>
using namespace std;



int main()
{
    freopen("hello.in", "r", stdin);
    int q;
    cin>>q;
    while(q--)
    {
        int arr[5];
      cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
      //sort(arr,arr+4);
        int frr[10];
        for(int i=0;i<8;i++)
        {
            cin>>frr[i];
        }
        int flag=0;
        for(int i=1;i<4;i++)
        {
            if(arr[i]<arr[i-1])flag++;
        }
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[j]>frr[i])flag++;
            }
        }
        if(flag>0)cout<<"no"<<endl;
         else cout<<"yes"<<endl;
    }
}
