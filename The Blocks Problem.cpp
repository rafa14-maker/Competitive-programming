 #include<bits/stdc++.h>
using namespace std;

vector<int>adj[30];
int n;


void move_onto(int a,int b)
{
    int flag=0;
  for(int i=0;i<n;i++)
  {
      if(flag>0)break;
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==a)
          {
              for(int k=adj[i].size()-1;k>=j;k--)
              {
                  int c=adj[i][k];
                 if(adj[i][k]!=a) adj[c].push_back(c);
                  adj[i].pop_back();

              }
               flag++;
                  break;
          }
      }
  }
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==b)
          {
              for(int k=adj[i].size()-1;k>j;k--)
              {
                   int c=adj[i][k];
                  adj[c].push_back(c);
                  adj[i].pop_back();
              }
              adj[i].push_back(a);
              return;
          }
      }
  }
}
void move_over(int a,int b)
{
    int flag=0;
    for(int i=0;i<n;i++)
  {
      if(flag>0)break;
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==a)
          {
              for(int k=adj[i].size()-1;k>=j;k--)
              {
                   int c=adj[i][k];
                  if(adj[i][k]!=a) adj[c].push_back(c);
                  adj[i].pop_back();
              }
              flag++;
              break;
          }
      }
  }

   for(int i=0;i<n;i++)
  {
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==b)
          {
              adj[i].push_back(a);
              return;
          }
      }
  }


}
void pile_onto(int a,int b)
{
   vector<int>frr;
   int flag=0;

     for(int i=0;i<n;i++)
      {
          if(flag>0)break;
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==a)
          {
              for(int k=adj[i].size();k>=j;k--)
              {
                  frr.push_back(adj[i][k]);
                  adj[i].pop_back();
              }
              flag++;
              break;
          }
      }
      }

       for(int i=0;i<n;i++)
      {
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==b)
          {
              for(int k=adj[i].size()-1;k>j;k--)
              {
                   int c=adj[i][k];
                  adj[c].push_back(c);
                  adj[i].pop_back();
              }

              for(int k=frr.size()-1;k>=0;k--)
              {
                  adj[i].push_back(frr[k]);
              }
              //adj[i].push_back(a);
              return;
          }
      }
  }



}
void pile_over(int a,int b)
{
    vector<int>frr;
    int flag=0;

     for(int i=0;i<n;i++)
      {
          if(flag>0)break;
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==a)
          {
              for(int k=adj[i].size()-1;k>=j;k--)
              {
                  frr.push_back(adj[i][k]);
                  adj[i].pop_back();
              }
              flag++;
              break;
          }
      }
      }

         for(int i=0;i<n;i++)
      {
      for(int j=0;j<adj[i].size();j++)
      {
          if(adj[i][j]==b)
          {
              for(int k=frr.size()-1;k>=0;k--)
              {
                  adj[i].push_back(frr[k]);
              }
              //adj[i].push_back(a);
            return;
          }
      }
  }
}


int main()
{
   cin>>n;
   for(int i=0;i<n;i++)
   {
      adj[i].push_back(i);
   }
   while(1)
   {
       string s,f;
       int a,b;
       cin>>s;
       if(s=="quit")
       {
           break;
       }
       cin>>a>>f>>b;
       if(s=="move"&&f=="onto")move_onto(a,b);
       else if(s=="move"&&f=="over")move_over(a,b);
       else if(s=="pile"&&f=="onto")pile_onto(a,b);
       else if(s=="pile"&&f=="over")pile_over(a,b);
   }

   for(int i=0;i<n;i++)
   {
       printf("%d:",i);
       for(int j=0;j<adj[i].size();j++)
       {
           printf(" %d",adj[i][j]);
       }
       printf("\n");
   }
}
