#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    int frr[27],counter=0;
    cin>>arr;
    int i=arr.size()-1;
    memset(frr,0,sizeof(frr));

    for(int j=0;j<arr.size();j++)
    {
        frr[arr[j]-'a']++;
    }

    for(int j=0;j<27;j++)
    {
      if(frr[j]%2!=0)
      {
          counter++;
      }
    }

    if(counter<=1)
    {
        cout<<"First"<<endl;
    }
  else if(i%2==0)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }

    return 0;
}
