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
        cout << "Erro na cria��o da lista!" << endl;
        exit(0);
    }
*/

/* TESTE 1
    Cria a lista 
    Tenta modificar um elemento e recebe uma mensagem de erro de modElemento()
    Preenche a lista com alguns items com adiciona()
    Imprime a lista atual imprimeLista()
    Realiza a modifica��o com modElemento()
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
    cout << "Sua lista atualmente �:" << endl;
    minhaLista.imprimeLista();

    cout << "Modificando o valor do 3� elemento da lista para 27..." << endl;
    minhaLista.modElemento(3, 27);
    cout << "Lista Modificada com sucesso!" << endl;

    cout << "Sua lista final possui tamanho " << minhaLista.tamLista() << " e � composta por: " << endl;
    minhaLista.imprimeLista();
*/

/* TESTE 2
    Cria��o e cronometragem do preenchimento de uma lista din�mica com 50000 inteiros
*/

/*
    Lista testeTempo;
    srand(time(NULL));
    clock_t cronometro;

    cronometro = clock(); // In�cio da contagem
    for(int i = 1; i <= 50000; i++) {
        testeTempo.adiciona(i, rand()%100+1);
    }
    cronometro = clock() - cronometro; // Fim da contagem
    cout << "A lista din�mica foi criada e preenchida em " << (double)cronometro/CLOCKS_PER_SEC << " segundos." << endl;
*/

    return 0;
}