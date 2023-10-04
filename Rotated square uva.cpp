#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
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
        while(flag<4)
        {
           if(flag!=0)
            {
                vector<char>adj[m+5];
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        adj[j].push_back(frr[i][j]);
                    }
                }
                for(int i=0;i<m;i++)
                {
                    int flag=m-1;
                    for(int j=0;j<m;j++)
                    {
                        frr[i][j]=adj[i][flag];
                        flag--;
                    }
                }
            }

            int counter=0;

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {

                    if(i+m-1<n&&j+m-1<n)
                    {
                          int g=0;
                        for(int k=i,p=0;p<m;k++,p++)
                        {
                            for(int c=j,q=0;q<m;q++,c++)
                            {
                                if(arr[k][c]!=frr[p][q])g++;
                            }
                        }
                         if(g==0)counter++;
                    }
                }
            }
            if(flag!=3)cout<<counter<<" ";
            if(flag==3)cout<<counter<<endl;
            flag++;
        }
    }
}
