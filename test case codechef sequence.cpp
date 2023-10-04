#include<bits/stdc++.h>
using namespace std;

int n,k;
int arr[100];

vector<int>v;

void f(int sum,int pos)
{
    if(pos>=n)return ;

  cout<<pos<<" ";

    f(sum,pos+1);
    f(sum,pos+2);

}

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    f(0,0);
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
