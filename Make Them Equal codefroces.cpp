#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.insert(a);
    }
 //   sort(arr,arr+n);
  if(arr.size()>3)cout<<-1<<endl;
  else if(arr.size()==2)
  {
      auto it=arr.begin();
      int a=*it;
      it++;
      int b=*it;
     if((b-a)%2==0) cout<<(b-a)/2<<endl;
     else cout<<b-a<<endl;
  }
  else if(arr.size()==3)
  {
         auto it=arr.begin();
      int a=*it;
      it++;
      int b=*it;
       it++;
       int c=*it;

       if(b-a!=c-b)cout<<-1<<endl;
      else cout<<b-a<<endl;
  }
  else cout<<0<<endl;
}
