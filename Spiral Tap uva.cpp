#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100005];

int main()
{
      int i=(n/2)+1,j=(n/2)+1;
        int flag=0,counter=1,c=1,r=0;
        while(c!=f)
        {
            int a=counter;
            while(a--)
            {
                if(flag==0)
                {
                    if(r==0)
                    {
                        i++;
                        c++;
                        if(c==f)break;
                    }
                    else if(r==1)
                    {
                        j++;
                        c++;
                        if(c==f)break;
                    }
                }
                else if(flag==1)
                {
                    if(r==0)
                    {
                        i--;
                        c++;
                        if(c==f)break;
                    }
                    else if(r==1)
                    {
                        j--;
                        c++;
                        if(c==f)break;
                    }
                }
            }
            if(r==0)
            {
                r=1;
                if(flag==0)flag=1;
                else flag=0;
            }
            else if(r==1)
            {
                r=0;
                counter++;
            }
        }




    while(1)
    {
        int n,f;
        cin>>n>>f;
        if(n==0&&f==0)break;

        printf("Line = %d, column = %d.\n",i,j);
    }
}
