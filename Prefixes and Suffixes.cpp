#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   string arr[2*n+5];
   string frr[2*n+5];
   for(int i=0;i<2*n-2;i++)
   {
       cin>>arr[i];
       frr[i]=arr[i];
   }
   sort(frr,frr+(2*n-2));
   string krr;

   for(int i=0;i<2*n-2;i++)
   {
       string s = frr[i];
       for(int j=i+1;j<2*n-2;j++)
       {
           string p =frr[j];
           int flag=0;
           for(int c=0;c<p.size();c++)
           {
               if(c+s.size()>=p.size())
               {
                 // flag=0;
                  break;
               }
               for(int l=0;l<s.size();l++)
               {
                   if(c+l>=p.size())break;
                   if(p[c+l]==s[l])flag++;
               }
                 if(flag==s.size())
           {
               frr[i]=" ";
               break;
           }
           }

          // cout<<frr[i]<<" "<<flag<<endl;
       }
   }

   for(int i=0;i<2*n-1;i++)
   {
       if(frr[i]!="")
       {
           int he=0;
           for(int j=i+1;j<2*n-1;j++)
           {
               if(he>0)break;
               if(frr[j]!="")
               {
                   string a=frr[i];
                   string b=frr[j];
                   int index=0;

                   for(int c=0;c<b.size();c++)
                   {
                       index=0;
                       int k=c;
                       int flag=0;
                       if(b[k]==a[index])
                       {
                           while(k<b.size()&&index<a.size())
                           {
                               if(b[k]==a[index])k++,index++;
                               else {flag++;
                               break;}
                           }
                           if(flag==0)
                           {
                               for(int p=index-1;p<a.size();p++)
                               {
                                   frr[j]+=a[p];
                               }
                               frr[i]="";
                               he++;
                               break;
                           }
                       }
                   }
               }
           }
       }
   }

  for(int i=0;i<2*n-1;i++)if(frr[i]!="")krr+=frr[i];

  for(int i=0;i<2*n-1;i++)if(frr[i]!="")cout<<frr[i]<<endl;


  for(int i=0;i<2*n-2;i++)
  {
      string ik=arr[i];
      for(int j=0;j<krr.size();j++)
      {
          if(ik[0]==krr[j])
          {
             int index = 0;
             int p = j;
             while(ik[index]==krr[p])
             {
                 index++;
                 p++;
                 if(p>=krr.size())break;
                 if(index>=ik.size())break;
             }
             if(index==ik.size())
             {
                 if(n/2>index)cout<<"P";
                 else cout<<"S";

                 break;
             }
          }
      }
  }
}
