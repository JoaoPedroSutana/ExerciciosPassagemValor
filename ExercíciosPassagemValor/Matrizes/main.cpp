#include <iostream>
using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

void lerMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Digite o valor da matriz na posi��o [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void exibirMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void transporMatriz(int matriz[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int M, int N) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transposta[j][i] = matriz[i][j];  // Inverte linhas e colunas
        }
    }
}

void multiplicarPorK(int matriz[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N, int K) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            resultado[i][j] = matriz[i][j] * K;
        }
    }
}

void somarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int M, N;
    int matriz[MAX_M][MAX_N], matriz2[MAX_M][MAX_N], resultado[MAX_M][MAX_N], transposta[MAX_N][MAX_M];
    int K;

    // Leitura das dimens�es da matriz
    cout << "Digite o n�mero de linhas da matriz (M <= 20): ";
    cin >> M;
    cout << "Digite o n�mero de colunas da matriz (N <= 25): ";
    cin >> N;

    // Validar se M e N est�o dentro dos limites permitidos
    if (M > MAX_M || N > MAX_N) {
        cout << "Erro: As dimens�es da matriz excedem os limites permitidos." << endl;
        return 1;
    }

    // Leitura da primeira matriz
    cout << "Lendo a primeira matriz:" << endl;
    lerMatriz(matriz, M, N);

    // Leitura do valor de K para multiplica��o
    cout << "Digite o valor de K para multiplicar a matriz: ";
    cin >> K;

    // Multiplica��o da matriz por K
    multiplicarPorK(matriz, resultado, M, N, K);

    // Exibi��o da matriz multiplicada
    cout << "Matriz multiplicada por " << K << ":" << endl;
    exibirMatriz(resultado, M, N);

    // Leitura da segunda matriz para soma
    cout << "Lendo a segunda matriz para soma:" << endl;
    lerMatriz(matriz2, M, N);

    // Soma das duas matrizes
    somarMatrizes(matriz, matriz2, resultado, M, N);

    // Exibi��o da matriz somada
    cout << "Resultado da soma das matrizes:" << endl;
    exibirMatriz(resultado, M, N);

    // Transposi��o da matriz
    transporMatriz(matriz, transposta, M, N);

    // Exibi��o da matriz transposta
    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < N; ++i) {  // A transposta tem dimens�es invertidas
        for (int j = 0; j < M; ++j) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
