#include <iostream>

using namespace std;

int pesquisaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {
            return meio;
        }
        if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}
int main(){
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor;
    cout << "Digite o valor que deseja buscar: ";
    cin >> valor;
    int resultado = pesquisaBinaria(vetor, tamanho, valor);
    if (resultado != -1) {
        cout << endl << "Valor encontrado na posicao: " << resultado << endl;
    } else {
        cout << endl << "Valor nao encontrado." << endl;
    }
    return 0;
}
