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

string arr;
cin>>arr;

for(int i=arr.size()-1;i>=0;i--)
{
    if(arr[i]=='0')cout<<"O-|-OOOO"<<endl;
         if(arr[i]=='1')cout<<"O-|O-OOO"<<endl;
          if(arr[i]=='2')cout<<"O-|OO-OO"<<endl;
           if(arr[i]=='3')cout<<"O-|OOO-O"<<endl;
            if(arr[i]=='4')cout<<"O-|OOOO-"<<endl;
             if(arr[i]=='5')cout<<"-O|-OOOO"<<endl;
              if(arr[i]=='6')cout<<"-O|O-OOO"<<endl;
               if(arr[i]=='7')cout<<"-O|OO-OO"<<endl;
                if(arr[i]=='8')cout<<"-O|OOO-O"<<endl;
                 if(arr[i]=='9')cout<<"-O|OOOO-"<<endl;
}

}



