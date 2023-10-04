#include<bits/stdc++.h>
using namespace std;

const int mod = 10007;


struct matrix
{
    int v[5][5];
    int col,row;
};


matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (int i = 0; i < r.row; i++) {
    for (int j = 0; j < r.col; j++) {
      int sum = 0;
      for (int k = 0; k < a.col;  k++) {
        sum +=( a.v[i][k] * b.v[k][j])%mod;
        sum %= mod;
      }
      r.v[i][j] = sum;
    }
  }
  return r;
}
matrix power(matrix mat,int p)
{
    assert(p>=1);
    if(p==1)return mat;
    if(p%2==1) return multiply(mat,power(mat,p-1));
    matrix res=power(mat,p/2);
    res = multiply(res,res);
    return res;
}

int main()
{
   int q;
   cin>>q;
    for(int t=1;t<=q;t++)
   {
      int n,a,b,c;
      cin>>n>>a>>b>>c;
      matrix mat;
      mat.row=4;
      mat.col=4;
      mat.v[0][0]=a;mat.v[0][1]=0;mat.v[0][2]=b;mat.v[0][3]=1;
      mat.v[1][0]=1;mat.v[1][1]=0;mat.v[1][2]=0;mat.v[1][3]=0;
      mat.v[2][0]=0;mat.v[2][1]=1;mat.v[2][2]=0;mat.v[2][3]=0;
      mat.v[3][0]=0;mat.v[3][1]=0;mat.v[3][2]=0;mat.v[3][3]=1;

      if(n<=5)
      {
          if(n==1||n==2||n==0)printf("Case %d: 0\n",t);
          if(n==3)printf("Case %d: %d\n",t,c);
          if(n==4)printf("Case %d: %d\n",t,a*c+c);
          if(n==5)printf("Case %d: %d\n",t,(a*c+c)*a+c);
      }
      else
      {
         // cout<<k<<" "<<l<<endl;
          mat=power(mat,n-2);
        //  cout<<mat.v[0][0]<<" "<<mat.v[0][2]<<" "<<endl;

         matrix krr;
         krr.row=4;
         krr.col=1;

         krr.v[0][0]=0;
         krr.v[1][0]=0;
         krr.v[2][0]=0;
         krr.v[3][0]=c;

         matrix ans=multiply(mat,krr);
printf("Case %d: %d\n",t,(ans.v[0][0])%mod);

      }
   }
}
