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

 matrix mat;
 mat.row=3;
 mat.col=3;
 for(int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
     {
         mat.v[i][j]=0;
     }
 }

 mat.v[0][0]=1;
 mat.v[0][1]=1;
 mat.v[0][2]=2;
 mat.v[1][0]=1;
 mat.v[2][1]=1;

     for(int p=1;p<=q;p++)
     {
       long long n;
       scanf("%lld",&n);
       mod=10007;
       if(n==1)printf("Case %d: 1\n",p);
       else if(n==2)printf("Case %d: 2\n",p);
       else if(n==3)printf("Case %d: 5\n",p);
       else
       {
           matrix frr= power(mat,n-2);
           int ans=((5*frr.v[0][0])%mod+(2*frr.v[0][1])%mod+frr.v[0][2])%mod;
           printf("Case %d: %d\n",p,ans);
       }
     }
}


