#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, operacao;
	
	cout<< "Informe seu primeiro número inteiro";
	cin>> n1;
	
	cout<< "Informe seu segundo número inteiro";
	cin>>n2;
	
	cout<< "Informe a operação\n";
	cout<< "1- Adição\n";
	cout<< "2- Subitração\n";
	cout<< "3- Divisão\n";
	cout<< "4- multiplicação\n";
	cout<< "R: ";
	cin>>operacao;
	
	if(operacao == 1){
		cout<<"O resultado é: " << n1 + n2;
	}else if(operacao == 2){
		cout<<"O resultado é: " << n1 - n2;
	}else if(operacao == 3){
		cout<<"O resultado é: " << n1/n2;
	}else if(operacao == 4){
		cout<<"O resultado é: " << n1*n2;
	}
		
		
}
