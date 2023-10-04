#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(__gcd(arr[i],arr[i+1])==1)
            {
                counter++;
                break;
            }
        }
    }

}
