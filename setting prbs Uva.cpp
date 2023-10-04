#include<bits/stdc++.h>
using namespace std;

const int mx = 1000;

int A[mx];
int B[mx];

bool lacmp(int a,int b){return A[a]<A[b];}
bool lbcmp(int a,int b){return B[a]>B[b];}

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)cin>>A[i];
        for(int i=0;i<n;i++)cin>>B[i];
        vector<int>la,lb;
        for(int i=0;i<n;i++)
        {
            if(A[i]<B[i])la.push_back(i);
            else lb.push_back(i);
        }
        sort(la.begin(),la.end(),lacmp);
        sort(lb.begin(),lb.end(),lbcmp);
        vector<int>l;
        for(int i=0;i<la.size();i++)l.push_back(la[i]);
        for(int i=0;i<lb.size();i++)l.push_back(lb[i]);
        int t1=0,t2=0;
        for(int i=0;i<n;i++)
        {
            t1+=A[l[i]];
            t2=max(t1,t2)+B[l[i]];
        }
        printf("%d\n",t2);
    }
}
