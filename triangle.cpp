#include<bits/stdc++.h>
using namespace std;

int PD(int x1,int y1,int x2,int y2,int x3,int y3){
	int a1,b1,a2,b2,a3,b3,a4,b4,a5,b5,a6,b6;
	a1=x1-x2,b1=y1-y2;
	a2=x1-x3,b2=y1-y3;
	a3=x2-x1,b3=y2-y1;
	a4=x2-x3,b4=y2-y3;
	a5=x3-x1,b5=y3-y1;
	a6=x3-x2,b6=y3-y2;
	if(a1*b4==b1*a4)return 0;
	if(a1*a2+b1*b2==0||a3*a4+b3*b4==0||a5*a6+b5*b6==0)
		return 1;
	return 0;
}

int main(){
	int x,x2,y,y2,x3,y3;
	scanf("%d%d%d%d%d%d",&x,&y,&x2,&y2,&x3,&y3);
	if(PD(x,y,x2,y2,x3,y3))printf("RIGHT\n");
		else if(PD(x+1,y,x2,y2,x3,y3)||
		PD(x,y+1,x2,y2,x3,y3)||
		PD(x,y,x2+1,y2,x3,y3)||
		PD(x,y,x2,y2+1,x3,y3)||
		PD(x,y,x2,y2,x3+1,y3)||
		PD(x,y,x2,y2,x3,y3+1)||
        PD(x-1,y,x2,y2,x3,y3)||
		PD(x,y-1,x2,y2,x3,y3)||
		PD(x,y,x2-1,y2,x3,y3)||
		PD(x,y,x2,y2-1,x3,y3)||
		PD(x,y,x2,y2,x3-1,y3)||
		PD(x,y,x2,y2,x3,y3-1))
			printf("ALMOST\n");
		else
			printf("NEITHER\n");
	return 0;
}
