#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Informe um n�mero inteiro: ";
	cin >> num;
	
	if (num<0){
		cout << "� um n�mero negativo";
	}else if (num==0){
		cout << "� zero";
	}else if (num>0){
		cout << "� um n�mero positivo";
	}
	
}
