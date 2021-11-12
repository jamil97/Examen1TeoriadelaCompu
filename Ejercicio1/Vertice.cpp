#include "Vertice.h"

Vertice::Vertice(vector<string> lista){
    listaV = lista;
}

Vertice::Vertice(){

}

void Vertice::setList(vector<string> lista){
    listaV = lista;
}

void Vertice::addElement(string elemento){
    listaV.push_back(elemento);
}

vector<string> Vertice::getVertice(){
    return listaV;
}

int Vertice::getSize(){
    return listaV.size();
}

void Vertice::print(){
    for (int i = 0; i < listaV.size(); i++){
        cout<<listaV.at(i)<<" ";
    }
    cout<<endl;
}