#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, operacao;
	
	cout<< "Informe seu primeiro n�mero inteiro";
	cin>> n1;
	
	cout<< "Informe seu segundo n�mero inteiro";
	cin>>n2;
	
	cout<< "Informe a opera��o\n";
	cout<< "1- Adi��o\n";
	cout<< "2- Subitra��o\n";
	cout<< "3- Divis�o\n";
	cout<< "4- multiplica��o\n";
	cout<< "R: ";
	cin>>operacao;
	
	if(operacao == 1){
		cout<<"O resultado �: " << n1 + n2;
	}else if(operacao == 2){
		cout<<"O resultado �: " << n1 - n2;
	}else if(operacao == 3){
		cout<<"O resultado �: " << n1/n2;
	}else if(operacao == 4){
		cout<<"O resultado �: " << n1*n2;
	}
		
		
}
