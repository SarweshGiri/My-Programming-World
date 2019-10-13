#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	system ("cls");
	double distance,x1,y1,x2,y2;
	cout<<"Enter the coordinates of (x y) of point 1 : ";
	cin>>x1>>y1;
	cout<<"Enter the coordinates of (x y) of point 2 : ";
	cin>>x2>>y2;
	distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	cout<<"The distance between ("<<x1<<","<<y1<<")and("<<x2<<","<<y2<<")is :"<<distance<<endl;
	return 0;
	}
