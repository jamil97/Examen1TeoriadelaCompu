#include "Set.h"
#include <vector>
using std::vector;

#ifndef SEQ_H 
#define SEQ_H

class Seq{
    private:
        vector<Set*> verticePrin;
        vector<Set*> aristas;

	public:
		Seq(vector<Set*>, vector<Set*>);
};

#endif