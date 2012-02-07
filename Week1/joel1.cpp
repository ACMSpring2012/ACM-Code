#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	ifstream in;
	in.open("input.txt");
	int n;
	double x,y,z,X,Y,Z;
	char start[30];
	char end[30];
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	in >> n;
	for(int i = 0; i < n; i++){
		in.get();
		in.getline(start,30);
		in >> x >> y >> z;
		in.get();
		in.getline(end,30);
		in >> X >> Y >> Z;
		x -= X;
		y -= Y;
		z -= Z;
		cout << start << " to " << end << sqrt((x*x)+(y*y)+(z*z)) << endl;
	}
}