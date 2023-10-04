#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    int m=0;
    for(int i=0;i<n-1;i++)
    {
        int counter=0;
        if(arr[i]==arr[i+1]&&arr[i]==x)
        {
            counter+=2;
            int flag=0;
             int l=i-1;
             int r=i+2;
             while(1==1){
             if(r<n&&l>=0&&arr[r]==arr[l]){
                    flag+=2;
            while(r+1<n&&arr[l]==arr[r+1])
            {
                r++;
                flag++;
            }
            while(l-1>=0&&arr[l-1]==arr[r])
            {
                l--;
                flag++;
            }
           // cout<<flag<<endl;
            if(flag>=3)
            {
                counter+=flag;
                r++;
                l--;
                flag=0;
               // cout<<r<<" "<<l<<endl;
            }
            else
            {
                break;
            }
             }
             else
             {
                 break;
             }
             }

            m=max(m,counter);
        }
    }
    cout<<m<<endl;
}
