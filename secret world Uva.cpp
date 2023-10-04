#include<bits/stdc++.h>
using namespace std;

#define maxn 1000001

char t[maxn],p[maxn];
int b[maxn],n,m,anslen;

void kmpPrepoc()
{
    m = strlen(p);
    int i=0,j= -1;
    b[0]= -1;
    while(i<m)
    {
        while(j>=0&&p[i]!=p[j])j=b[j];
        i++;
        j++;
        b[i]=j;
    }
}

void kmp()
{
    n = strlen(t);
    int i=0,j=0;
    while(i<n)
    {
        while(j>=0&&t[i]!=p[j])j=b[j];
        i++;
        j++;
        if(j>anslen)anslen = j;
        if(j==m)
        {
            j=b[j];
        }
    }
}

void solve()
{
    scanf("%s",p);
    int len = strlen(p);
    for(int i=0;i<len;i++)
    {
        t[i]=p[len-i-1];
    }
    t[len]='\0';
    kmpPrepoc();
    anslen = -1;
    kmp();
    for(int i=anslen-1;i>=0;i--)
    {
        printf("%c",p[i]);
    }
    printf("\n");
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
