#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        char c;
        cin>>c;
        if(c=='#')break;
        vector<string>v[5];

       map<char,int>mp;

       mp['C']=1;
       mp['D']=2;
       mp['S']=3;
       mp['H']=4;
       mp['2']=2;
       mp['3']=3;
       mp['4']=4;mp['5']=5;mp['6']=6;mp['7']=7;mp['8']=8;mp['9']=9;
       mp['T']=10;mp['J']=11;mp['Q']=12;mp['K']=13;mp['A']=14;
           int idx=0;
           if(c=='N')idx=3; if(c=='E')idx=0; if(c=='W')idx=2; if(c=='S')idx=1;

           for(int t=0;t<2;t++)
           {
               string str;
               cin>>str;
               for(int i=0;i<str.size();i+=2)
               {
                   string k;
                   k+=str[i];
                   k+=str[i+1];
                   v[idx].push_back(k);
                   idx++;
                   idx=idx%4;
               }
           }
           for(int i=0;i<4;i++)
           {
             for(int j=0;j<v[i].size();j++)
             {
                 for(int k=0;k<v[i].size();k++)
                 {
                     string a,b;
                     a=v[i][j];
                     b=v[i][k];
                     if(mp[a[0]]<mp[b[0]])
                     {
                         swap(v[i][j],v[i][k]);
                     }
                     else if(mp[a[0]]==mp[b[0]]&&mp[a[1]]<mp[b[1]])
                     {
                          swap(v[i][j],v[i][k]);
                     }
                 }
             }
           }
           for(int i=0;i<4;i++)
           {
               if(i==0)cout<<"S:";
                else if(i==1)cout<<"W:";
               else if(i==2)cout<<"N:";
                else if(i==3)cout<<"E:";
               for(int j=0;j<v[i].size();j++)
               {
                   cout<<" "<<v[i][j];
               }
               cout<<endl;
           }
    }
}
