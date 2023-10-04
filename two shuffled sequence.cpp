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

    int n,a=0,b=0,m,p;
    cin>>n;

    int arr[n+5];
    int frr[n+5];
    int krr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>krr[i];
    }
    sort(krr,krr+n);

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            arr[a]=krr[i];
            p=arr[i];
            a++;
        }
        else if(p==krr[i])
        {
            frr[b]=krr[i];
            b++;
          //  p=m;
        }
        else
        {
          arr[a]=krr[i];
          a++;
          p=krr[i];
        }
    }

  // for(int i=0;i<a;i++)cout<<arr[i]<<" ";
  //  cout<<endl;
  //  for(int i=0;i<b;i++)cout<<frr[i]<<" ";

  int counter=0;

   sort(frr,frr+b);
      reverse(frr,frr+b);
       sort(arr,arr+a);

  //  for(int i=0;i<a;i++)cout<<arr[i]<<" ";
  //cout<<endl;
 //  for(int i=0;i<b;i++)cout<<frr[i]<<" ";


//*
  for(int i=1;i<a;i++)
  {
      if(arr[i]<=arr[i-1])
      {
          counter++;
          //cout<<endl<<arr[i]<<endl;
          break;
      }
  }
 // cout<<counter<<endl;
  for(int i=1;i<b;i++)
  {
      if(frr[i]>=frr[i-1])
      {
          counter++;
          break;
      }
  }

  //cout<<counter<<endl;
  if(counter>0)
  {
      cout<<"NO"<<endl;
  }
  else
  {
      cout<<"YES"<<endl;

      cout<<a<<endl;

      for(int i=0;i<a;i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;

      cout<<b<<endl;
       for(int i=0;i<b;i++)
      {
          cout<<frr[i]<<" ";
      }
  }//*/

}



