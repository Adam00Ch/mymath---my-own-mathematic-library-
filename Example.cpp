#include <iostream>
#include "mathematics.h"

using namespace std;

int main()
{
long long int result;

result=power(3,4); // 3 to power 4

cout << result;


result=factorial(6); // factorial of 6

cout << endl << result << endl;


int n; // the number of the result from the fibonacci sequence

cout << "enter n: ";

cin >> n;

cout << fibonacci(n) << endl;


double x1,x2,y1,y2;   // the coordinates of the sector

cout << "enter coordinates: ";

cin >> x1 >> y1 >> x2 >> y2;

cout << sector_length(x1,y1,x2,y2) << endl;


char type;  // surface(S) or volume(V)
double R;   // Radius

cout << "S(surface) or V(volume)? : ";

cin >> type;

cout << "Enter R: ";

cin >> R;

cout << sphere(type,R) << endl;


float pi=about_pi(); // about_pi returns 3,141

cout << endl << pi << endl;


}
