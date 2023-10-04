#include<bits/stdc++.h>
using namespace std;

string frr;
int counter=2*1e9+7;

void f(int step,string arr)
{

    int flag=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!='0')
        {
            flag++;
        }
        else if(arr[i]=='0'&&flag==0)
        {
            return ;
        }
    }

    int p=0;
    int k=1;
    int len=arr.size()-1;
    for(int i=len;i>=0;i--)
    {
        p+=(arr[i]-48)*k;
        k*=10;
    }
  //  cout<<1<<" "<<p<<endl;
    int c=sqrt(p);
    if(c*c==p&&c!=0&&p!=0)
    {
      //  cout<<c<<" "<<step<<" "<<p<<endl;
        counter=min(counter,step);
    }

    for(int i=0;i<arr.size();i++)
    {
        string krr;
        for(int j=0;j<arr.size();j++)
        {
            if(i==j)continue;
            else krr+=arr[j];
        }
        f(step+1,krr);
    }
}

int main()
{
   cin>>frr;
   f(0,frr);

   if(counter==2*1e9+7)cout<<-1<<endl;
   else cout<<counter<<endl;
}
