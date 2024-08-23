#include <iostream>

using namespace std;

void calcularIdade(int diasTotais, int &anos, int &meses, int &dias) {
    anos = diasTotais / 365;
    diasTotais %= 365;
    meses = diasTotais / 30;
    dias = diasTotais % 30;
}
int main(){
    int diasTotais, anos, meses, dias;
    cout << "Digite a idade em dias: ";
    cin >> diasTotais;
    calcularIdade(diasTotais, anos, meses, dias);
    cout << "Idade: " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl;
    return 0;
}
