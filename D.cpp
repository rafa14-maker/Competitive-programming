#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int arr[5];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
        sort(arr,arr+5);
        long long sum=arr[4];
        for(int i=3;i>=0;i--)
        {
            if(arr[i]!=sum)
            {
                sum*=arr[i];
                break;
            }
        }
        cout<<sum<<endl;
    }
}
