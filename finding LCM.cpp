#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++){
    long long n,m,l;
    cin>>n>>m>>l;
    vector<pair<int,int> >v;
      vector<pair<int,int> >w;
      vector<pair<int,int> >y;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int counter=0;
            while(n%i==0)
            {
                counter++;
                n/=i;
            }
            v.push_back(make_pair(i,counter));
        }
    }
 // for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
     for(int i=2;i<=m;i++)
    {
        if(m%i==0)
        {
            int counter=0;
            while(m%i==0)
            {
                counter++;
                m/=i;
            }
            w.push_back(make_pair(i,counter));
        }
    }

    for(int i=0;i<v.size();i++)
    {
        int flag=0;
        for(int j=0;j<w.size();j++)
        {
            if(v[i].first==w[j].first)
            {
                w[j].second=max(v[i].second,w[j].second);
                flag++;
            }
        }
        if(flag==0)
        {
            w.push_back(make_pair(v[i].first,v[i].second));
        }
    }

   // for(int i=0;i<w.size();i++)cout<<w[i].first<<" "<<w[i].second<<endl;

       for(int i=2;i<=l;i++)
    {
        if(l%i==0)
        {
            int counter=0;
            while(l%i==0)
            {
                counter++;
                l/=i;
            }
            y.push_back(make_pair(i,counter));
        }
    }
 // for(int i=0;i<y.size();i++)cout<<y[i].first<<" "<<y[i].second<<endl;
     vector<pair<int,int> >ans;

  int flag=0;



  for(int i=0;i<y.size();i++)
  {
      if(flag>0)break;
      int g=0;
      for(int j=0;j<w.size();j++)
      {
          if(y[i].first==w[j].first&&y[i].second<w[j].second)
          {
              flag++;
              break;
          }
          else if(y[i].first==w[j].first&&y[i].second>=w[j].second)
          {
              g++;
              ans.push_back(make_pair(y[i].first,y[i].second-w[j].second));
              break;
          }
           if(g==0)
           {
               ans.push_back(make_pair(y[i].first,y[i].second));
           }
      }
  }

   if(flag==0)
   {
       long long sum=1;
       for(int i=0;i<ans.size();i++)
       {
           if(ans[i].second!=0)
           sum*=pow(ans[i].first,ans[i].second);
       }
       printf("Case %d: %ld\n",c,sum);
   }
   else
   {
         printf("Case %d: impossible\n",c);
   }

}
}
