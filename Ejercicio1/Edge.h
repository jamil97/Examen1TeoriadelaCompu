#include "Set.h"
#include "ListEdge.h"

#ifndef EDGE_H
#define EDEGE_H

class Edge:public Set{
    private:
        vector<ListEdge*> arista1;
    public:
        Edge(vector<ListEdge*>);
};

#endif