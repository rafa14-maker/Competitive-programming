#include<iostream>
using namespace std;

int main()
{
    int i,n,y,k;

    cin>>y>>k>>n;

    i=k-(y%k);

    if(i+y>n)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(i<=n-y)
    {
        cout<<i<<" ";
        i+=k;
    }

}
