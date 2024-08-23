#include <iostream>

using namespace std;

int fibonacciRecursivo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}
int main() {
    int n;
    cout << "Digite a posicao da sequencia de Fibonacci: ";
    cin >> n;
    if (n >= 0) {
        cout <<endl << "Fibonacci recursivo na posicao " << n << " e: " << fibonacciRecursivo(n) << endl;
    } else {
        cout << "Erro: O valor deve ser nao-negativo." << endl;
    }
    return 0;
}
