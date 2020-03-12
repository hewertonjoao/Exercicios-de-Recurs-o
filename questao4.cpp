
#include <iostream>
#include <stdio.h>
using namespace std;

int fat(int n){

if ((n==1) || (n==0)){
    return 1;               
 }
    else{
      return fat(n-1)*n;
      }
}
void troca(char vetor[], int i, int j)
{
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

void permuta(char vetor[], int inf, int sup)
{
	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++)
            cout << " " << vetor[i];
            cout << " \n";
	}
	else
	{
		for(int i = inf; i <= sup; i++)
		{
			troca(vetor, inf, i);
			permuta(vetor, inf + 1, sup);
			troca(vetor, inf, i); // backtracking
		}
	}
}

int main(int argc, char *argv[])
{
	char v[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J','K','L','M','N','O','P','R','S','T','U','V','W','Y','Z'};
	int tam_v = sizeof(v) / sizeof(char);
    int n;
    cout << "DIGITE O QUANTAS LETRAS SERAO PERMUTADAS : ";
    cin >>  n;
	permuta(v, 0, n - 1);
    int result = fat(n);
    cout << "O NUMERO DE PERMUTAÇÔES FORAM : " << result;

	return 0;
}