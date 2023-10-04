

    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t, cs = 0;
        long long S, tm, ll, zz, x, y, s, p, i;
        scanf("%d", &t);
        while(t--){
            scanf("%lld", &S);
            tm = 1;
            s = ceil(sqrt(S));
            i = s;
            p = s-1; p *= p; p += 1;
            s *= s;
            if(s%2){
                ll = abs(S-s);
                zz = abs(S-p);
                if(ll <= zz)x = ll+1, y = i;
                else x = i, y = zz+1;
            }
            else{
                ll = abs(S-s);
                zz = abs(S-p);
                if(ll <= zz)y = ll+1, x = i;
                else y = i, x = zz+1;
            }
            printf("Case %d: %lld %lld\n", ++cs, x, y);
        }
        return 0;
    }

