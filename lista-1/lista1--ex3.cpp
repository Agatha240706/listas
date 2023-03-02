#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	bool primo = true;

    cout << "Digite um n�mero inteiro: ";
    cin >> numero;

    if (numero <= 1) {
        primo = false;
    } else {
        for (int i = 2; i <= numero / 2; ++i) {
            if (numero % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << "O n�mero " << numero << " e primo." << endl;
    } else {
        cout << "O n�mero " << numero << " n�o e primo." << endl;
    }

    return 0;
}
