#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string s[] = {"tourist",
"ksun48",
"Benq",
"Um_nik",
"apiad",
"Stonefeang",
"ecnerwala",
"mnbvmar",
"newbiedmy",
"semiexp"};

int arr[] = {3858,3679,3658,3648,3638,3630,3613,3555,3516,3481};


void solve()
{
  //  cout<<"yes"<<endl;

  string frr;
  cin>>frr;

  for(int i=0;i<10;i++)
  {
      if(s[i] == frr)
      {
          cout<<arr[i]<<endl;
          break;
      }
  }

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}
