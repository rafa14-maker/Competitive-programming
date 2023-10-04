#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,k,i,j,p,m,l,z=0,f,y;

  char c;

  scanf("%d",&a);

  while(a--){
      scanf("%d %d",&i,&y);

      int arr[i];

      for(f=0;f<i;f++)
      {
          scanf("%d",&arr[f]);
      }

      do
      {
          y--;
         cin>>c;
          if(c=='S')
          {
              scanf("%d",&k);

              for(f=0;f<i;f++)
              {
                  arr[f]+=k;
              }
          }

          else if(c=='M')
          {
              scanf("%d",&k);
              for(f=0;f<i;f++)
              {
                  arr[f]*=k;
              }
          }
          else if(c=='D')
          {
              scanf("%d",&k);
              for(f=0;f<i;f++)
              {
                  arr[f]/=k;
              }
          }

          else if(c=='R')
          {
              int frr[i];
              m=0;

              for(f=i-1;f>=0;f--)
              {
                  frr[m]=arr[f];
                  m++;
              }
              for(f=0;f<i;f++)
              {
                  arr[f]=frr[f];
              }
          }
          else if(c=='P')
          {
              scanf("%d %d",&k,&l);
              int tmp;
              tmp=arr[k];
              arr[k]=arr[l];
              arr[l]=tmp;
          }



      }while(y>0);



      z++;
      cout<<"Case "<<z<<":"<<endl;
      for(f=0;f<i-1;f++)
      {
        cout<<arr[f]<<" ";
      }
      cout<<arr[f]<<endl;

}

return 0;
}

