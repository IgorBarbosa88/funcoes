#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

double R, V;

double entrada(){
	cin >> R;
	return R;
}

double processamento(){
	V = ((4.0/3) * pi * (R*R*R));
	return V;
}

double saida(){
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << V << endl;
	return V;
	
}

int main(){
	entrada();
	processamento();
	saida();
	
return 0;
}
