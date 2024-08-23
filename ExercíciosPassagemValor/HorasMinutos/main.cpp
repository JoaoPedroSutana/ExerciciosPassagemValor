#include <iostream>

using namespace std;

void converterMinutos(int minutosTotais, int &hora, int &minuto) {
    hora = minutosTotais / 60;
    minuto = minutosTotais % 60;
}
int main() {
    int minutosTotais, hora, minuto;
    cout << "Digite o total de minutos passados desde a meia-noite: ";
    cin >> minutosTotais;
    converterMinutos(minutosTotais, hora, minuto);
    cout << "Hora atual: " << hora << " horas e " << minuto << " minutos." << endl;
    return 0;
}
