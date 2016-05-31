#include <iostream>
using namespace std;
void imprimir_espacos(int total);

int main(int argc, char* args[])
{
// Quatidade total de espaços.
int total_espacos = 10;
int rodada = 0;
while (rodada < total_espacos)
{
imprimir_espacos(rodada);
cout << " s " << endl;

system("cls");
rodada++;
}
imprimir_espacos(total_espacos);

cout << " s " << endl;

return 0;
}
void imprimir_espacos(int total)
{
// Quatidade atual de espaços.
int qntd_atual = 0;

while (qntd_atual < total)
{
cout << " ";
qntd_atual++;
}

}


