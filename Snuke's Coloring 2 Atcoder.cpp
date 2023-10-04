#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>x1;
    vector<int>y1;
    int w,h,n;
    cin>>w>>h>>n;
    for(int i=0;i<=w;i++)x1.push_back(i);
     for(int i=0;i<=h;i++)y1.push_back(i);
     while(n--)
     {
         int a,b,c;
         cin>>a>>b>>c;
         if(c==1)
         {
             for(int i=0;i<x1.size();i++)
             {
                 if(x1[i]<a)x1[i]=-9;
             }
         }
         else if(c==2)
         {
             for(int i=0;i<x1.size();i++)
             {
                 if(x1[i]>a)x1[i]=-9;
             }
         }
        else if(c==3)
         {
             for(int i=0;i<y1.size();i++)
             {
                 if(y1[i]<b)y1[i]=-9;
             }
         }
         else if(c==4)
         {
             for(int i=0;i<y1.size();i++)
             {
                 if(y1[i]>b)y1[i]=-9;
             }
         }
     }

     int counter=0,flag=0;
     for(int i=0;i<x1.size();i++)if(x1[i]!=-9)counter++;
      for(int i=0;i<y1.size();i++)if(y1[i]!=-9)flag++;
    //  cout<<counter<<" "<<flag<<endl;
     if(counter==0&&flag==0)cout<<0<<endl;
     else cout<<max(0,(counter-1)*(flag-1))<<endl;
}
