#include<bits/stdc++.h>
using namespace std;

long long  mx = 0;
char arr[20];
string s;
int n;

long long cal(string frr)
{
    long long b = 0;
    long long idx = 1;
     for(int i=0;i<frr.size();i++)
     {
         b += idx*(long long)(frr[i]-'0');
         idx*=10;
     }
     return b ;
}

void fk(int pos,string a,string b)
{
    if(pos==n)
    {
        long long ak = cal(a);
        long long bk = cal(b);
     //   cout<<ak<<" "<<bk<<endl;
        mx = max(mx,ak*bk);
        return ;
    }

    fk(pos+1,a+s[pos],b);
    fk(pos+1,a,b+s[pos]);
}

/*
void f(string frr)
{
     n = frr.size();
    for(int i=0;i<frr.size();i++)
    {
        arr[i] = frr[i];
    }

    do{

     long long idx =1;
     long long b = 0;

   //  mx=max(mx,b*a);
      fk(0,"","");

    }while(next_permutation(arr,arr+n));

}
*/

void solve()
{
  //  string s;
    cin>>s;
    n=s.size();
    sort(s.begin(),s.end());
    //f(s);
    fk(0,"","");
    cout<<mx<<endl;
}

int main()
{
   solve();
}
