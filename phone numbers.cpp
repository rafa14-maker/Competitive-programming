/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
   //  freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,i=0,j=0;
    cin>>t;
    string arr[100];
    int frr[1000];

    while(t--)
    {
        int texi=0,pizza=0,girl=0;
        int n;
        cin>>n>>arr[i];
        i++;
        string ch;
        for(int p=0;p<n;p++)
        {
            cin>>ch;
            int counter=0;
            for(int i=0;i<ch.size()-1;i++)
            {
                if(ch[i+1]=='-')
                {
                    if(i+2<ch.size()&&ch[i]!=ch[i+2])
                    {
                        counter++;
                        break;
                    }
                }
              else  if(ch[i]!=ch[i+1]&&ch[i]!='-'&&ch[i+1]!='-')
                {
                    counter++;
                    break;
                }
            }
            if(counter==0)texi++;
            else
            {
                counter=0;
                for(int i=0;i<ch.size()-1;i++)
                {
              if(ch[i+1]=='-')
                {
                    if(i+2<ch.size()&&ch[i]<=ch[i+2])
                    {
                        counter++;
                        break;
                    }
                }
                  else if(ch[i]!='-'&&ch[i+1]!='-'&&ch[i]<=ch[i+1])
                    {
                        counter++;
                        break;
                    }
                }
                if(counter==0)pizza++;
                else girl++;
            }
        }

        frr[j]=texi;
        j++;
        frr[j]=pizza;
        j++;
        frr[j]=girl;
        j++;
    }

  /*  for(int p=0;p<i;p++)
    {
        cout<<arr[p]<<" ";
    }
    cout<<endl;

    for(int p=0;p<j;p++)
    {
        cout<<frr[p]<<" ";
    }
    cout<<endl;*/

    cout<<"If you want to call a taxi, you should call:";
    int k=0;
    for(int i=0;i<j;i+=3)
    {
        k=max(frr[i],k);
    }
    int krr[100]={0},u=0;
    for(int i=0;i<j;i+=3)
    {
        if(frr[i]==k)
        {
            krr[u]=i;
            u++;
        }
    }
    for(int i=0;i<u-1;i++)
    {
      cout<<" "<<arr[krr[i]/3]<<",";
    }
    cout<<" "<<arr[krr[u-1]/3]<<".";
    cout<<endl;
    cout<<"If you want to order a pizza, you should call:";
    k=0;
    for(int i=1;i<j;i+=3)
    {
        k=max(frr[i],k);
    }
     u=0;
    for(int i=1;i<j;i+=3)
    {
        if(frr[i]==k)
        {
            krr[u]=i;
            u++;
        }
    }
    for(int i=0;i<u-1;i++)
    {
      cout<<" "<<arr[krr[i]/3]<<",";
    }
    cout<<" "<<arr[krr[u-1]/3]<<".";

    cout<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call:";
     k=0;
    for(int i=2;i<j;i+=3)
    {
        k=max(frr[i],k);
    }
     u=0;
    for(int i=2;i<j;i+=3)
    {
        if(frr[i]==k)
        {
            krr[u]=i;
            u++;
        }
    }
    for(int i=0;i<u-1;i++)
    {
      cout<<" "<<arr[krr[i]/3]<<",";
    }
    cout<<" "<<arr[krr[u-1]/3]<<".";

    cout<<endl;

}


