#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int arr[10];
    for(int i=1;i<10;i++)arr[i]=i;

    vector<pair<int,int> >fr;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;

        fr.push_back(make_pair(a,b));
    }
    int p=0;
    for(int i=0;i<pow(2,k);i++)
    {
        vector<int>v;
        for(int j=0;j<k;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(arr[j]);
            }
        }
        int counter=0;
      /* for(int i=0;i<v.size()-1;i++)
       {

           if(fr[v[i]].second==fr[v[i+1]].first)
           {
              counter++;
           }
           else
           {
               break;
           }
       }
       p=max(counter,p);*/
    }
    cout<<p<<endl;
}
