#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *A,Rect *B){
	double x1=A->x,x2=A->x+A->w,y1=A->y,y2=A->y-A->h,area;
	if (B->x > x1) x1 = B->x;
	if (B->y < y1) y1 = B->y;
	if (B->x+B->w < x2) x2 = B->x+B->w;
	if (B->y-B->h > y2) y2 = B->y-B->h;
	area = (x2-x1)*(y1-y2);
	if (area > 0) return area;
	return 0;
}

int main() {
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(&R1,&R2);	
	return 0;
}