#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int counter=-1,flag=1e9;

    for(int i=1;i<n;i++)
    {
       int p=a/i;
        int q=b/(n-i);
     //   cout<<p<<" "<<q<<endl;
    //   if(p==0||q==0)continue;
      if(counter<min(p,q)&&p>0&&q>0)
      {
          counter=min(p,q);
      }
    }
    cout<<counter<<endl;
}
