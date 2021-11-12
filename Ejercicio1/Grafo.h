#include "Seq.h"
#include <vector>
using std::vector;

#ifndef GRAFO_H
#define GRAFO_H 

class Grafo{
    private:
        vector<Seq*> seq;

	public:
		Grafo(vector<Seq*>);
        Grafo();
};

#endif