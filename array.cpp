#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int counter=0,found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)counter++;
        if(arr[i]>0)found++;
    }

    if(counter%2==1)
    {
        cout<<1<<" "<<arr[0]<<endl;
        cout<<counter-1+found<<" ";
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=0)cout<<arr[i]<<" ";
        }
        cout<<endl;
         for(int i=1;i<n;i++)
        {
            if(arr[i]==0)
            {
                cout<<1<<" "<<0<<endl;
             return 0;
            }
        }
        cout<<0<<endl;
        return 0;
    }
    if(counter%2==0)
    {
        if(counter==0)cout<<0<<endl;
        else cout<<1<<" "<<arr[0]<<endl;

       cout<<counter-2+found<<" ";
        for(int i=2;i<n;i++)
        {
            if(arr[i]!=0)cout<<arr[i]<<" ";
        }
        cout<<endl;
        int car=0;
         for(int i=1;i<n;i++)
        {
            if(arr[i]==0)
            {
              car++;
            }
        }
        if(car>0)
        {
            cout<<car+1<<" ";
            while(car--)
            {
                cout<<0<<" ";
            }
            cout<<arr[1]<<endl;
            return 0;
        }
        cout<<0<<endl;
        return 0;
    }

}
