#include <iostream>

using namespace std;

int a, b, c, n1, n2, n3;

int entrada(){
		cin >> a;
	cin >> b;
	cin >> c;
}

int processamento(){
	if (a > b)
	{
		if (a > c)
		{
			n1 = a;
			if (b > c)
			{
				n2 = b;
				n3 = c;
			}
			else if (c > b)
			{
				n2 = c;
				n3 = b;
			}
		}
		else if (c > a)
		{
			n1 = c;
			if (a > b)
			{
				n2 = a;
				n3 = b;
			}
			else if (b > a)
			{
				n2 = b;
				n3 = a;
			}
		}
		
	}
	else if (b > a)
	{
		if (b > c)
		{
			n1 = b;
			if (a > c)
			{
				n2 = a;
				n3 = c;
			}
			else if (c > a)
			{
				n2 = c;
				n3 = a;
			}
		}
		else if (c > b)
		{
			n1 = c;
			if (a > b)
			{
				n2 = a;
				n3 = b;
			}
			else if (b > a)
			{
				n2 = b;
				n3 = a;
			}
		}
	}
}
int saida(){
		cout << n3 << endl;
	cout << n2 << endl;
	cout << n1 << endl << endl;
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}

int main (){
	entrada();
	processamento();
	saida();	
	
return 0;
}
