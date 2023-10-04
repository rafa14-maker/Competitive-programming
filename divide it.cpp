#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int a;
        cin>>a;
        int counter=0,flag=0;
        while(a!=1)
        {
            if(a%2==0)
            {
                a/=2;
                counter++;
            }
            else if(a%3==0)
            {
                a=(a*2)/3;
                counter++;
            }
            else if(a%5==0)
            {
                a=(a*4)/5;
                counter++;
            }
            else
            {
                flag++;
                break;
            }
        }
        if(flag>0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<counter<<endl;
        }
    }
}
