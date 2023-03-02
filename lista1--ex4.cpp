#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nascimento, result;
	string name;
	const int hoje = 2023;
	
	cout<< "Iforme seu nome: ";
	cin>>name;
	
	cout<< "Informe seu ano de nascimento: ";
	cin>>nascimento;
	
	result = (hoje - nascimento);
	
	if(result <= 18){
		cout<<name <<" é menor de idade";
	}else if (result >=18 && result <=65){
		cout<<name << " é adulto";
	}else if (result >65){
		cout<<name << " é idoso";
	}
	
	
}
