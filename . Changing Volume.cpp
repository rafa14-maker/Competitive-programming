#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int n=abs(a-b);
        int counter=0;
        while(n>=5)
        {
            counter+=(n/5);
            n=n%5;
        }
          while(n>=2)
        {
            counter+=(n/2);
            n=n%2;
        }
          while(n>=1)
        {
            counter+=(n/1);
            n=n%1;
        }
        cout<<counter<<endl;
    }
}
