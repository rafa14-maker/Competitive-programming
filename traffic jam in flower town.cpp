#include<bits/stdc++.h>
using namespace std;

int main()
{
  string arr,frr;
  cin>>arr>>frr;
  int counter=0;

  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]=='R')
    {

        if(frr[i]=='F'||frr[i]=='R'||frr[i]=='L')
        {
            counter+=1;
        }
          else if(frr.size()>i)
        {
            counter+=2;
        }
        else
        {
            counter+=1;
        }
    }
     if(arr[i]=='L')
    {

        if(frr[i]=='L'||frr[i]=='R')
        {
            counter+=1;
        }
          else if(frr.size()>i)
        {
            counter+=2;
        }
        else
        {
            counter+=1;
        }
    }
     if(arr[i]=='F')
    {

        if(frr[i]=='R'||frr[i]=='F')
        {
            counter+=1;
        }
        else if(i<frr.size())
        {
            counter+=2;
        }
        else
        {
            counter+=1;
        }
    }
  }
  if(arr.size()<frr.size())
  {
  counter+=(frr.size()-arr.size());
  }

    cout<<counter<<endl;
}
