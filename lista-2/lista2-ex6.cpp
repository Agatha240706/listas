#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int primo = 0, seg = 1, prox, num;
	
	cout<< "Digite um número inteiro: ";
	cin>>num;
	
	cout<< "Sequencia de Fibonacci até o " << num << " O termo: " << endl;
	
	for (int x = 0; x < num; x++){
        if (x <= 1){
            prox = x;
        } else{
            prox = primo + seg;
            primo = seg;
            seg = prox;
        }
        cout << prox << " ";
    }
}
