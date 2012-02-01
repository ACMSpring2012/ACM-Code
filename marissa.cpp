#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;

int main(){

	double numberEntries, x_1, y_1, z_1, x_2, y_2, z_2;
	double distance = 0;
	string name1, name2;

	ifstream in;
	in.open("a.in");
	if(in.fail()){
		cout << "Error!" << endl;
	}

	in >> numberEntries;
	cout.setf(ios::fixed);
	cout.precision(2);

	for(int i = 0; i < numberEntries; i++){
		getline(in, name1);
		getline(in, name1);
		in >> x_1 >> y_1 >> z_1;
		getline(in, name2);
		getline(in, name2);
		in >> x_2 >> y_2 >> z_2;
		distance = sqrt((double)((x_1 - x_2) * (x_1 - x_2)+ (y_1 - y_2) * (y_1 - y_2) + (z_1 - z_2)*(z_1 - z_2)));
		cout << name1 << " to " << name2 << ": " << distance << endl;
	}

	return 0;
}