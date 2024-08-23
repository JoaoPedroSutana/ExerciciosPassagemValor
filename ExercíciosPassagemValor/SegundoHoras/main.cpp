#include <iostream>

using namespace std;

void converterTempo(int tempoSegundos, int &hora, int &minuto, int &segundo) {
    hora = tempoSegundos / 3600;
    minuto = (tempoSegundos % 3600) / 60;
    segundo = tempoSegundos % 60;
}
int main() {
    int tempoSegundos, hora, minuto, segundo;
    cout << "Digite o tempo em segundos: ";
    cin >> tempoSegundos;
    converterTempo(tempoSegundos, hora, minuto, segundo);
    cout << "Tempo: " << hora << " horas, " << minuto << " minutos e " << segundo << " segundos." << endl;
    return 0;
}
