#include "Lista.h"

Lista::Lista() {
    this->tamAtual = 0;
    this->cabeca = NULL;
}
    
bool Lista::vazia() {
    if (tamAtual == 0) return true;
    else return false;
}

int Lista::tamLista() {
    return tamAtual;
}

int Lista::obtemElemento(int pos) {
    int cont = 1;
    No* aux = cabeca;
    if (vazia()) {
        cout << "A lista está vazia!" << endl;
        return -1;
    } 
    if (pos > tamAtual || pos < 1) {
        cout << "Posição inválida" << endl;
        return -1;
    } 
    
    while (cont < pos) {
        aux = aux->getProx();
        cont++;
    }

    return aux->getConteudo();
}

bool Lista::modElemento(int pos, int elemento) {
    int cont = 1;
    No* aux = cabeca;
    if (vazia()) {
        cout << "A lista está vazia!" << endl;
        return false;
    }
    if (pos > tamAtual || pos < 1) {
        cout << "Posição inválida" << endl;
        return false;
    }

    while(cont < pos) {
        aux = aux->getProx();
        cont++;
    }

    aux->setConteudo(elemento);
    return true;
}

bool Lista::adiciona(int pos, int elemento) {
    if ((vazia() && pos != 1) || (pos > tamAtual+1)) {
        cout << "Posição inválida!" << endl;
        return false;
    }
    
    if (pos == 1) {
        return adicionaInicioLista(elemento);
    } else if (pos == tamAtual+1) {
        return adicionaFimLista(elemento);
    } else {
        return adicionaMeioLista(pos, elemento);
    }
}

bool Lista::adicionaInicioLista(int elemento) {
    No* novoNo = new No();
    novoNo->setConteudo(elemento);

    this->cabeca = novoNo;
    tamAtual++;
    return true;
}

bool Lista::adicionaMeioLista(int pos, int elemento) {
    int cont = 1;
    No* novoNo = new No();
    novoNo->setConteudo(elemento);

    No* aux = cabeca;
    while ((cont < pos-1) && (aux != NULL)) {
        aux = aux->getProx();
        cont++;
    }
    if(aux == NULL) return false;

    novoNo->setProx(aux->getProx());
    aux->setProx(novoNo);
    tamAtual++;
    return true;
}

bool Lista::adicionaFimLista(int elemento) {
    No* novoNo = new No();
    novoNo->setConteudo(elemento);

    No* aux = cabeca;
    while(aux->getProx() != NULL) {
        aux = aux->getProx();
    }

    novoNo->setProx(NULL);
    aux->setProx(novoNo);
    tamAtual++;
    return true;
}

int Lista::remove(int pos) {
    if (vazia()) {
        cout << "A lista está vazia!" << endl;
        return false;
    }
    if (pos > tamAtual || pos < 1) {
        cout << "Posição inválida" << endl;
        return false;
    }

    if (pos == 1) return removeInicioLista();
    else return removeNaLista(pos);
}

int Lista::removeInicioLista() {
    No* aux = cabeca;
    int conteudo = aux->getConteudo();

    cabeca = aux->getProx();
    tamAtual--;

    delete aux;
    return conteudo;
}

int Lista::removeNaLista(int pos) {
    No* atual = NULL;
    No* antecessor = NULL;
    int dado = -1, cont = 1;

    if (cont < pos) {
        antecessor = atual;
        atual = atual->getProx();
        cont++;
    }

    dado = atual->getConteudo();
    antecessor->setProx(atual->getProx());
    tamAtual--;

    delete atual;
    return dado;
}

void Lista::imprimeLista() {
    int cont = 1;
    No* aux = cabeca;

    if(vazia()) {
        cout << " Lista Vazia! {Ø}" << endl;
        return;
    } 

    cout << "{" << aux->getConteudo() << ", ";
    while(cont < tamAtual) {
        aux = aux->getProx();
        cont++;

        if(cont == tamAtual) {
            cout << aux->getConteudo() << "}" << endl;
        } else {
            cout << aux->getConteudo() << ", ";
        }
    }
}