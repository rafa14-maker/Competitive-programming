#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,j,counter=0;
    cin>>a;

    while(1==1)
    {
        b=sqrt(a);
        if(b*b==a)
        {
            a=b;
        }
        else if(a%4!=0)
        {
            cout<<a<<" "<<counter<<endl;
            break;
        }
        else
        {
            a=a*(a/4);
        }
        counter++;
    }
}
