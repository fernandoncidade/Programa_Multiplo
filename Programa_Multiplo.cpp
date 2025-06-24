//mutiplos-numeros//

#include <iostream>
using namespace std;

int main(){
    int N, M, soma1, cont, soma2, contador1, contador2;
    soma1 = 0;
    soma2 = 0;
    cont = 1;
    contador1 = 0;
    contador2 = 0;
    cout << "Entre com o valor final do intervalo: " << endl;
    cin >> N;
    if (N <= 0){
        cout << "Valor invalido" << endl;
        return 0;
    }
    cout << "Entre com o valor do divisor: " << endl;
    cin >> M;
    if (M <= 0){
        cout << "Valor invalido" << endl;
        return 0;
    }
    while ( cont <= N){
        if (cont % M == 0 && cont % 2 == 0){
            contador1 = contador1 + 1;
            soma1 = soma1 + cont;
        }
        else if (cont % M == 0 && cont % 2 != 0){
            contador2 = contador2 + 1;
            soma2 = soma2 + cont;
        }
        cont = cont + 1;
    }
    cout << "Pares positivos e mutiplos de " << M << " menores ou iguais a " << N << endl;
    cout << "quantidade=" << contador1;
    cout << " soma=" << soma1 << endl;
    cout << "Impares positivos e mutiplos de " << M << " menores ou iguais a " << N << endl;
    cout << "quantidade=" << contador2;
    cout << " soma=" << soma2 << endl;
    return 0;
}
