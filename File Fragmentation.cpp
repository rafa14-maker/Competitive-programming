#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int t;
     istringstream ss(s);
     ss>>t;
     getline(cin,s);
     while(t--)
     {
         vector<string>frame;
         while(getline(cin,s)&&s!="")
         {
             ss.clear();
             ss.str(s);
             string fr;
             ss>>fr;
             frame.push_back(fr);
         }

         map<string,int>memo;
         for(int i=0;i<frame.size();i++)
         {
             for(int j=i+1;j<frame.size();j++)
             {
                 memo[frame[i]+frame[j]]++;
                 memo[frame[j]+frame[i]]++;
             }
         }
         map<string,int>::iterator itr(memo.begin());
         map<string,int>::iterator file(memo.begin());

         for(;itr!=memo.end();itr++)
         {
             if(itr->second>file->second)
             {
                 file=itr;
             }
         }
         cout<<file->first<<endl;
         if(t)cout<<endl;
     }
}
