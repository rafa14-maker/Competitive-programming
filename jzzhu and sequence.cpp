#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    long long int n,x,y;
    cin>>x>>y>>n;

    long long int arr[7];

arr[1]=(x+mod)%mod;
	arr[2]=(y+mod)%mod;
	arr[3]=(y-x+mod)%mod;
	arr[4]=(-x+mod)%mod;
	arr[5]=(-y+mod)%mod;
	arr[6]=(x-y+mod)%mod;

	if(n<=6)cout<<(arr[n]+mod)%mod;

    else
    {
        int k=n%6;
        if(k%6==0)
        {
            cout<<(arr[6]+mod)%mod<<endl;
        }
        else
        {
            cout<<(arr[k]+mod)%mod<<endl;
        }
    }
return 0;

}
