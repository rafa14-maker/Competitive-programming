#include<iostream>
using namespace std;

int n,k,a,last=0,counter=1;

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==last)
        {
            counter++;
        }
        else
        {
            counter=1;
        }
        last=a;
    }
    if(counter+k>n)
    {
        cout<<n-counter<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
