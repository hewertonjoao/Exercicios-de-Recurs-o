#include <iostream>
using namespace std;

void decbin( int numero){
    int n;
    if(numero/2 != 0){
        n=numero/2;
        decbin(n);
        cout << numero%2;
    }
    else{
        cout << numero%2;
    }
}
int main(){
    int numero;
    cout << " DIGITE O DECIMAL:";
    cin >> numero;
    decbin(numero);
}

