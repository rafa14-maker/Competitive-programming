#include<bits/stdc++.h>
using namespace std;

int arr[305],n,p,l,r;
vector<int>v;

int dp1[305][500];
int dp2[305][305][305];
int dp3[305][305];

int f1(int pos,int sum)
{
  //  cout<<pos<<" "<<sum<<endl;
    if(pos>n)return 0;
    if(n==sum)return 1;
    if(sum>n)return 0;
    if(dp1[pos][sum]!=-1)return dp1[pos][sum];
    int ans=0;
  // if(pos!=0) ans+=f1(pos,sum+pos);
   // ans+=f1(pos+1,sum+pos);
    ans+=f1(pos,sum+pos);
    ans+=f1(pos+1,sum);
    return dp1[pos][sum]=ans;
}

int f2(int pos,int sum,int counter)
{
  // cout<<pos<<" "<<sum<<endl;
    if(pos>n)return 0;
    if(counter>p)return 0;
    if(n==sum&&counter)return 1;
    if(sum>n)return 0;
    if(dp2[pos][sum][counter]!=-1)return dp2[pos][sum][counter];
    int ans=0;
  // if(pos!=0) ans+=f1(pos,sum+pos);
   // ans+=f1(pos+1,sum+pos);
    ans+=f2(pos,sum+pos,counter+1);
    ans+=f2(pos+1,sum,counter);
    return dp2[pos][sum][counter]=ans;
}







int main()
{
    string str;
    while(getline(cin,str))
    {
    stringstream ss;
  //  cout<<str<<endl;
   v.clear();
    ss<<str;
    int val;
    while(ss>>val)
    {
        v.push_back(val);
    }
    //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

   if(v.size()==1)
   {
       n=v[0];
       memset(dp1,-1,sizeof dp1);
       printf("%d\n",f1(1,0));
   }

   if(v.size()==2)
   {
        memset(dp2,-1,sizeof dp2);
      p=v[1];
       n=v[0];
    printf("%d\n",f2(1,0,0));
   }
   if(v.size()==3)
   {

   }

    }
}
