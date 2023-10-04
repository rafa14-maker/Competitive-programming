#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q=0;
    while(1)
    {
        int n,m;
        cin>>n;
        if(n==0)break;

        cin>>m;
        char arr[n+5][m+5];

        int l[n+5][m+5];
        int r[n+5][m+5];

        for(int i=0;i<n;i++)for(int j=0;j<m;j++)l[i][j]=0,r[i][j]=0;

        vector<pair<int,string> >accross;
        vector<pair<int,string> >down;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
          if(q)cout<<"\n";
        int counter=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                string str="",s="";
               for(int a=j;a<m;a++)
               {
                   if(arr[i][a]=='*'||l[i][a]==1)break;
                   else
                   {
                       l[i][a]=1;
                       str+=arr[i][a];
                   }
               }


              for(int a=i;a<n;a++)
               {
                   if(arr[a][j]=='*'||r[a][j]==1)break;
                   else
                   {
                       r[a][j]=1;
                       s+=arr[a][j];
                   }
               }
               if(s.size()>0||str.size()>0)counter++;
                if(s.size()>0)down.push_back(make_pair(counter,s));
                   if(str.size()>0)accross.push_back(make_pair(counter,str));
            }
        }
        sort(accross.begin(),accross.end());
        sort(down.begin(),down.end());
        printf("puzzle #%d:\n",++q);
        printf("Across\n");
        for(int i=0;i<accross.size();i++)
        {
            if(accross[i].first<=9)
            {
                cout<<"  "<<accross[i].first<<"."<<accross[i].second<<endl;
            }
            else
            {
                cout<<" "<<accross[i].first<<"."<<accross[i].second<<endl;
            }
        }
         printf("Down\n");
        for(int i=0;i<down.size();i++)
        {
            if(down[i].first<=9)
            {
                cout<<"  "<<down[i].first<<"."<<down[i].second<<endl;
            }
            else
            {
                cout<<" "<<down[i].first<<"."<<down[i].second<<endl;
            }
        }

    }
}
