#include<bits/stdc++.h>
using namespace std;

bool match(string a,string b)
{
    int arr[30],frr[30];
    for(int i=0;i<30;i++)arr[i]=0,frr[i]=0;

    for(int i=0;i<a.size();i++)
    {
        int c=a[i]-'a';
        arr[c]++;
    }
    for(int i=0;i<b.size();i++)
    {
        int c=b[i]-'a';
        frr[c]++;
    }

    for(int i=0;i<30;i++)
    {
        if(arr[i]!=frr[i])return false;
    }
    return true;
}

int main()
{
  vector<string>arr;
  vector<string>frr;
  while(1)
  {
      string s;
      cin>>s;
      if(s=="XXXXXX")break;
      arr.push_back(s);
  }
  while(1)
  {
        string s;
      cin>>s;
      if(s=="XXXXXX")break;
      frr.push_back(s);
  }

  for(int i=0;i<frr.size();i++)
  {
      bool tr=true;
      vector<string>f;
      for(int j=0;j<arr.size();j++)
      {
          if(match(arr[j],frr[i]))f.push_back(arr[j]);
      }
      if(f.size()==0)cout<<"NOT A VALID WORD"<<endl;
      else
      {
          sort(f.begin(),f.end());
          for(int i=0;i<f.size();i++)cout<<f[i]<<"\n";
      }
      cout<<"******"<<endl;
  }


}
