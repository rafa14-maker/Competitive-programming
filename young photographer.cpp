#include<bits/stdc++.h>
using namespace std;

 vector<int>v;
 int li[105],ri[105];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        cin>>li[i]>>ri[i];
        if(li[i]>ri[i])swap(li[i],ri[i]);
    }
    for(int i=1;i<=1000;i++)
    {
        int flag=0;
        for(int j=1;j<=n;j++)
        {
            if(li[j]<=i&&ri[j]>=i)
            {
               continue;
               //cout<<1<<endl;
            }
            else
            {
               // cout<<3<<endl;
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            v.push_back(i);
        }
    }

    if(v.size()==0)
    {
        cout<<-1<<endl;
        return 0;
    }

   int k=100000;

   for(int i=0;i<v.size();i++)
   {
       if(abs(m-v[i])<k)
       {
           k=abs(m-v[i]);
       }
   }

   cout<<k<<endl;

}
