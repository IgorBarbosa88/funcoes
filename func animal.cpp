#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

using namespace std;

char a[20], b[20], c[20];
string r;

int entrada(){
	cin >> a;
	cin >> b;
	cin >> c;

}

int processamento(){
	if (strcmp(a, "vertebrado")==0){
		
			if (strcmp(b, "ave")==0){
				
				if (strcmp(c, "carnivoro")==0){
					
					r = "aguia";
					
				}
				else if (strcmp(c, "onivoro")==0){
				
					r = "pomba";
					
				}
				
			}
			else if (strcmp(b, "mamifero")==0){
				
				if (strcmp(c, "onivoro")==0){
					
					r = "homem";
					
				}
				else if (strcmp(c, "herbivoro")==0){
				
					r = "vaca";
					
				}
			}
		}
	else if (strcmp(a, "invertebrado")==0){
		
			if (strcmp(b, "inseto")==0){
				
				if (strcmp(c, "hematofago")==0){
				
					r = "pulga";
					
				}
				else if (strcmp(c, "herbivoro")==0){
					
					r = "lagarta";
					
				}
			}
			else if (strcmp(b, "anelideo")==0){
				
				if (strcmp(c, "hematofago")==0){
				
					r = "sanguessuga";
					
				}
				else if (strcmp(c, "onivoro")==0){
				
					r = "minhoca";
					
				}
			}
		}	
}

int saida(){
	cout << r << endl;
}

int main(){
	entrada();
	processamento();
	saida();	
		
return 0;
}
