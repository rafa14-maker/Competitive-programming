#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

using ll=long long;
#define hello ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define read()          freopen("in.txt","r",stdin)
#define write()         freopen("out.txt","w",stdout)
#define en   "\n"

//int arr[N],frr[N];
ll k,n;
char arr[500][1500];

vector<int>v;
set<int>st;
map<int,int>mp;

void bk()
{
    v.clear();
    st.clear();
    mp.clear();
    for(int i=0;i<500;i++)for(int j=0;j<1500;j++)arr[i][j]=' ';
}

void b(int i,int j)
{
    for(int p=i+1;p<=i+n;p++)
    {
        arr[p][j]='|';
    }
}
void c(int i,int j)
{
    for(int p=i+1;p<=i+n;p++)
    {
        arr[p][j+1+n]='|';
    }
}

void e(int i,int j)
{

    for(int p=i+n+2;p<=i+n+n+1;p++)
    {
        arr[p][j]='|';
    }
}

void fs(int i,int j)
{

    for(int p=i+n+2;p<=i+n+n+1;p++)
    {
        arr[p][j+1+n]='|';
    }
}

void a(int i,int j)
{
    for(int p=j+1;p<=j+n;p++)
    {
        arr[i][p]='-';
    }
}

void d(int i,int j)
{
    for(int p=j+1;p<=j+n;p++)
    {
        arr[i+n+1][p]='-';
    }
}

void g(int i,int j)
{
    for(int p=j+1;p<=j+n;p++)
    {
        arr[i+n+1+n+1][p]='-';
    }
}

void fk(char f,int i,int j)
{
   // cout<<i<<" "<<j<<endl;
  if(f=='0'||f=='2'||f=='3'||f=='5'||f=='6'||f=='7'||f=='8'||f=='9')a(i,j);
  if(f=='4'||f=='5'||f=='6'||f=='9'||f=='0'||f=='8')b(i,j);
  if(f=='1'||f=='0'||f=='2'||f=='3'||f=='4'||f=='7'||f=='8'||f=='9')c(i,j);
  if(f=='2'||f=='3'||f=='4'||f=='5'||f=='6'||f=='8'||f=='9')d(i,j);
  if(f=='0'||f=='2'||f=='6'||f=='8')e(i,j);
  if(f=='0'||f=='1'||f=='3'||f=='4'||f=='5'||f=='6'||f=='8'||f=='7'||f=='9')fs(i,j);
  if(f=='0'||f=='2'||f=='3'||f=='5'||f=='6'||f=='8'||f=='9')g(i,j);
  //if(f==''||f==''||f==''||f==''||f==''||f==''||f=='')a(i,j);
}

void solve()
{
    while(1){
  bk();
  cin>>n;
  string s;
  cin>>s;
  if(n==0)break;
  int row=2*n+3;
  int col=s.size()*(n+2)+s.size();

  int idx1=0,idx2=0;
  int k=n+3;
  for(int i=0;i<s.size();i++)
  {
      fk(s[i],idx1,idx2);
      //break;
      idx2+=k;
    //  cout<<idx1<<" "<<idx2<<endl;
  }

  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
    if(j!=col-1) cout<<arr[i][j];
   // else cout<<arr[i][j]<<endl;
         //else cout<<"*"<<" ";
      }
      cout<<endl;
  }
  cout<<endl;
    }
}


int main()
{
    hello;
 //   int q;cin>>q;while(q--)solve();

    solve();
}
