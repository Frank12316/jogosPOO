//começo do programa e bibliotecas que serão utilizadas, o include inclui as bibliotecas que serão usadas
#include <iostream>
#include <string>
#include <ctime>

using namespace std;//o "using namespace" define as funções da biblioteca

void imprimir_espacos(int rodada);//função secundaria inserida na principal
int main()//função principal do programa
{
	string P1, P2; //declaração de variaveis que recebem os nomes dos jogadores
	int espacos1 = 0, espacos2 = 0, qnt_espacos = 50; //declaração de variaveis que indetificam espaços
	//printa o que esta entre o cout e o endl na tela
	cout << "                           BEM VINDO AO TURBO RACERS                                 " << endl;
	cout << "Nome do player1: " << P1 << endl;
	cin >> P1;//Recebe e armazena os valores(caracteres) da variavel em questão
	cout << "Nome do player2: " << P2 << endl;
	cin >> P2;
	system("cls");//limpa a tela apos a execusão do que esta acima
	//printa o que esta entre o cout e o endl na tela
	cout << "  _  " << endl;
	cout << "-o-o>" << endl;
	cout << "P1:  " << P1 << endl;
	cout << "-----------                              Aperte start para iniciar a corrida!!!" << endl;
	cout << "  _  " << endl;
	cout << "-o-o>" << endl;
	cout << "P2:  " << P2 << endl;
	system("pause");//pausa o programa no ponto atual, o programa roda assim que o start é apertado

	while (espacos1 < qnt_espacos && espacos2 < qnt_espacos) //enquanto o que estiver entre parentezes for verdadeiro, se executa o que ests entre chaves
	{
		srand((int)time(0)); //Semente que vai inserir a seleção aleatoria de numeros

		espacos1 = rand() % 3 + 1;//conta que vai dizer quanto de espaço é incrementado
		cout << "  _  " << endl;//printa na tela o que esta entre cout e endl
		imprimir_espacos(espacos1);//imprime de acordo com a função secundaria e a conta de espacos o quanto o carrinho vai andar  
		cout << "-o-o>" << endl;//printa na tela o que esta entre cout e endl
		imprimir_espacos(espacos1);//imprime de acordo com a função secundaria e a conta de espacos o quanto o carrinho vai andar

		espacos2 = rand() % 3 + 1;//conta que vai dizer quanto de espaço é incrementado
		cout << "  _  " << endl;//printa na tela o que esta entre cout e endl
		imprimir_espacos(espacos2);//imprime de acordo com a função secundaria e a conta de espacos o quanto o carrinho vai andar
		cout << "-o-o>" << endl;//printa na tela o que esta entre cout e endl
		imprimir_espacos(espacos2);//imprime de acordo com a função secundaria e a conta de espacos o quanto o carrinho vai andar
	}

	if (espacos1 < espacos2) cout << "vitoria de " << P2 << endl;//se os espaços de P2 forem maiores que os de P1, P2 ganha
	else if (espacos1 > espacos2) cout << "vitoria de " << P1 << endl;//se os espaços de P1 forem maiores que os de P2, P1 ganha
	else cout << "A corrida deu empate" << endl;//se ambas as funções de cima forem falsas, o jogo empata
	return 0;//fecha a função
} 
void imprimir_espacos(int rodada)//inicio da função secundaria que vai ser responsavel por imprimir espaços
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)//para o que estiver entre parenteses se executa o que está entre as chaves
	{
		cout << " ";
	}
}
