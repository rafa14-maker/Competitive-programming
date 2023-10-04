#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int segment[510][510];
int fin_segment[510][510];


int n;

int min_segment(int idx,int left,int right,int strip)
{
	if (left == right) {
		ini_seg[strip][idx] = rect[strip][low];
	}
	else {
		int mid = (left+ right) / 2;
		min_segment(idx*2,left,mid strip);
		min_segment(idx*2+1,mid+1,right,strip);

	}
}
