/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   string arr,frr;
   cin>>arr>>frr;

   int counter=0,found=0;

   int krr[27],lrr[27];

   for(int i=0;i<27;i++)
   {
       krr[i]=0;
       lrr[i]=0;
   }

   for(int i=0;i<arr.size();i++)
   {
       krr[arr[i]-97]++;
   }
    for(int i=0;i<frr.size();i++)
   {
       lrr[frr[i]-97]++;
   }

   for(int i=0;i<27;i++)
   {
       if(krr[i]!=lrr[i])
       {
           counter++;
           break;
       }
   }

   if(counter>0)
   {
       for(int i=0;i<arr.size();i++)
       {
           int p=0;
           for(int j=0;j<frr.size();j++)
           {
               if(arr[i]==frr[j])
               {
                   p++;
                   break;
               }
           }
           if(p==0)
           {
               arr[i]='0';
               string grr;
               for(int i=0;i<arr.size();i++)
               {
                   if(arr[i]!='0')grr+=arr[i];
               }
             //  reverse(grr.begin(),grr.end());
               arr=grr;
           }
       }
   }
  cout<<arr<<endl<<frr<<endl;
   for(int i=0;i<arr.size();i++)
   {
       if(arr[i]!=frr[i])
       {
           found++;
           break;
       }
   }

   sort(arr.begin(),arr.end());
   sort(frr.begin(),frr.end());

  cout<<arr<<endl<<frr<<endl;
   if(arr!=frr)
   {
       cout<<"need tree"<<endl;
       return 0;
   }


   if(counter>0&&found>0)
   {
       cout<<"both"<<endl;
       return 0;
   }
   else if(counter>0&&found==0)
   {
       cout<<"automaton"<<endl;
       return 0;
   }
   else if(counter==0&&found>0)
   {
       cout<<"array"<<endl;
       return 0;
   }


}


