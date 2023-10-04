#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter=0;
    vector<int>v[1000];
    while(1)
    {
        counter++;
       int l=0;
       int r=s.size()-1;
       int flag=0;
       while(l<r)
       {

           if(s[l]!='(')l++;
           if(s[r]!=')')r--;
           if(l<r&&s[l]=='('&&s[r]==')')
           {
               flag++;
               s[l]='-1';
               s[r]='-1';
               v[counter].push_back(l+1);
               v[counter].push_back(r+1);
               l++;
               r--;
           }
       }
       if(flag==0)break;
       string k="";
       for(int i=0;i<s.size();i++)if(s[i]!='-1')k+=s[i];
       s=k;
    }

   cout<<counter-1<<endl;
   for(int i=1;i<counter;i++)
   {
       cout<<v[i].size()<<endl;
       sort(v[i].begin(),v[i].end());
       for(int j=0;j<v[i].size();j++)
       {
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
   }

}
