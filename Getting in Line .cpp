#include<bits/stdc++.h>
using namespace std;

string frr;

int n;
double m=-1;
vector<int>v[10];

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}

double cal(int a,int b,int c,int d)
{
    double k1=(c-a)*(c-a);
    double k2=(d-b)*(d-b);
    double k=k1+k2;
    return (double)sqrt(k);
}

void f(int mask,double sum,int counter,int pos,string arr)
{
 //cout<<arr<<" "<<counter<<" "<<n<<endl;
    if(counter==n)
    {
     // cout<<sum<<" "<<counter<<endl;
        if(m==-1)
        {
            m=sum;
            frr=arr;
        }
        else
        {
            if(sum<m)
            {
                m=sum;
                frr=arr;
            }
        }
    }
    if(counter>n&&arr.size()==n)return ;

    for(int i=0;i<n;i++)
    {
        if(!Check(mask,i))
        {
            if(pos==-1)
            {
                string krr=arr;
                f(Set(mask,i),0,counter+1,i,krr+=(i+48));
            }
            else
            {
                string krr=arr;
                double dist=cal(v[i][0],v[i][1],v[pos][0],v[pos][1]);
                f(Set(mask,i),sum+dist+16,counter+1,i,krr+=(i+48));
            }
        }
    }
}

int main()
{
int c=0;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        c++;
      for(int i=0;i<=10;i++)v[i].clear();
        frr="";
        m=-1;
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>>a>>b;
            v[i].push_back(a);
            v[i].push_back(b);
        }
        f(0,0,0,-1,frr);
        printf("**********************************************************\n");
        printf("Network #%d\n",c);
        for(int i=0;i<frr.size();i++)
        {
            if(i+1<frr.size())
            {
                int a=frr[i]-'0';
                int b=frr[i+1]-'0';
                printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2lf feet.\n",v[a][0],v[a][1],v[b][0],v[b][1],cal(v[a][0],v[a][1],v[b][0],v[b][1])+16);
            }
        }
        printf("Number of feet of cable required is %.2lf.\n",m);

    }
}
