/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int n;
  int arr[5];


int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 cin>>n;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
       if (a == 0) {
                        arr[0] = 1;
                        continue;
                }
                if (a == 100) {
                        arr[1] = 1;
                        continue;
                }
                if (a % 10 == 0) {
                        arr[2] = a;
                        continue;
                }
                if (a < 10) {
                        arr[3] = a;
                        continue;
                }
                arr[4] = a;
  }

  vector<int>frr;

 if(arr[0]) frr.push_back(0);
 if(arr[1]) frr.push_back(100);
 if(arr[2])  frr.push_back(arr[2]);
  if(arr[3])  frr.push_back(arr[3]);

  if(!arr[2]&&!arr[3]&&arr[4])frr.push_back(arr[4]);

  cout<<frr.size()<<endl;

  for(int i=0;i<frr.size();i++)
  {
      cout<<frr[i]<<" ";
  }

}



