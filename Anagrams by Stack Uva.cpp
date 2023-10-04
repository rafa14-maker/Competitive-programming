#include<bits/stdc++.h>
using namespace std;

string in,out;

void f(string a,string b,string sta,string path,int n)
{
    if(n==in.length()*2)
    {
        if(out==b)cout<<path<<endl;
        return ;
    }
    if(a.length()>0)
    {
        f(a.substr(1,a.length()-1),b,sta+a[0],path+(n==0?"i":" i"),n+1);
    }
    if(sta.length()>0&&out[b.length()]==sta[sta.length()-1])
    {
        f(a,b+sta[sta.length()-1],sta.substr(0,sta.length()-1),path+" o",n+1);
    }
}

int main()
{
    while(cin>>in>>out)
    {
        printf("[\n");
       if(in.size()==out.size()) f(in,"","","",0);
        printf("]\n");
    }
}
