#include<bits/stdc++.h>
using namespace std;

char arr[30][30];
bool vis[30][30];
vector<string>vs;
int n,m;

int dic[]={0,0,-1,1};

int f(int i,int j)
{
   // cout<<i<<" "<<j<<endl;
   // if(vis[i][j])return 0;

  // vis[i][j]=true;
   arr[i][j]='9';

   int ans=0;


   for(int a=0;a<4;a++)
   {
       for(int b=0;b<4;b++)
       {
           if(dic[a]+i<n&&dic[a]+i>=0&&dic[b]+j<m&&dic[b]+j>=0&&arr[dic[a]+i][dic[b]+j]=='1')
           {
               ans+=1+f(dic[a]+i,dic[b]+j);
           }
       }
   }


 //  vis[i][j]=true;
   return ans;
}

void solve()
{
    vs.clear();
    while(1)
    {
        string s;
        getline(cin,s);
        if(s.size()==0)break;
        vs.push_back(s);
    }

   // for(int i=0;i<vs.size();i++)cout<<vs[i]<<endl;
    n=vs.size();
    m=vs[0].size();
  //  cout<<n<<" "<<m<<endl;
    for(int i=0;i<n;i++)
    {
        string s=vs[i];
        for(int j=0;j<m;j++)
        {
            arr[i][j]=s[j];
        }
    }

  /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<arr[i][j];
        cout<<endl;
    }

    cout<<endl;*/


  memset(vis,false,sizeof vis);

    int sum=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='1'&&!vis[i][j])
            {
               sum=max(sum,1+ f(i,j));
            }
        }
    }


  /*   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<arr[i][j];
        cout<<endl;
    }

    cout<<endl;*/


   printf("%d\n",sum);
   printf("\n");
}

int main()
{
    int q;
    cin>>q;
    getchar();
    cin.ignore();
    while(q--)solve();
}
