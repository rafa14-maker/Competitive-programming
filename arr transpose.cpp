#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n+5][n+5];
    char frr[m+5][m+5];


     for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<n;j++)arr[i][j]=s[j];
        }
        for(int i=0;i<m;i++)
        {
             string s;
            cin>>s;
            for(int j=0;j<m;j++)frr[i][j]=s[j];
        }
   int flag=0;
   while(flag<4){
      vector<char>adj[m+5];
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        adj[j].push_back(arr[i][j]);
                    }
                }
                for(int i=0;i<m;i++)
                {
                    int flag=m-1;
                    for(int j=0;j<m;j++)
                    {
                        arr[i][j]=adj[i][flag];
                        flag--;
                    }
                }


                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<m;j++)cout<<frr[i][j]<<" ";
                    cout<<endl;
                }
           flag++;
   }
}
