#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k=-1,p=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            k=arr[i];
            p=i;
        }
    }
    int l=p-1,r=p+1;
    stack<int>s;
    s.push(k);
    while(1==1)
    {
      if(l<0&&r>=n)
        {
            break;
        }
        if(l<0&&r<n)
        {
            if(arr[r]>=s.top())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            s.push(arr[r]);
            r++;
        }
        else  if(l>=0&&r>=n)
        {
            if(arr[l]>=s.top())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            s.push(arr[l]);
            l--;
        }
        else if(l>=0&&r<n&&arr[l]>=arr[r])
        {
             if(arr[l]>=s.top())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            s.push(arr[l]);
            l--;
        }
      else if(l>=0&&r<n&&arr[l]<arr[r])
        {
             if(arr[r]>=s.top())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            s.push(arr[r]);
            r++;
        }


    }
    //cout<<l<<" "<<r<<endl;
    cout<<"YES"<<endl;
}
