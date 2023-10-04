#include<iostream>
using namespace std;

int main()
{
    int n,i,a,b,k,l,counter=-1;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(i==0)
        {
            k=a;
            l=b;
        }
       if(a<k)
        {
            counter=-1;
            k=a;
        }
       if(b>l)
        {
            counter=-1;
            l=b;
        }
        if(a==k&&b==l)
        {
            counter=i+1;
        }
    }
    cout<<counter<<endl;
}
