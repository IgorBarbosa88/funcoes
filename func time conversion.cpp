#include <iostream>

using namespace std;

int N, h, m, s;

int entrada(){
	cin >> N;	
}

int processamento(){
	h = N / 3600;
	m = (N - (h*3600)) / 60;
	s = N - (h*3600)-(m*60);
}

int saida(){
cout << h << ": " << m << ": " << s << endl;	
}

int main (){
	entrada();
	processamento();
	saida();	
	
return 0;	
}
