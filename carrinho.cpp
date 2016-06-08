//biblioteca principal
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
cout << "Jogo de Corrida" << endl;
imprimir_espacos(total_espacos);
cout << " FIM(CHEGADA) " << endl;

imprimir_espacos(rodada);
cout << "  _  " << endl;
imprimir_espacos(rodada);
cout << "-o-o>" << endl;
//limpa a tela 
system("cls");
//incremento
rodada++;
}
imprimir_espacos(total_espacos);
//imprimir na tela o "s"
cout << " s " << endl;

return 0;
}
void imprimir_espacos(int total)
{
//se a quantidade atual for menor que o total terá um incremento na quantidade atual
for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
}

}


