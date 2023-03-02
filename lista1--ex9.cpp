#include <iostream>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
   int n, original, resto, soma = 0;
   cout << "Digite um número inteiro: ";
   cin >> n;

   original = n;

   while (original != 0) {
      resto = original % 10;
      soma += resto * resto * resto;
      original /= 10;
   }

   if (soma == n) {
      cout << "O número " << n << " é um número de Armstrong" << endl;
   } else {
      cout << "O número " << n << " não é um número de Armstrong" << endl;
   }

   return 0;
}

