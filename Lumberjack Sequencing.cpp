#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
 cout<<"Lumberjacks:"<<endl;
    while(q--)
    {

        int a=0,b=0;
        vector<int>v;
        int arr[11];

        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
           }
        sort(v.begin(),v.end());
     for(int i=0;i<10;i++)
     {
        if(arr[i]!=v[i])a++;
     }
     reverse(v.begin(),v.end());
      for(int i=0;i<10;i++)
     {
        if(arr[i]!=v[i])b++;
     }

      if(a&&b)
      {
          cout<<"Unordered";
      }
      else cout<<"Ordered";
     cout<<endl;
    }
}
