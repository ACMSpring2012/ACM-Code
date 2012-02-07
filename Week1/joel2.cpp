#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	ifstream in;
	in.open("input.txt");
	double x[2][3];
	char start[30], end[30];
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	in >> x[0][0]; for(int i = x[0][0]; i > 0; i++){
		for(int j = 0; j < 2; in.get(), in.getline(start,30))
			in >> x[j][0] >> x[j][1] >> x[j++][2];
		for(int j = 0; j < 3; x[0][j] -= x[1][j++]);
		cout << start << " to " << end << ": "
			<< sqrt((x[0][0]*x[0][0])+(y[0][1]*y[0][1])+(z[0][2]*z[0][2])) << endl;
	} 
}