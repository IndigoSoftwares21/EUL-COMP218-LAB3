#include <iostream>
#include <cmath>
using namespace std;

// functions are written with minimal abstraction!
double intGetDistance(int x1, int x2, int y1, int y2) {
	int x = pow((x1 - x2), 2);
	int y = pow((y1 - y2), 2);
	return sqrt(x + y);
}

double doubleGetDistance(double x1, double x2, double y1, double y2) {
	double x = pow((x1 - x2), 2);
	double y = pow((y1 - y2), 2);
	return sqrt(x + y);
}



int main()
{

	cout << "The distance between the two points (int) is: " 
		 << intGetDistance(2, 10, -4, 5) << endl;

	cout << "The distance between the two points (double) is: " 
		 << doubleGetDistance(2.5, 10.5, -4.5, 5.5) << endl;

}
