#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, soma = 0;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    while (num != 0) {
        soma += num % 10;
        num /= 10;
  }

    cout << "A soma dos d�gitos � " << soma << endl;

    return 0;
}
