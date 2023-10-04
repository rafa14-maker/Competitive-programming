#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,i;

    cin>>n;

    if(n<1||n>50)
    {
        return 0;
    }
     int arr[n];
    for(i=1;i<=n;i++)
    {
        cin>>j;

        j-=5;
        if(j%3==0)
        {
           arr[i-1]=j;
        }
        else
        {
            arr[i-1]=-1;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("Case %d: %d\n\n",i+1,arr[i]);
    }

    return 0;
}
