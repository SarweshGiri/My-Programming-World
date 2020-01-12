#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,s,area;
	cout<<"Enter length of three sides : \n";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<area;
	return 0;
}
