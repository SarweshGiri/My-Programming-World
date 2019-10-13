#include <iostream>
using namespace std;

int main() {
    system("cls"); //to clear the screen 
    double radius,area,perimeter;
    cout<<"Enter the radius of the circle : \n";
    cin>>radius;
    perimeter=2*3.14159*radius; //perimeter=2*pi*r
    area=3.14159*radius*radius; //area=pi*r*r
    cout<<"Perimeter of the circle will be : "<<perimeter<<endl;
    cout<<"\nArea of the circle will be : "<<area<<endl;
    return 0;
}
