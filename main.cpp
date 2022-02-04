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
fstream in;
in.open("C:\\Users\\Thinkpad User\\CLionProjects\\ordini\\prodotti.txt",ios::in);

if(!in.is_open()) {
    cout<<"Errore apertura file prodotti."<<endl;
    return 0;
}

int i=0;
while(in.good()){
    in>>v[i].codice_prod>>v[i].descrizione>>v[i].prezzo;
    i++;
}
in.close();
//restituisce quanti prodotti ci sono
return i--;

}

int leggi2(ordine v[]) {
    fstream in;
    in.open("C:\\Users\\Thinkpad User\\CLionProjects\\ordini\\ordini.txt",ios::in);

    if(!in.is_open()) {
        cout<<"Errore apertura file ordini."<<endl;
        return 0;
    }

    int i=0;
    while(in.good()){
        in>>v[i].codice_cliente>>v[i].codice_prod>>v[i].quant;
        i++;
    }
    in.close();
//restituisce quanti prodotti ci sono
    return i--;

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

    prodotto p[N];
    ordine o[N];
    int p_quant,o_quant;
    char desc[21];
    lista magg=0;

    p_quant=leggi1(p);
    o_quant=leggi2(o);

    cout<<"FILE prodotti.txt"<<endl<<endl;
    for(int i=0;i<p_quant;i++)
        cout<<p[i].codice_prod<<' '<<p[i].descrizione<<' '<<p[i].prezzo<<endl;

    cout<<endl;

    cout<<"FILE ordini.txt"<<endl<<endl;
    for(int i=0;i<o_quant;i++)
        cout<<o[i].codice_cliente<<' '<<o[i].codice_prod<<' '<<o[i].quant<<endl;


}