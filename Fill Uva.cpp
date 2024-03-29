#include<bits/stdc++.h>
using namespace std;

#define oo 0xfffffff
int A,B,C,D,jug[3];
int dp[201][201][201],res[201];
queue<int>qa,qb,qc,qtot;

void pushNode(int a,int b,int c,int tot)
{
    qa.push(a);
    qb.push(b);
    qc.push(c);
    qtot.push(tot);
}

void update(int a,int b,int c,int tot)
{
    if(tot>=res[D])return ;
    if(tot>=dp[a][b][c])return ;
    dp[a][b][c]=tot;
    res[a]=min(res[a],tot);
    res[b]=min(res[b],tot);
    res[c]=min(res[c],tot);

    if(a<B-b)pushNode(0,b+a,c,tot+a);
    else pushNode(a-(B-b),B,c,tot+(B-b));

     if(a<C-c)pushNode(0,b,c+a,tot+a);
    else pushNode(a-(C-c),b,C,tot+(C-c));

     if(b<A-a)pushNode(a+b,0,c,tot+b);
    else pushNode(A,b-(A-a),c,tot+(A-a));

     if(b<C-c)pushNode(a,0,c+b,tot+b);
    else pushNode(a,b-(C-c),C,tot+(C-c));

     if(c<A-a)pushNode(a+c,b,0,tot+c);
    else pushNode(A,b,c-(A-a),tot+(A-a));

     if(c<B-b)pushNode(a,b+c,0,tot+c);
    else pushNode(a,B,c-(B-b),tot+(B-b));
}

void bfs(int a,int b,int c,int tot)
{
    qa.push(a);
    qb.push(b);
    qc.push(c);
    qtot.push(tot);
    while(!qa.empty())
    {
        a=qa.front();
        qa.pop();
        b=qb.front();
        qb.pop();
        c=qc.front();
        qc.pop();
        tot=qtot.front();
        qtot.pop();
        update(a,b,c,tot);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k;
        cin>>A>>B>>C>>D;
        for(i=0;i<=A;i++)
        {
            for(j=0;j<=B;j++)
            {
                for(k=0;k<=C;k++)
                {
                    dp[i][j][k]=oo;
                }
            }
        }

        jug[0]=A;
        jug[1]=B;
        jug[2]=C;

        for(i=0;i<=D;i++)res[i] = oo;

        bfs(0,0,C,0);

        while(res[D]==oo)D--;

        printf("%d %d\n",res[D],D);
    }
}
