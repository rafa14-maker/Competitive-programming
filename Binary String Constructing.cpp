#include<bits/stdc++.h>
using namespace std;

int x,a,b;

int flag=0;

void print(string arr)
{
    if(flag>0)return;

    int d=0,e=0,f=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='0')d++;
        if(arr[i]=='1')e++;
        if(i+1<arr.size()&&arr[i]!=arr[i+1])f++;
    }
    if(d==a&&b==e&&f==x)cout<<arr,flag++;
}

void f(int pos,string arr)
{
    if(flag>0)return;
    if(pos>=(a+b))
    {
    print(arr);
    return ;
    }

    f(pos+1,arr+'1');
    f(pos+1,arr+'0');

}

int main()
{
    cin>>a>>b>>x;
    string arr;
    f(0,arr);
 }
