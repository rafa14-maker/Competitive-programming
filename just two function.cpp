#include <bits/stdc++.h>

using namespace std;

struct matrix {
   int v[7][7];
  int row, col;
};
int mod ;

matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (int i = 0; i < r.row; i++) {
    for (int j = 0; j < r.col; j++) {
      int sum = 0;
      for (int k = 0; k < a.col;  k++) {
        sum += ((a.v[i][k]%mod )* (b.v[k][j]%mod))%mod;
        sum%=mod;
      }
      r.v[i][j] = sum%mod;
    }
  }
  return r;
}

matrix power(matrix mat, long long p) {
  assert(p >= 1);
  if (p == 1) return mat;
  if (p % 2 == 1)
    return multiply(mat, power(mat, p - 1));
  matrix ret = power(mat, p / 2);
  ret = multiply(ret, ret);
  return ret;
}

int main() {
 int q;
 cin>>q;


     for(int p=1;p<=q;p++)
     {
          int a1,b1,c1,a2,b2,c2,f0,f1,f2,g0,g1,g2;
         scanf("%d %d %d %d %d %d %d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2,&f0,&f1,&f2,&g0,&g1,&g2);
       cin>>mod;
         int t;
         scanf("%d",&t);
         printf("Case %d:\n",p);

        matrix mat;
         mat.col=6;
         mat.row=6;

         for(int i=0;i<6;i++)
         {
             for(int j=0;j<6;j++)
             {
                 mat.v[i][j]=0;
             }
         }
         mat.v[0][0]=a1;
         mat.v[0][1]=b1;
         mat.v[0][5]=c1;
         mat.v[1][0]=1;
         mat.v[2][1]=1;
         mat.v[3][2]=c2;
         mat.v[3][3]=a2;
         mat.v[3][4]=b2;
         mat.v[4][3]=1;
         mat.v[5][4]=1;

                 matrix fa;
                 fa.col=1;
                 fa.row=6;
                 fa.v[0][0]=f2%mod;
                 fa.v[1][0]=f1%mod;
                 fa.v[2][0]=f0%mod;
                 fa.v[3][0]=g2%mod;
                 fa.v[4][0]=g1%mod;
                 fa.v[5][0]=g0%mod;

         for(int i=1;i<=t;i++)
         {
             long long n;
             scanf("%lld",&n);
             if(n==0)
             {
                 printf("%d %d\n",f0%mod,g0%mod);
             }
            else if(n==1)
             {
                 printf("%d %d\n",f1%mod,g1%mod);
             }
             else if(n==2)
             {
                  printf("%d %d\n",f2%mod,g2%mod);
             }
             else
             {
               matrix  krr = power(mat,n-2);
              matrix ans =   multiply(krr,fa);

              cout<<ans.v[0][0]%mod<<" "<<ans.v[3][0]%mod<<endl;
             }
         }

     }
}


