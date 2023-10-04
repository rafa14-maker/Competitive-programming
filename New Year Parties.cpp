#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5 + 5;

int arr[N];
int n,p1=0,p2=1e6;


int check(string s)
{
    int counter=0;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!=s[i+1])counter++;
    }
    int len=s.size();
    if(s[len]!=s[len-1])counter++;
    return counter;
}

void f(int pos,string s)
{
    if(pos==n)
    {
        int k=check(s);
        p1=max(p1,k);
        p2=min(p2,k);
        return;
    }
    int a=arr[pos],b=arr[pos]-1,c=arr[pos]+1;

    f(pos+1,s+((char)(a+'0')));
     f(pos+1,s+((char)(b+'0')));
      f(pos+1,s+((char)(c+'0')));
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    string s;
   f(0,s);
   cout<<p2<<" "<<p1<<endl;
}
