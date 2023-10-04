#include<bits/stdc++.h>
using namespace std;

int f1(int a,int b,int c,int d,int e,int f)
{
    int counter=0;
    if(a<b)counter++;
    if(c<d)counter++;
    if(e<f)counter++;
    return counter++;
}

int main()
{
    while(1)
    {
        int a,b,c,e,f;
        cin>>a>>b>>c>>e>>f;
        if(a==0&&b==0&&c==0&&e==0&&f==0)break;
        int flag=0;
        for(int i=1;i<=52;i++)
        {
            if(i!=a&&i!=b&&i!=c&&i!=e&&i!=f)
            {
                int counter=0;
                int g=i;
                if(f1(a,e,b,f,c,g)>=2)counter++;
                if(f1(a,e,b,g,c,f)>=2)counter++;
                if(f1(a,f,b,e,c,g)>=2)counter++;
                if(f1(a,f,b,g,c,e)>=2)counter++;
                if(f1(a,g,b,e,c,f)>=2)counter++;
                if(f1(a,g,b,f,c,e)>=2)counter++;
                if(counter>=6)
                {
                    cout<<i<<endl;
                    flag++;
                    break;
                }
            }
        }
        if(flag==0)cout<<-1<<endl;
    }
}
