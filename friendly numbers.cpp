#include<bits/stdc++.h>
using namespace std;



int main()
{
   // seive();
    int n;
    cin>>n;
    while(n--)
    {
       // for(int i=1;i<=10;i++)cout<<arr[i]<<endl;
        int a,b;
        cin>>a>>b;
       // if(b>a)swap(a,b);
        int flag=0,counter=0;

        for(int i=1;i<=a;i++)
        {
            if(a%i==0)flag++;
        }
        for(int i=1;i<=b;i++)
        {
            if(b%i==0)counter++;
        }
        if(abs(flag-counter)<=3)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
