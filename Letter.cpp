#include<bits/stdc++.h>
using namespace std;

int main()
{

string arr,frr;

getline(cin,arr);
getline(cin,frr);
for(int j=0;j<frr.size();j++){
   for(int i=0;i<arr.size();i++)
   {
      if(arr[i]==frr[j])
      {
        arr[i]=' ';
        frr[j]=' ';
        break;
      }
   }
}

for(int i=0;i<frr.size();i++)
{
    if(frr[i]!=' ')
    {
        cout<<"NO"<<endl;
        return 0;
    }
}
cout<<"YES"<<endl;
}
