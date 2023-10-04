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
    int q;
    cin>>q;
    while(q--)
    {
      int n;
      cin>>n;
      vector<string>v;
      for(int i=0;i<n;i++)
      {
          string s;
          cin>>s;
          v.push_back(s);
      }
    //  sort(v.begin(),v.end());
      while(1)
      {
          string s;
          cin>>s;
          if(s=="END")break;
          vector<string>vs;
          for(int i=0;i<v.size();i++)
          {
              if(match(v[i],s))
              {
                  vs.push_back(v[i]);
              }
          }
          //sort(vs.begin(),vs.end());
           cout << "Anagrams for: " << s << endl;
          if(vs.size()==0)
          {
               cout << "No anagrams for: " << s << endl;
          }
          else
          {
             // cout << "Anagrams for: " << s << endl;
              for(int i=0;i<vs.size();i++){
                 printf("  %d) ",i+1);
                    cout << vs[i] << endl;
              }
          }
      }
      if(q)cout<<endl;
    }
}



