#include <iostream>
#include "No.h"
using namespace std;

class Lista {
    int tamAtual;
    No* cabeca;
    bool adicionaInicioLista(int elemento);
    bool adicionaFimLista(int elemento);
    bool adicionaMeioLista(int pos, int elemento);
    int removeInicioLista();
    int removeNaLista(int pos);
public:
    Lista();
    bool vazia(); // verifica se a lista est? vazia
    bool cheia(); // verifica se a lista est? cheia
    int tamLista(); // retorna o tamanho da lista
    int obtemElemento(int pos); // imprime o elemento de uma determinada posi??o
    bool modElemento(int pos, int elemento); // modifica e exibe um elemento da lista
    bool adiciona(int pos, int elemento); // adiciona um elemento em uma posi??o determinada e retorna true para adi??o bem sucedida e false para mal sucedida
    int remove(int pos); // remove o elemento de uma posi??o determinada e retorna true para remo??o bem sucedida e false para mal sucedida
    void imprimeLista(); // imprime toda a lista
};