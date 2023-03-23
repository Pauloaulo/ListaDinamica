#include <iostream>
using namespace std;

class No {
    int conteudo;
    No* proximo;
public:
    No();
    int getConteudo();
    No* getProx();
    void setConteudo(int conteudo);
    void setProx(No* proximo);
};