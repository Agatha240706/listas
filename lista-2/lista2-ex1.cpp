#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    cout << "Os divisores de " << num << " s�o: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
        cout << i << " ";
    }
  }

  return 0;
}
