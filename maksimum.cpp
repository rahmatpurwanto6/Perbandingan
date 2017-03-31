#include <iostream>
using namespace std;

int a, b;
int max (int a, int b)
{
	if (a > b){
		return a;
	}
	else {
	return b;
	}
}
int main () {
	cout <<"Hasilnya adalah :" << max ( 10, 7);
	return 0;
	}	