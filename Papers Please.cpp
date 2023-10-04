#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i]%3!=0&&arr[i]%5!=0)
            {
                flag++;
                break;
            }
        }
    }
    if(flag==0)cout<<"APPROVED"<<endl;
    else cout<<"DENIED"<<endl;
}
