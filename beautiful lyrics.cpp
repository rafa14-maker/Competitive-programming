#include<bits/stdc++.h>
using namespace std;
#define max1 100005

int fr[max1];
string arr[max1];

char vow[]={'a','e','i','o','u'};
char las[max1];

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       int counter=0;
       string s=arr[i];
       for(int j=0;j<s.size();j++)
       {
           for(int k=0;k<5;k++)
           {
               if(s[j]==vow[k]){
                    las[i]=s[j];
               counter++;
               break;}
           }
       }
       fr[i]=counter;
   }

  // for(int i=0;i<n;i++)cout<<fr[i]<<" "<<las[i]<<" "<<endl;

  int sum=0;
  vector<pair<string,string> >p;

  for(int i=0;i<n;i++)
  {
      if(fr[i]!=0)
      {
          for(int j=i+1;j<n;j++)
          {
              if(fr[j]!=0)
              {
                  if(fr[i]==fr[j]&&las[i]==las[j])
                  {
                     // cout<<arr[i]<<" "<<arr[j]<<endl;
                      p.push_back(make_pair(arr[i],arr[j]));
                      fr[i]=0;
                      fr[j]=0;
                      break;
                  }
              }
          }
      }
  }
  vector<pair<string,string> >q;

  for(int i=0;i<n;i++)
  {
      if(fr[i]!=0)
      {
          for(int j=i+1;j<n;j++)
          {
              if(fr[j]!=0)
              {
                  if(fr[i]==fr[j])
                  {
                     // cout<<arr[i]<<" "<<arr[j]<<endl;
                      q.push_back(make_pair(arr[i],arr[j]));
                      fr[i]=0;
                      fr[j]=0;
                      break;
                  }
              }
          }
      }
  }
 /* cout<<endl;
  for(int i=0;i<p.size();i++)
  {
      cout<<p[i].first<<" "<<p[i].second<<endl;
  }
   for(int i=0;i<q.size();i++)
  {
      cout<<q[i].first<<" "<<q[i].second<<endl;
  }

cout<<endl;*/
  if(p.size()==q.size())
     {
         cout<<q.size()<<endl;
        for(int i=0;i<p.size();i++)
            {
               cout<<q[i].first<<" "<<p[i].first<<endl<<q[i].second<<" "<<p[i].second<<endl;
            }
     }
     else if(q.size()>p.size())
     {
         cout<<p.size()<<endl;
          for(int i=0;i<p.size();i++)
            {
        cout<<q[i].first<<" "<<p[i].first<<endl<<q[i].second<<" "<<p[i].second<<endl;
            }
     }
     else if(p.size()>q.size())
     {
        int k=(p.size()-q.size())/2;
         cout<<(q.size()+p.size())/2<<endl;
              for(int i=0;i<q.size();i++)
            {
        cout<<q[i].first<<" "<<p[i].first<<endl<<q[i].second<<" "<<p[i].second<<endl;
               //k--;
            }
         for(int i=q.size();i<=(p.size()-q.size());i+=2)
         {
             if(i+1<p.size())
        cout<<p[i].first<<" "<<p[i+1].first<<endl<<p[i].second<<" "<<p[i+1].second<<endl;
         }
     }


}

