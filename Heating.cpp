#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int arr[a+5]={0};
        int i=0;
        while(b>0){
            arr[i]+=1;
            b--;
            i++;
            if(i==a)i=0;
        }
        long long k=0;
        for(int i=0;i<a;i++)
        {
            k+=(arr[i]*arr[i]);
        }
        printf("%lld\n",k);
    }
}
