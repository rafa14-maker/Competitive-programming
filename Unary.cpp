/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;
#define m 1000003

int una(char c){
    if(c=='>') return 8;
    else if(c=='<') return 9;
    else if(c=='-') return 11;
    else if(c=='+') return 10;
    else if(c=='.') return 12;
    else if(c==',') return 13;
    else if(c=='[') return 14;
    else if(c==']') return 15;
}

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string arr;

    int frr[105];

    cin>>arr;

   int sum=0;

for(int i=0;i<arr.size();i++)
   {
      sum*=16;
      sum+=una(arr[i]);
      sum=sum%m;
   }

   cout<<sum<<endl;

}


