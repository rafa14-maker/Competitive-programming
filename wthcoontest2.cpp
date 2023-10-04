#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,p,t,i,b,a;


    cin>>t;

    int arr[t];

    for(i=0;i<t;i++)
    {
        cin>>a;

        b=a/5;
        b=b*5+5;

        if(a<=37)
        {
            arr[i]=a;
        }

       else if(b-a<=2)
        {
            arr[i]=b;
        }
        else
        {
            arr[i]=a;
        }
    }

    for(i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }


}
