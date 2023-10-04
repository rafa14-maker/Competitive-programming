#include<bits/stdc++.h>
using namespace std;

int n;
int frr[105];
int krr[105];

vector<int>v;

void take()
{
   while(1)
    {
        int a;
        cin>>a;
        if(a==0)break;
        v.push_back(a);
    }
}
void fi()
{
    for(int i=1;i<=100;i++)
    {
        frr[i]=i;
        krr[i]=0;
    }
}

void chute()
{
    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)break;
        frr[a]=b;
    }
}

void loss()
{
    while(1)
    {
        int a,b;
        cin>>a;
        if(a==0)break;
        if(a<0)
        {
           b=a*(-1);
           krr[b]=-1;
        }
        else if(a>0)
        {
            krr[a]=1;
        }
    }
}

void game()
{
    int arr[n+5];
    for(int i=1;i<=n;i++)arr[i]=0;
    int idx=1;
   deque<int>dq;
    for(int i=0;i<v.size();i++)
    {
       if(dq.front()==idx)
        {
            idx++;
            dq.pop_front();
        }
        arr[idx]=arr[idx]+v[i];
        arr[idx]=frr[arr[idx]];
        if(krr[arr[idx]]<0)
        {
         dq.push_back(idx);
        }
        else if(krr[arr[idx]]>0)
        {
            idx--;
        }
        if(arr[idx]==100)
        {
            cout<<idx<<endl;
            return ;
        }
        idx++;
        if(idx>n)idx=1;
    }
   // for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
}


int main()
{
   take();
    while(scanf("%d",&n))
    {
        if(n==0)break;
        fi();
        chute();
        loss();
        game();
    }
}
