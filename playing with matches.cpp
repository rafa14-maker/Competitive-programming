#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int arr[10];
    arr[0]=6;
    arr[1]=2;
    arr[2]=5;
    arr[3]=5;
    arr[4]=4;
    arr[5]=5;
    arr[6]=6;
    arr[7]=3;
    arr[8]=7;
    arr[9]=6;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int c=a+b;
        int sum=0;
        while(c>0)
        {
            int r=c%10;
            sum+=arr[r];
            c/=10;
        }
        cout<<sum<<endl;
    }
}
