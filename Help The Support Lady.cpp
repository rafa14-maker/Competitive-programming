#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
          //  arr[i]*=2;
        }
        sort(arr,arr+n);

        long long sum=0;
        int counter=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]>=sum)
            {
                sum+=arr[i];
                counter++;
            }
        }

        printf("Case #%d: %d\n",c,counter);
    }
}
