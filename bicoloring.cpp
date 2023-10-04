#include<bits/stdc++.h>
#define cover(a,d) memset(a,d,sizeof(a))
using namespace std;

int main()
{
    int t;
    while(scanf("%d",&t))
    {
        if(t==0)break;
        int n;
        cin>>n;

        vector<int>edge[10000];
        int color[10000];

      cover(color,-1);

       for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            edge[a].push_back(b);
            edge[b].push_back(a);
        }

        queue<int>q;

        int f=0;
        color[0]=0;
        q.push(0);

        while(!q.empty())
        {
            int p=q.front();
           // cout<<p<<" ";
            q.pop();

            int s=edge[p].size();

            for(int i=0;i<s;i++)
            {
               if(color[edge[p][i]]==-1)
                {
                    if(color[p]==0)
                     color[edge[p][i]]=1;
                    else{
                    color[edge[p][i]]=0;}
                     q.push(edge[p][i]);
                }
               else
               {
                if(color[edge[p][i]]==color[p]){
                        f=1;
                        break;
                    }
            }


        }
        if(f==1)break;

    }
     if(f==1)
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"BICOLORABLE."<<endl;
        }

}
}
