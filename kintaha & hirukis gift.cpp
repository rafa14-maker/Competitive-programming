#include<iostream>
using namespace std;

int main()
{
    int n,a,k=0,l=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==100)
        {
            k++;
        }
        else
        {
            l++;
        }
    }
    if((k%2!=0)||(l%2!=0&&k==0))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
