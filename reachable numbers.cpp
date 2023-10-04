/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k=0,counter=0,a=20;

    cin>>n;
    vector<long long>arr;
    arr.push_back(n);

    while(1==1)
    {
          n++;
           counter++;

    if(n%10==0)
       {
           while(n%10==0)
           {
               n/=10;
           }
       }

       // cout<<n<<" ";
         for(int i=0;i<arr.size();i++)
       {
           if(arr[i]==n)
           {
               cout<<counter<<endl;
               return 0;
           }
       }
      arr.push_back(n);
       k++;
    }



}



