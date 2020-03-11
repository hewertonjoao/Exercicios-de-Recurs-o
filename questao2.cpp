#include <iostream>
using namespace std;

int mdc(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return mdc(b, a % b);
    }
}
int mmc(int a, int b){
    int div;
    if(b == 0){
        return a;
    }
    else{
        div = (a*b)/(mdc(a,b));
        return (div);
    }
}

int main(){
    int a,b,result;
    cout << "DIGITE O MAIOR E O MENOR NUMERO :";
    cin >> a >> b;
    result = mdc(a,b);
    cout << "O MDC DE " << a << " e " << b << " eh: ";
    cout << result << endl;
    cout << "O MMC DE " << a << " e " << b << " eh: ";
    result = mmc(a,b);
    cout << result;

}