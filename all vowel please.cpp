#include<bits/stdc++.h>
using namespace std;

char arr[]={'a','e','i','o','u'};

int main()
{
    int n,a;
    cin>>n;

    for(a=5;a*a<=n;a++)
    {
        if(n%a==0)break;
    }
    int b=n/a;

    if(b*a!=n||b<5)
    {
        cout<<-1<<endl;
        return 0;
    }

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
          cout<<arr[(i+j)%5];
        }
    }
}
