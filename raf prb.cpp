/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
   string s;
   getline(cin,s);
    for(int t=0;t<q;t++){
  string s;
 getline(cin,s);
       // string s;

          //  cout<<s<<endl;
      // cin>>s;
      vector<string>g;
        int counter=0,m=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {counter++;m=max(counter,m);}
            else
            {
                counter=0;
            }
        }
        m=max(counter,m);
      //  cout<<s<<endl;
      // cout<<m<<endl;
      int flag=0;
        string arr;
        counter=0;
         for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
            arr+=s[i];
            }
            else
            {
                if(arr.size()==m)g.push_back(arr);
                arr={""};
            }
        }
        if(arr.size()==m)g.push_back(arr);

        for(int i=0;i<g.size()-1;i++)
        {
         cout<<g[i]<<" ";
      //   else cout<<" "<<g[i];
        }
        int ty=g.size()-1;
        cout<<" "<<g[ty]<<endl;
 //cout<<00;

    }

}


