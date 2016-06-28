// Tema 3 - Jogo de Corrida.
#include <iostream>
#include <string>
using namespace std;

// Identificador da função 'imprimir_espaços'.
void imprimir_espacos(int total);

int main(int argc, char* args[])
{
	// Quantidade Total de Espaços.
	int total_espacos = 50;
	
	string nome_jog1, nome_jog2;
	
	// Armazenar o nome dos jogadores
	cout << "Digite o nome do jogador1:" << endl;
	cin >> nome_jog1;
	cout << "Digite o nome do jogador2:" << endl;
	cin >> nome_jog2;
	
	
	int rodada = 0;
	while (rodada < total_espacos)
	{
		
		
		// Mostra em tela o Letreiro do Jogo.
		cout << "Jogo de Corrida" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		// Jogador 1: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro.
		cout << nome_jog1 << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		for(int cont=0; cont < 50; cont++) cout <<"_";
		cout << endl;
		// Carro do jogador2
		
		cout << nome_jog2 << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		
		// Limpa a tela para mostrar a próxima rodada.
		
		system("cls");
		
		
		// Passa para a próxima rodada do laço.
		rodada++;
	}

	return 0;
}

/*
*	A função serve pra mostrar espaços em branco na tela.
*	
*	int total : Quantidade de espaços que serão mostrados.
*
*/
void imprimir_espacos(int total)
{
	// Imprime espaços de 'qntd_atual' até 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}
