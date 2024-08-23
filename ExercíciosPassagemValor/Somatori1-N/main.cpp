#include <iostream>

using namespace std;

int somatorioRecursivo(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + somatorioRecursivo(n - 1);
}
int main() {
    int n;
    cout << "Digite o valor de N: ";
    cin >> n;
    if (n > 0) {
        cout << "Somatorio recursivo de 1 a " << n << " e: " << somatorioRecursivo(n) << endl;
    } else {
        cout << "Erro: O valor deve ser maior que zero." << endl;
    }
    return 0;
}
