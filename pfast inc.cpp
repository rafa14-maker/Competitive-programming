#include<bits/stdc++.h>
using namespace std;

vector<int>sub;

int main()
{
    int n,m;
    cin>>n>>m;
    string arr[20],frr[150][150];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>frr[i][0]>>frr[i][1];

    int c=0;



    for(int i=0;i<pow(2,n);i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(j);
            }
        }
        int flag=0;

         for(int p=0;p<v.size();p++)
          {
              if(flag>0)break;
              for(int q=p+1;q<v.size();q++)
              {
                  if(flag>0)break;
                  for(int l=0;l<m;l++)
                  {
                      if(frr[l][0]==arr[v[q]]&&frr[l][1]==arr[v[p]])
                      {
                          flag++;
                          break;
                      }
                      else if(frr[l][1]==arr[v[q]]&&frr[l][0]==arr[v[p]])
                         {
                          flag++;
                          break;
                      }
                  }
              }
          }

        if(flag==0)
        {
            if(c<v.size())
            {
                c=v.size();
                sub.clear();
                sub=v;
            }
        }
          }

    cout<<c<<endl;
    string krr[c+5];
    if(c!=0)
    {
        for(int i=0;i<c;i++)
        {
            krr[i]=arr[sub[i]];
        }
        sort(krr,krr+c);
        for(int i=0;i<c;i++)
        {
            cout<<krr[i]<<endl;
        }
    }

}
