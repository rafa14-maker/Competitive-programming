#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=2;i<=n;i++)
    {
        if((arr[i]==2&&arr[i-1]==3)||(arr[i-1]==2&&arr[i]==3))
        {
            cout<<"Infinite"<<endl;
            return 0;
        }
        else
        {
            sum+=(arr[i]+arr[i-1]);
        }
         if(i>2&&i-2>=1&&arr[i]==2&&arr[i-2]==3)sum--;
    }
    cout<<"Finite"<<endl<<sum<<endl;
}
