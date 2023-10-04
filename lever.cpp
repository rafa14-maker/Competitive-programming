/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

string arr;
cin>>arr;

long long c=0,p;

for(int i=0;i<arr.size();i++)
{
    if(arr[i]=='^')
    {
        p=i;
        break;
    }
}

for(int i=0;i<arr.size();i++)
{
   if(arr[i]>='1'&&arr[i]<='9') c+=(i-p)*(arr[i]-48);
}

if(c==0)cout<<"balance"<<endl;
else if(c>0)cout<<"right"<<endl;
else cout<<"left"<<endl;

}


