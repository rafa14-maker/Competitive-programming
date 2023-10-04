#include<bits/stdc++.h>
using namespace std;

map<char,int>frr;

map<char,int>krr;

string arr;

int f()
{
   int l=0;

   while(1)
   {
           if(frr[arr[l]]>=2)
           {
              frr[arr[l]]--;
              l++;
           }

           else break;

       if(l==arr.size())break;
   }


   int r=arr.size()-1;

    while(1)
   {
       if(r==l)break;


           if(frr[arr[r]]>=2)
           {
              frr[arr[r]]--;
              r--;
           }

           else break;

       //if(r<=l)break;
   }
   return r-l+1;

}

int k()
{

   int r=arr.size()-1;

    while(1)
   {
       if(r==0)break;

           if(krr[arr[r]]>=2)
           {
              krr[arr[r]]--;
              r--;
           }

           else break;
       //if(r<=l)break;
   }
    int l=0;

   while(1)
   {
           if(krr[arr[l]]>=2)
           {
              krr[arr[l]]--;
              l++;
           }

           else break;
       if(l==arr.size())break;
   }

  return r-l+1;


}


int main()
{
    int n;
    cin>>n;
   // string arr;
    cin>>arr;
  // int frr[100]={0};
   for(int i=0;i<arr.size();i++)
   {
           frr[arr[i]]++;
           krr[arr[i]]++;
   }

  // for(int i=0;i<55;i++)cout<<frr[i]<<" ";cout<<endl;


  // for(int i=0;i<55;i++)cout<<frr[i]<<" ";cout<<endl;
  // cout<<l<<" "<<r<<endl;
    cout<<min(f(),k())<<endl;
}
