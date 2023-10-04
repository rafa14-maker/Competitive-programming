#include<iostream>
using namespace std;

int main()
{
    int a,n;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a<=10)
        {
            cout<<0<<" "<<a<<endl;
        }
        else if(a>10)
        {
            cout<<a-10<<" "<<10<<endl;
        }
    }
}
