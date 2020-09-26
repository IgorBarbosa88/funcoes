#include <iostream>
#include <iomanip>

using namespace std;

int N;
int n100, n50, n20, n10, n5, n2, n1;

int entrada(){
	cin >> N;
	if (N < 0)
		{
			return 0;
		
		}
	else
		{
		if (N > 1000000)
			{
				
				return 0;
			}
		
		}
}

int processamento(){
	n100 = N / 100;
	
	n50 = (N - (n100*100)) / 50;
	
	n20 = (N - (n100*100)-(n50*50)) / 20;
	
	n10 = (N - (n100*100)-(n50*50)-(n20*20)) / 10;
	
	n5 = (N - (n100*100)-(n50*50)-(n20*20)-(n10*10)) / 5;
	
	n2 = (N - (n100*100)-(n50*50)-(n20*20)-(n10*10)-(n5*5)) / 2;
	
	n1 = (N - (n100*100)-(n50*50)-(n20*20)-(n10*10)-(n5*5)-(n2*2)) / 1;	
}

int saida(){
	cout << fixed << setprecision(0);
	cout << N << endl;
	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;
}

int main (){
	entrada();
	processamento();
	saida();
	
return 0;
}
