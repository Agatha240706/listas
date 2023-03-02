#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    cout << "Tabuada do " << num << ":" << endl;
    for(int i = 1; i <= 100; i++){
        cout << num << " x " << i << " = " << num*i << endl;
    }
    return 0;
}

