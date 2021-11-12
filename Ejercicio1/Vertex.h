#include "Vertice.h"

#ifndef VERTEX_H
#define VERTEX_H

class Vertex:public Vertice{
    private:
        Vertice* lista;
    public:
        Vertex(Vertice*);
        Vertex();
};

#endif