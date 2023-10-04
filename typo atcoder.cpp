#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
 //   sort(a.begin(),a.end());
  //  sort(b.begin(),b.end());

  int cnt=0;

  for(int i=0;i<a.size();i++)
  {
      if(i+1<a.size()&&a[i]!=b[i]&&a[i+1]==b[i])
      {
          swap(a[i],a[i+1]);
          break;
      }
  }

    if(a==b)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
