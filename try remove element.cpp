#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0;
    int sum=0;

    int flag=0,p;

    for(int i=0;i<n;i++)
    {
        flag=0,p=99999999;
        counter=1;
        int j=i;
        while(i+1<n&&arr[i]+1==arr[i+1])
        {
            counter++;
            j++;
            if(j==n)break;
            if(arr[j]!=arr[j+1])
            {
                if(arr[j-1]+1==arr[j+1]&&flag==0)
                {
                    flag++;
                    p=j;
                   // counter++;
                    j++;
                }
                else break;

            }
        }
        sum=max(counter,sum);
        i=min(p,j);
    }
    cout<<sum<<endl;
}
