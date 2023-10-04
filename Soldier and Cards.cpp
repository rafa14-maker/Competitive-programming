#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   n=1e5;
   queue<int>arr;
   queue<int>frr;

   int m;
   cin>>m;

   for(int i=0;i<m;i++)
   {
       int a;
       cin>>a;
       arr.push(a);
   }

   cin>>m;

   for(int j=0;j<m;j++)
   {
       int a;
       cin>>a;
       frr.push(a);
   }

   int counter=0;

    while(n--)
    {
        if(arr.empty())break;
        else if(frr.empty())break;
        counter++;
        int a=arr.front(),b=frr.front();
        arr.pop();
        frr.pop();
        if(a>b)
        {
            arr.push(b);
            arr.push(a);
        }
        else
        {
            frr.push(a);
            frr.push(b);
        }
     //   cout<<a<<" "<<b<<endl;
    }
    if(!arr.empty()&&!frr.empty())
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<counter<<" ";
    if(!arr.empty())cout<<1<<endl;
    else cout<<2<<endl;
}
