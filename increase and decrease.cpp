#include<iostream>
using namespace std;

int main()
{
    int i,n,a,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum%n==0)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<n-1<<endl;
    }
}
