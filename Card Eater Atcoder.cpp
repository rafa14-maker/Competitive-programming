#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int frr[N];

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)frr[arr[i]]++;

    set<int>s;

    for(int i=0;i<n;i++)s.insert(arr[i]);

    set<int>::iterator it;


    for (it = s.begin(); it != s.end(); ++it)
    {
        int i=*it;
        if(frr[i]%2==1)
        {
          frr[i]=1;
        }
        else frr[i]=2;
    }

      vector<int>two;
      vector<int>one;

     for (it = s.begin(); it != s.end(); ++it)
    {
        int i=*it;
        if(frr[i]==1)one.push_back(i);
        else two.push_back(i);
    }
      sort(two.begin(),two.end());
      sort(one.begin(),one.end());

    //  reverse(one.begin(),one.end());





   cout<<one.size()<<endl;
   for(int i=0;i<one.size();i++)cout<<one[i]<<" ";cout<<endl;
   cout<<two.size()<<endl;
   for(int i=0;i<two.size();i++)cout<<two[i]<<" ";cout<<endl;
   cout<<counter<<endl;

}
