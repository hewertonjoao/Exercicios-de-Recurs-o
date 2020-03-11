#include <iostream>
using namespace std;

int digitSum(int n){    
    if (n == 0){
       return n;
    }
    
    else{
        
        return (n % 10 + digitSum(n / 10));  
    }
    
    
    return 0;
}

int main() {
    int d;
    cout << "DIGITE O NUMERO\n";
    cin >> d;
    
    int x = digitSum(d);
    cout << "A soma e " << x << endl;
    
    
    
    return 0;
}