#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Os divisores de " << num << " são: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
        cout << i << " ";
    }
  }

  return 0;
}
