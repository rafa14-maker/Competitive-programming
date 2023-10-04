#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
       // vector<pair<int,int> >v;
        int arr[n+5];
        int frr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            frr[i]=arr[i];
         //   v.push_back(make_pair(arr[i],i));
        }
        sort(frr,frr+n);
       /* sort(v.begin(),v.end());
        int counter=n-1;
        for(int i=0;i<v.size();i++)
        {
            if(counter==0)break;
            int k=v[i].second;
          //  int flag=0;
            for(int j=k;j>0;j--)
            {
                if(j-1>=0&&arr[j-1]>arr[j])
                {
                   // flag++;
                    swap(arr[j],arr[j-1]);
                    counter--;
                    if(counter==0)break;
                }
                if(counter==0)break;
            }

        }
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"\n";*/
        int counter=n-1;
            for(int i=0;i<n;i++)
            {
                if(counter==0)break;
               for(int j=0;j<n;j++)
               {
                   if(counter==0)break;
                   if(frr[i]==arr[j])
                   {
                       int k=j;
                       while(k-1>=0&&arr[k-1]>arr[k])
                       {
                           swap(arr[k],arr[k-1]);
                           counter--;
                           if(counter==0)break;
                       }
                       break;
                   }
               }
            }
            for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"\n";
        }
    }


