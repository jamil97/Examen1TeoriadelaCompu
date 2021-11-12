#include "Grafo.h"
#include "Seq.h"
#include "Set.h"
#include "Vertex.h"
#include "Edge.h"
#include "Vertice.h"
#include "ListEdge.h"

#include <iostream>
using namespace std;

int main()
{
    vector<string> list;

    int vert;
    cout << "Ingrese el numero de vertices: ";
    cin >> vert;
    for (int i = 0; i < vert; i++)
    {
        string nombreVert;
        cout << "Ingrese el vertice: ";
        cin >> nombreVert;
        list.push_back(nombreVert);
    }
    int aristas;
    cout << "Ingrese el numero de aristas: ";
    cin >> aristas;
    for (int i = 0; i < aristas; i++)
    {
        cout << "Ingrese el primer vertice: ";
        string V1;
        cin >> V1;
        cout << "Ingrese el segundo vertice: ";
        string V2;
        cin >> V2;
        cout << "Ingrese el peso de la arista: ";
        int w;
        cin >> w;
        ListEdge *edgeData = new ListEdge(V1, V2, w);
    }
}
