#include <iostream>

using namespace std;
int main(){
double radius, volume, surface;
const double pi = 3.14;

cout << "Enter the radius of the sphere:" ;
cin >> radius;

volume = (4.0/3.0)*pi*radius* radius*radius;
surface = 4.0 * pi * radius*radius;

cout.precision(1);
cout << fixed;
cout << "The volume of the sphere is "<< volume << "\n The surface of the surface is: " << surface;
cout << "\nTHis line proves that it works";





}

