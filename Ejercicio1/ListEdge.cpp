#include "ListEdge.h"


ListEdge::ListEdge(){
    
}
ListEdge::ListEdge(string i, string f, int p){
    a = i;
    b = f;
    peso = p;
}


string ListEdge::getInicio(){
    return a;
}

string ListEdge::getFinal(){
    return b;
}

int ListEdge::getPeso(){
    return peso;
}