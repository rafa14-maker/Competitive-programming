#include<bits/stdc++.h>
using namespace std;

string convert(int n)
{
    string s;
    s+='0';
  if(n>0)  s+=(char)(n+'0');
  else s+='0';
    return s;
}
int main()
{
    int q;
    int t=0;
    while(scanf("%d",&q)!=EOF)
    {
        vector<pair<int,int> >v;
        v.push_back(make_pair(0,600));
        while(q--)
        {
            int a,b,k,p;
            char c;
            cin>>a>>c>>b;

            cin>>k>>c>>p;

            v.push_back(make_pair(a*60+b,k*60+p));

            string s;
            getline(cin,s);
        }

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i].first==v[j].first)
                {
                    if(v[i].second>v[j].second)
                    {
                        swap(v[i].second,v[j].second);
                    }
                }
            }
        }

        v.push_back(make_pair(1080,0));
        vector<pair<int,int> >mp;
        for(int i=1;i<v.size();i++)
        {
           mp.push_back(make_pair(v[i].first-v[i-1].second,v[i-1].second));
        }
        sort(mp.begin(),mp.end());



        int tmp=mp.size()-1;
        int mx=mp[tmp].first;
        int pk=mp[tmp].second;


        for(int i=0;i<mp.size();i++)
        {
            if(mp[i].first==mx&&pk>mp[i].second)
            {
                pk=mp[i].second;
            }
        }

        printf("Day #%d: the longest nap starts at ",++t);

        int ab=pk/60;
        int cb=pk-(ab*60);

      if(cb>=10)  printf("%d:%d and will last for ",ab,cb);
     else
     {
         printf("%d:",ab);
         cout<<convert(cb);
         printf(" and will last for ");
     }

        if(mx<60)
        {
           printf("%d minutes.\n",mx);
        }
        else
        {
            int c=mx/60;
            int d=mx-(60*c);
            printf("%d hours and %d minutes.\n",c,d);
        }

    }
}

/*

11
15:35 17:03 Meeting with Anjupiter
10:36 16:02 Meeting with Morass
10:22 11:30 Meeting with Morass
13:37 16:27 Meeting with Vinit
17:00 17:59 Meeting with try
15:21 17:13 Meeting with try
12:38 16:41 Meeting with vatsal
12:47 12:55 Meeting with Anjupiter
10:33 16:41 Meeting with Vinit
15:22 18:00 Meeting with Vinit
14:39 15:20 Meeting with Anjupiter
*/
