 #include <iostream>

using namespace std;

int main(){
    
	int num;
    
	cout << "Digite um numero inteiro: ";
    cin >> num;
    
	cout << "Os multiplos de " << num << " menores que 100 sao:" << endl;
    
	for(int i = 1; i <= 100; i++){
        if(i % num == 0){
            cout << i << " ";
        }
    }
    return 0;
}

