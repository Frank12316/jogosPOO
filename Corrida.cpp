//começo do programa e bibliotecas que serão utilizadas.
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void imprimir_espacos(int rodada);
int main()
{
	string P1, P2; 
	int espacos1 = 0, espacos2 = 0, qnt_espacos = 50;

	cout << "                           BEM VINDO AO TURBO RACERS                                 " << endl;
	cout << "Nome do player1: " << P1 << endl;
	cin >> P1;
	cout << "Nome do player2: " << P2 << endl;
	cin >> P2;
	system("cls");
	
	cout << "  _  " << endl;
	cout << "-o-o>" << endl;
	cout << "P1:  " << P1 << endl;
	cout << "-----------                              Aperte start para iniciar a corrida!!!" << endl;
	cout << "  _  " << endl;
	cout << "-o-o>" << endl;
	cout << "P2:  " << P2 << endl;
	system("pause");

	while (espacos1 < qnt_espacos && espacos2 < qnt_espacos)
	{
		srand((int)time(0));

		espacos1 = rand() % 3 + 1;
		cout << "  _  " << endl;
		imprimir_espacos(espacos1);
		cout << "-o-o>" << endl;
		imprimir_espacos(espacos1);

		espacos2 = rand() % 3 + 1;
		cout << "  _  " << endl;
		imprimir_espacos(espacos2);
		cout << "-o-o>" << endl;
		imprimir_espacos(espacos2);
	}

	if (espacos1 < espacos2) cout << "vitoria de " << P2 << endl;
	else if (espacos1 > espacos2) cout << "vitoria de " << P1 << endl;
	else cout << "A corrida deu empate" << endl;
	return 0;
} 
void imprimir_espacos(int rodada)
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
	{
		cout << " ";
	}
}
