#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int a1 = 4, a2 = 4;
	int d1 = 1, d2 = 1;

	cout << "Digite o nome do jogador1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador2:" << endl;
	cin >> jog2;

	cout << " o           o" << endl;
	cout << ".T./       \\.T." << endl;
	cout << " ^           ^" << endl;
	cout << jog1 << "          " << jog2 << endl;
	cout << "vida: " << vida1 << "          " << "vida: " << vida2 << endl;

	int dado6;
	int dado1
	int dano;

	srand((int)time(0));
	dado6 = rand() % 6 + 1;
	dado1 = dado6; 

	//Caso o dado caia em um resultado maior que 4
	if (dado1 >= 4)
	{
		dano = a2 - d1;
		vida1 = vida1 - dano;

	}

	//2ºJogador
	int dado7;
	int dado2;
	int dano2;

	srand((int)time(0));
	dado7 = rand() 6 % + 1;
	dado2 = dado7;

		if (dado2 >= 4)
		{
			dano2 = a1 - d2;
			vida2 = vida2 - dano2;
	
		}

		if (dado2 && dado1 >= 4)
		{
			cout << "acertou" << "           " <<"dano:"<< dano2 << endl;

		}
		
		cout << "a:" << a1 << "                    " << "a:" << a2 << endl;
		cout << "d:" << d1 << "                    " << "d:" << d2 << endl;
		cout << "Vida:" << vida1 << "               " << "Vida:" << vida2 << endl;
		system("Pause");

		
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;

		}
		else system("cls");
		cout << "Boa Sorte" << endl;
		if (vida1 && vida2 < 0) cout << "Os dois perderam" << endl;
	}
	return 0;
}
	cout << "Vida: " << vida1 << "          " << "Vida: " << vida2 << endl;
	
	return 0;
}
}
