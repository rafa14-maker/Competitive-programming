#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a1=0,a2=0,a3=0,k;
    int arr[5001],one[5001],two[5002],three[5003];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            one[a1]=i+1;
            a1++;
        }
        else if(arr[i]==2)
        {
            two[a2]=i+1;
            a2++;
        }
       else if(arr[i]==3)
        {
            three[a3]=i+1;
            a3++;
        }
    }

    k=min(a1,a2);
    k=min(k,a3);

    cout<<k<<endl;

    for(i=0;i<k;i++)
    {
       printf("%d %d %d\n",one[i],two[i],three[i]);
    }
}
