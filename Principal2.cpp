#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{
	char inicial;
	string nome;
	string classe;

	cout << "digite o nome do personagem: " << endl;
	getline(cin, nome);
	inicial = nome[0];
	cout << "digite a classe do personagem: " << endl;
	getline(cin, classe);
	cout << "personagem: " << inicial << ". " << nome.substr( nome.find(" ")) << endl;
	cout << "classe: " << classe << endl;

	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;

	int vida = 65, vida_maxima = 110;

	cout << "status " << endl;
	cout << "ataque : " << ataque << "defesa : " << defesa << endl;
	cout << "magica : " << magica << "def. magica : " << def_magica << endl;

	cout << "vida : " << vida << " / " << vida_maxima << endl;
	double porc_vida = (vida * 100) / vida_maxima;
	
	cout.precision(2);
	cout << "vida : " << porc_vida << "%" << endl;

	return 0;

}