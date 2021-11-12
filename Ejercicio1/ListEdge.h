#include <vector>
using std::vector;
#include <string>
using std::string;

#ifndef LISTEDGE_H
#define LISTEDGE_H

class ListEdge
{
private:
    string a, b;
    int peso;

public:
    ListEdge();
    ListEdge(string, string, int);
    string getInicio();
    string getFinal();
    int getPeso();
    //vector<string> getListEdge();
};

#endif