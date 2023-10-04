#include<bits/stdc++.h>
using namespace std;

string arr[100];
int co[100],m;

int main()
{
   string frr;
    cin>>frr;
    int  n;
    cin>>n;

    for(int i=0;i<n;i++)
    {

        int k=0,a=0,b=0,c=0;
        string krr,v,s;
        while(1==1)
        {
            cin>>krr;
            if((krr=="wall"||krr=="post")&&c>0)break;
            else if(a==0)
            {
                v=krr;
                a++;
            }
            else if(krr=="posted")b=15;
            else if(krr=="commented")b=10;
            else if(krr=="likes")b=5;
            else if(krr=="on")continue;
            else
            {
                c++;
                string prr;
                for(int i=0;i<krr.size()-2;i++)
                {
                    prr+=krr[i];
                }
                s=prr;
            }
        }
          //  cout<<krr<<endl;

        if(m==0)
        {
            if(v!=frr)
            {
                arr[m]=v;
               if(s==frr)co[m]+=b;
                m++;
            }
            if(s!=frr)
            {
                arr[m]=s;
               if(v==frr)co[m]+=b;
                m++;
            }
        }
        else
        {
            if(v!=frr)
            {
                int flag=0;
                for(int j=0;j<m;j++)
                {
                    if(arr[j]==v)
                    {
                     if(s==frr)co[j]+=b;
                        flag++;
                    }
                }
                if(flag==0)
                {
                    arr[m]=v;
                   if(s==frr)co[m]+=b;
                    m++;
                }
            }

             if(s!=frr)
            {
                int flag=0;
                for(int j=0;j<m;j++)
                {
                    if(arr[j]==s)
                    {
                       if(v==frr)co[j]+=b;
                        flag++;
                    }
                }
                if(flag==0)
                {
                    arr[m]=s;
                   if(v==frr)co[m]+=b;
                    m++;
                }
            }
        }
    }


    for(int i=0;i<m;i++)
    {
      for(int j=0;j<m;j++)
      {
          if(co[i]>co[j])
          {
              swap(arr[i],arr[j]);
              swap(co[i],co[j]);
          }
          if(co[i]==co[j])
          {
              if(arr[i]<arr[j])
              {
                 swap(arr[i],arr[j]);
              swap(co[i],co[j]);
              }
          }
      }
    }

    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<endl;
    }

}
