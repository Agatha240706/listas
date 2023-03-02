#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Informe um número inteiro: ";
	cin >> num;
	
	if (num<0){
		cout << "É um número negativo";
	}else if (num==0){
		cout << "É zero";
	}else if (num>0){
		cout << "É um número positivo";
	}
	
}
