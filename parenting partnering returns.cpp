#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int counter=0;
    while(q--)
    {
        int n;
        cin>>n;
      //  vector<pair<int,int> >v;
      int arr[n+5];
      int frr[n+5];
      int idx[n+5];

        map<int,char>mp;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
           arr[i]=a;
           frr[i]=b;
           idx[i]=i;
        }
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(frr[i]<frr[j])
                {
                   // swap(v[i].first,v[j].first);
                   swap(arr[i],arr[j]);
                   swap(frr[i],frr[j]);
                   swap(idx[i],idx[j]);
                   //  swap(v[i].second,v[j].second);
                }
                else if(frr[i]==frr[j]&&arr[i]>arr[j])
                {
                     swap(arr[i],arr[j]);
                   swap(frr[i],frr[j]);
                   swap(idx[i],idx[j]);
                }
            }
        }
       // for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;

       int a=-1,b=-1;

       int flag=0;
      // string str;

       for(int i=0;i<n;i++)
       {
           if(a==-1)
           {
               a=frr[i];
             mp[idx[i]]='C';
             //  continue;
           }
            else if(arr[i]>=a)
           {
                a=frr[i];
             mp[idx[i]]='C';
             //  continue;
           }

           else if(b==-1)
           {
               b=frr[i];
                 mp[idx[i]]='J';
               //  continue;
           }

           else if(arr[i]>=b)
           {
                b=frr[i];
                 mp[idx[i]]='J';
                // continue;
           }
           else
           {
               flag++;
               break;
           }
       }
       if(flag>0)printf("Case #%d: IMPOSSIBLE\n",++counter);

        else {printf("Case #%d: ",++counter);
        for(int i=0;i<n;i++)cout<<mp[i];
      cout<<endl;}
    }
}
