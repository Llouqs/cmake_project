#include "inout.h"

void read(vector<int>& vec){
	int a;
	cout << "Vector size: " << endl;
	cin >> a;
	cout << "Vvedite " << a << " chisel: " << endl;
	int b;
	for (int i = 0; i < a; i++) {
		cin >> b;
		vec.push_back(b);
	}
}
