#include <iostream>
#include <fstream>
#include <cstring>
#define N 100
using namespace std;
struct elem {
    char descr[21];
    double tot;
    elem* succ;
};
typedef elem* lista;

struct prodotto {
    int codice_prod;
    char descrizione[21];
    double prezzo;
};

struct ordine {
    int codice_cliente;
    int codice_prod;
    int quant;
};

int leggi1(prodotto v[]) {

}

int leggi2(ordine v[]) {

}

//parametri punti 2
void recupera_prezzo_descr(int codice_prodotto, prodotto P[],
                           int n_prodotti, double& prezzo, char descrizione[]) {
}

void inserimento(lista& p0, elem a) {

}

void stampalista(lista p0) {

}

int main(){

}