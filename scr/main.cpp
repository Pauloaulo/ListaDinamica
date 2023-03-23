#include "Lista.h"
#include <cstdlib>
#include <ctime>

int main () {
    setlocale(LC_ALL, "portuguese");

/*
    cout << "Criando Lista..." << endl;
    Lista minhaLista;
    if(minhaLista.vazia()) cout << "Lista Criada com sucesso!" << endl;
    else {
        cout << "Erro na criação da lista!" << endl;
        exit(0);
    }
*/

/* TESTE 1
    Cria a lista 
    Tenta modificar um elemento e recebe uma mensagem de erro de modElemento()
    Preenche a lista com alguns items com adiciona()
    Imprime a lista atual imprimeLista()
    Realiza a modificação com modElemento()
    Imprime o tamanho da lista com tamLista()
    Imprime a lista final imprimeLista()
*/

/*
    cout << "Tentando modificar elemento..." << endl;
    minhaLista.modElemento(2, 5);

    cout << "Preenchendo a lista..." << endl;
    int elementos[] = {3, 7, 14, 2, 1}; // elementos quaisquer, somente para preencher a lista
    int j = 0;
    for(int i = 1; i <= 5; i++) {
        minhaLista.adiciona(i, elementos[j]);
        j++;
    }
    cout << "Preenchimento realizado com sucesso!" << endl;
    cout << "Sua lista atualmente é:" << endl;
    minhaLista.imprimeLista();

    cout << "Modificando o valor do 3º elemento da lista para 27..." << endl;
    minhaLista.modElemento(3, 27);
    cout << "Lista Modificada com sucesso!" << endl;

    cout << "Sua lista final possui tamanho " << minhaLista.tamLista() << " e é composta por: " << endl;
    minhaLista.imprimeLista();
*/

/* TESTE 2
    Criação e cronometragem do preenchimento de uma lista dinâmica com 50000 inteiros
*/

/*
    Lista testeTempo;
    srand(time(NULL));
    clock_t cronometro;

    cronometro = clock(); // Início da contagem
    for(int i = 1; i <= 50000; i++) {
        testeTempo.adiciona(i, rand()%100+1);
    }
    cronometro = clock() - cronometro; // Fim da contagem
    cout << "A lista dinâmica foi criada e preenchida em " << (double)cronometro/CLOCKS_PER_SEC << " segundos." << endl;
*/

    return 0;
}