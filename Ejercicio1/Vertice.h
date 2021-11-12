#include <vector>
using std::vector;
#include<string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;


#ifndef VERTICE_H
#define VERTICE_H

class Vertice{
    private:
        vector<string> listaV;

    public:
        Vertice(vector<string>);
        Vertice();
        void setList(vector<string>);
        void addElement(string);
        vector<string> getVertice();
        int getSize();
        void print();
};

#endif