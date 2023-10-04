#include<bits/stdc++.h>
using namespace std;

double sum;

void fk(double c,double f,double p,double v,double step,double mx)
{
   // if(step==4)return ;
  //  cout<<c<<" "<<f<<" "<<p<<" "<<v<<" ";
   // cout<<mx<<" "<<step<<endl;
   // sum+=mx;
    double idx,cnt;

    double ck=c,cf=f,cp=p,cmx=mx;

   if(c>0)
   {
       if(c>v)
       {
           mx*=c;
           c-=v;
           //mx*=v;
           idx= v;
           cnt=0;
           if(f!=0)cnt++;
           if(p!=0)cnt++;
           if(v!=0)cnt++;
         if(cnt>0)  idx/=cnt;
           if(f!=0)f+=idx;
           if(p!=0)p+=idx;
           if(v!=0)v+=idx;
       }
       else
       {
           idx= c;
            mx*=c;
           c=0;
           cnt=0;
           if(f!=0)cnt++;
           if(p!=0)cnt++;
           if(v!=0)cnt++;
                   if(cnt>0) idx/=cnt;
           if(f!=0)f+=idx;
           if(p!=0)p+=idx;
           if(v!=0)v+=idx;
       }
       fk(c,f,p,v,step+1,mx);
   }

   f=cf;
   c=ck,
   p=cp;
   mx=cmx;

   if(f>0)
   {
        if(f>v)
       {
           mx*=f;
           f-=v;
           // mx*=v;
           idx= v;
           cnt=0;
           if(c!=0)cnt++;
           if(p!=0)cnt++;
           if(v!=0)cnt++;
                   if(cnt>0) idx/=cnt;
           if(c!=0)c+=idx;
           if(p!=0)p+=idx;
           if(v!=0)v+=idx;
       }
       else
       {
           mx*=f;
           idx= f;
          //  mx*=f;
           f=0;
           cnt=0;
           if(c!=0)cnt++;
           if(p!=0)cnt++;
           if(v!=0)cnt++;
                   if(cnt>0) idx/=cnt;
           if(c!=0)c+=idx;
           if(p!=0)p+=idx;
           if(v!=0)v+=idx;
       }
       fk(c,f,p,v,step+1,mx);
   }

   f=cf;
   c=ck,
   p=cp;
   mx=cmx;

   if(p>0)
   {
      sum+=step*mx*p;
      return ;
   }

}

void solve()
{
   sum=0.0;
  double c,f,p,v;
   cin>>c>>f>>p>>v;

   fk(c,f,p,v,1,1);

   cout<<sum<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
   // solve();
}

/*

4
0.2 0.2 0.6 0.2

*/
