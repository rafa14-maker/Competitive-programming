/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int frr[12];

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      string arr[]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
      string a,b,c;
      cin>>a>>b>>c;
     // int frr[12];
     // cout<<frr[0]<<endl;
   for(int i=0;i<12;i++)
   {
       if(a==arr[i]||b==arr[i]||c==arr[i])
       {
           frr[i]=1;
       }
   }
   for(int i=0;i<12;i++){
       if(frr[i])
       {
          if(frr[(i+4)%12]&&frr[(i+7)%12]){
				cout<<"major";
				return 0;}
			if(frr[(i+3)%12]&&frr[(i+7)%12]){
				cout<<"minor";
				return 0;
       }
   } }


   cout<<"strange"<<endl;

}



