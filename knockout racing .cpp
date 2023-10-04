#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1==1){
       long long n,m,i=0;
       scanf("%lli %lli",&n,&m);
       vector< pair<int ,int> >v;
       int f,s;
       for(int j=0;j<n;j++)
       {
           cin>>f>>s;
           v.push_back(make_pair(f,s));
       }
      for(int j=0;j<m;j++)
       {

           long long a,b,t,found=0;
          scanf("%lli %lli %lli",&a,&b,&t);
           for(int k=0;k<n;k++)
           {

               long long flag=0,counter=v[k].first,p=v[k].first,l=v[k].second,r=t;
               while(r--)
               {
                   if(flag==0)
                   {
                       counter++;
                       if(counter>l)
                       {
                           flag=1;
                           counter=l;
                       }
                       else if(flag==1)
                       {
                           counter--;
                           if(counter<p)
                           {
                               flag=0;
                               counter=p;
                           }
                       }
                   }
               }
               if(counter>=a&&counter<=b)found++;
           }

         printf("%lli\n",found);
       }
   }

}
