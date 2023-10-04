#include<bits/stdc++.h>
using namespace std;

int main()
{
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
    int q;
    cin>>q;
    while(q--)
    {
        int r;
        cin>>r;
        string arr[10];
        arr[0]="abc";
        arr[1]="def";
        arr[2]="ghi";
        arr[3]="jkl";
        arr[4]="mno";
        arr[5]="pqrs";
        arr[6]="tuv";
        arr[7]="wxyz";
        int frr[28]={0};
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            frr[s[i]-'a']++;
        }
   int yui=1e8;
       for(int y=0;y<8;y++)
       {
           string k=arr[y],pi=arr[y];

           //cout<<k<<endl;

           for(int i=0;i<k.size();i++)
           {
               for(int j=i+1;j<k.size();j++)
               {
                   if(frr[k[i]-'a']<frr[k[j]-'a'])
                   {
                      // swap(frr[k[i]-'a'],frr[k[j]-'a']);
                        swap(k[i],k[j]);
                   }
               }

          // cout<<k<<endl;
           arr[y]=k;

           int counter=0;
       for(int i=0;i<s.size();i++)
       {
           int flag=0;
           for(int k=0;k<8;k++)
           {
               string p=arr[k];
               if(flag>0)break;
               for(int u=0;u<p.size();u++)
               {
                   if(p[u]==s[i])
                   {
                       flag++;
                       counter+=(u+1);
                       break;
                   }
               }
           }
       }  yui=min(counter,yui);
           arr[y]=pi;
           }
       }

       cout<<yui<<endl;
    }
}

