#include<bits/stdc++.h>
using namespace std;

struct Point{
    double x,y;
};

bool pointDerection(Point p0, Point p1, Point p2){
    double x1 = p1.x - p0.x;
    double x2 = p2.x - p0.x;
    double y1 = p1.y - p0.y;
    double y2 = p2.y - p0.y;
    double d = (x1*y2)-(x2*y1);

    if( d > 0 )
        return true;
    return false;
}

Point p[1005];

int main()
{

    std::ios_base::sync_with_stdio(0);
    int n, i, j, k, cnt=0, sum=0;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> p[i].x >> p[i].y;
    }

    for(int i=0;i<n-2;i++)
    {
        if(pointDerection(p[i], p[i+1], p[i+2]))
            cnt++;
    }

    cout << cnt;

    return 0;
}
