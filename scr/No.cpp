#include "No.h"

No::No() {
    this->proximo = NULL;
}

int No::getConteudo() {
    return this->conteudo;
}

No* No::getProx() {
    return proximo;
}

void No::setConteudo(int conteudo) {
    this->conteudo = conteudo;
} 

void No::setProx(No* proximo) {
    this->proximo = proximo;
}
