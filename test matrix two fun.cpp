#include <bits/stdc++.h>

#define pii              pair <int,int>
#define pll              pair <long long,long long>
#define sc               scanf
#define pf               printf
#define Pi               2*acos(0.0)
#define ms(a,b)          memset(a, b, sizeof(a))
#define pb(a)            push_back(a)
#define MP               make_pair
#define db               double
#define ll               long long
#define EPS              10E-10
#define ff               first
#define ss               second
#define sqr(x)           (x)*(x)
#define D(x)             cout<<#x " = "<<(x)<<endl
#define VI               vector <int>
#define DBG              pf("Hi\n")
//#define MOD              1000000007
#define CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define SZ(a)            (int)a.size()
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define stlloop(v)       for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define loop(i,n)        for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define REP(i,a,b)       for(int i=a;i<b;i++)
#define RREP(i,a,b)      for(int i=a;i>=b;i--)
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d:\n",z)
#define CASE_PRINT       cout<<"Case "<<z<<": "
#define all(a)           a.begin(),a.end()
#define intlim           2147483648
#define infinity         (1<<28)
#define ull              unsigned long long
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))

using namespace std;


/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

/*----------------------Matrix-----------------------*/

// int MOD=
 ll MOD;

struct matrix
{
    ll mat[7][7];
    int row,col;

    matrix()
    {
        memset(mat,0,sizeof mat);
    }
    matrix(int a, int b)
    {
        row=a,col=b;
        memset(mat,0,sizeof mat);
    }

    matrix operator*(const matrix &p) const
    {
        assert(col == p.row);
        matrix temp;
        temp.row = row;
        temp.col = p.col;
        for (int i = 0; i < temp.row; i++)
        {
            for (int j = 0; j < temp.col; j++)
            {
                ll sum = 0;
                for (int k = 0; k <col;  k++)
                {
                    sum += ((mat[i][k]%MOD) * (p.mat[k][j]%MOD))%MOD;
                    sum%=MOD;
                }
                temp.mat[i][j] = sum;
            }
        }
        return temp;
    }
    matrix operator+ (const matrix &p) const
    {
        assert(row==p.row && col==p.col);
        matrix temp;
        temp.row=row;
        temp.col=col;
        for(int i=0;i<temp.row;i++)
        {
            for(int j=0;j<temp.col;j++)
                temp.mat[i][j]=((mat[i][j]%MOD)+(p.mat[i][j]%MOD))%MOD;;
        }
        return temp;
    }

    matrix identity()
    {
        matrix temp;
        temp.row=row;
        temp.col=col;
        for(int i=0;i<row;i++)
            temp.mat[i][i]=1;
        return temp;
    }

    matrix pow(ll pow)
    {
        matrix temp=(*this);
        matrix ret=(*this).identity();
        while(pow)
        {
            if(pow % 2==1)
                ret=ret*temp;
            temp=temp*temp;
            pow/=2;
        }
        return ret;
    }

    void show()
    {
        printf("-----------------------------\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
                printf("%lld ",mat[i][j]);
            printf("\n");
        }
        printf("-----------------------------\n");
    }

};

/*--------------------------Matrix End---------------------*/

int main()
{

    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int t;
    sf(t);
    TEST_CASE(t)
    {
        int a1,b1,c1,a2,b2,c2,f0,f1,f2,g0,g1,g2;
        sfff(a1,b1,c1);
        sfff(a2,b2,c2);
        sfff(f0,f1,f2);
        sfff(g0,g1,g2);
        sfl(MOD);

        matrix base(6,6);
        base.mat[0][0]=a1;
        base.mat[0][1]=b1;
        base.mat[0][5]=c1;
        base.mat[1][0]=1;
        base.mat[2][1]=1;
        base.mat[3][2]=c2;
        base.mat[3][3]=a2;
        base.mat[3][4]=b2;
        base.mat[4][3]=1;
        base.mat[5][4]=1;

        matrix temp(6,1);
        temp.mat[0][0]=f2%MOD;
        temp.mat[1][0]=f1%MOD;
        temp.mat[2][0]=f0%MOD;
        temp.mat[3][0]=g2%MOD;
        temp.mat[4][0]=g1%MOD;
        temp.mat[5][0]=g0%MOD;

        int q;
        sf(q);
        PRINT_CASE;
        while(q--)
        {
            int n;
            sf(n);
            ll ans1,ans2;
            if(n<=2)
            {
                ans1=temp.mat[2-n][0];
                ans2=temp.mat[5-n][0];
            }
            else
            {
                matrix power=base.pow(n-2);
                power = power*temp;
                ans1=power.mat[0][0];
                ans2=power.mat[3][0];
            }
            printf("%lld %lld\n",ans1,ans2);
        }


    }

    return 0;
}
