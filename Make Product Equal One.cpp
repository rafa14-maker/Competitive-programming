#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long long arr[n+5],a=0,b=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)a++;
    }
    sort(arr,arr+n);
  // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
  // cout<<endl;
    long long counter=0;
    if(a%2==0)
    {
       // long long counter=0;
 for(int i=0;i<n;i++)
            {
            if(arr[i]>0)
            {
              counter+=abs(arr[i]-1);
            }
            else if(arr[i]==0)
            {
                counter+=1;
            }
            else
            {
                counter+=abs(-1-arr[i]);
            }
            //cout<<arr[i]<<" "<<counter<<endl;
        }
    }
    else
    {
        int p=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                p=i;
                break;
            }
        }
       // cout<<p<<endl;
        if(p!=-1){
        counter+=1;
        arr[p]=-1;}
        if(p==-1)
        {
            int r1=-1,r2=-1;
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]<0&&arr[i+1]>0)
                {
                    r1=i;
                    break;
                }
            }
             for(int i=n-1;i>0;i--)
            {
                if(arr[i]>0&&arr[i-1]<0)
                {
                    r2=i;
                    break;
                }
            }
       // cout<<r1<<" "<<r2<<endl;
            if(r1==-1&&r2>=0)
            {
                long long b=arr[r2]+1;
                counter+=b;
                arr[r2]=-1;
            }
            else if(r2==-1&&r1>=0)
            {
                long long a=arr[r1]*(-1)+1;
                 counter+=a;
                arr[r1]=1;
            }
            else if(r1==-1&&r2==-1)
            {
                counter+=abs(arr[n-1])+1;
                arr[n-1]=1;
            }
            else{
            long long a=arr[r1]*(-1)+1;
            long long  b=arr[r2]+1;
          // cout<<r1<<" "<<r2<<endl;
          // cout<<a<<" "<<b<<endl;
            if(a>=b)
            {
                counter+=b;
                arr[r2]=-1;
            }
            else
            {
                counter+=a;
                arr[r1]=1;
            }
        } }
       // cout<<counter<<endl;
        for(int i=0;i<n;i++)
            {
            if(arr[i]>0)
            {
              counter+=abs(arr[i]-1);
            }
            else if(arr[i]==0)
            {
                counter+=1;
            }
            else
            {
                counter+=abs(-1-arr[i]);
            }
        //  cout<<arr[i]<<" "<<counter<<endl;
        }
          }

cout<<counter<<endl;
}
