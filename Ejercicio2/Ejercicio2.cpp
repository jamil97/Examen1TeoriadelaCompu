#include <iostream>
#include <fstream>
#include <vector>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
using namespace std;

void tabladeVerdad();
void juego();
void verificacion(int, int);

int main()
{
    tabladeVerdad();
    juego();
}

void tabladeVerdad()
{
    int cont = 0;
    cout << "                          TABLA DE VERDAD                 " << endl;
    FILE *arch = fopen("tabladeVerdad.txt", "r");
    char revision;

    while ((revision = fgetc(arch)) != EOF)
    {
        if (revision == '\n')
        {
            cont += 1;
            cout << NC << endl;
        } else if(cont == 0){
            cout << revision;
        }
        else if (cont == 1)
        {
            cout << RED << revision;
        }
        else if (cont == 2)
        {
            cout << YEL << revision;
        }
        else if (cont == 3)
        {
            cout << MAG << revision;
        }
        else if (cont == 4)
        {
            cout << BLU << revision;
        }
        else if (cont == 5)
        {
            cout << GRN << revision;
        }
    }
    cout << "\n"
         << endl;
    cout << NC;
}

void juego()
{
    bool bandera = true;
    int jugada1, jugada2;

    while (bandera)
    {

        cout << "========================================================= \n";
        cout << "Jugador 1, elija su jugada: " << endl;
        cout << "\t1.- Piedra" << endl;
        cout << "\t2.- Papel" << endl;
        cout << "\t3.- Tijera" << endl;
        cout << "\t4.- Spock " << endl;
        cout << "\t5.- Lagartija" << endl;
        cout << "========================================================= \n";
        cin >> jugada1;
        if (jugada1 < 1 || jugada1 > 5)
        {
            bandera = true;
            cout << "Jugador 1, ingreso un valor no aceptado, porfavor elija nuevamente. >:(" << endl;
        }
        else
        {
            bandera = false;
        }
    }

    bandera = true;

    switch (jugada1)
    {
    case 1:
        cout << "Jugador 1 eligio: " << RED << "Piedra! " << endl;
        cout << NC << endl;
        break;
    case 2:
        cout << "Jugador 1 eligio: " << YEL << "Papel! " << endl;
        cout << NC << endl;
        break;
    case 3:
        cout << "Jugador 1 eligio: " << MAG << "Tijera! " << endl;
        cout << NC << endl;
        break;
    case 4:
        cout << "Jugador 1 eligio: " << BLU << "Spock! " << endl;
        cout << NC << endl;
        break;
    case 5:
        cout << "Jugador 1 eligio: " << GRN << "Lagartija! " << endl;
        cout << NC << endl;
        break;
    }

    while (bandera)
    {
        cout << "========================================================= \n";
        cout << "Jugador 2, elija su jugada: " << endl;
        cout << "\t1.- Piedra" << endl;
        cout << "\t2.- Papel" << endl;
        cout << "\t3.- Tijera" << endl;
        cout << "\t4.- Spock " << endl;
        cout << "\t5.- Lagartija" << endl;
        cout << "========================================================= \n";
        cin >> jugada2;
        if (jugada2 < 1 || jugada2 > 5)
        {
            bandera = true;
            cout << "Jugador 2, ingreso un valor no aceptado, porfavor elija nuevamente. >:(" << endl;
        }
        else
        {
            bandera = false;
        }
    }

    switch (jugada2)
    {
    case 1:
        cout << "Jugador 2 eligio: " << RED << "Piedra! " << endl;
        cout << NC << endl;
        break;
    case 2:
        cout << "Jugador 2 eligio: " << YEL << "Papel! " << endl;
        cout << NC << endl;
        break;
    case 3:
        cout << "Jugador 3 eligio: " << MAG << "Tijera! " << endl;
        cout << NC << endl;
        break;
    case 4:
        cout << "Jugador 4 eligio: " << BLU << "Spock! " << endl;
        cout << NC << endl;
        break;
    case 5:
        cout << "Jugador 5 eligio: " << GRN << "Lagartija! " << endl;
        cout << NC << endl;
        break;
    }
    cout << "Verificando el ganador.. " << endl;
    verificacion(jugada1, jugada2);
}

void verificacion(int jugada1, int jugada2)
{
    vector<int> piedra = {0, 0, 1, 0, 1};
    vector<int> papel = {1, 0, 0, 1, 0};
    vector<int> tijera = {0, 1, 0, 0, 1};
    vector<int> spock = {1, 0, 1, 0, 0};
    vector<int> lagarto = {0, 1, 0, 1, 0};

    if (jugada1 == 1)
    {

        if (piedra[jugada2 - 1] == 1)
        {
            cout << "========================================================= \n";
            cout << "Gana el " << RED << " jugador 1!" << endl;
            cout << NC << endl;
            cout << "========================================================= \n";
        }
        else
        {
            cout << "El ganador es el jugador 2!" << endl;
        }
    }
    if (jugada1 == 2)
    {

        if (papel[jugada2 - 1] == 1)
        {
            cout << "========================================================= \n";
            cout << "Gana el " << YEL << " jugador 1!" << endl;
            cout << NC << endl;
            cout << "========================================================= \n";
        }
        else
        {
            cout << "El ganador es el jugador 2!" << endl;
        }
    }
    if (jugada1 == 3)
    {

        if (tijera[jugada2 - 1] == 1)
        {

            cout << "========================================================= \n";
            cout << "Gana el " << MAG << " jugador 1!" << endl;
            cout << NC << endl;
            cout << "========================================================= \n";
        }
        else
        {
            cout << "El ganador es el jugador 2!" << endl;
        }
    }
    if (jugada1 == 4)
    {

        if (spock[jugada2 - 1] == 1)
        {
            cout << "========================================================= \n";
            cout << "Gana el " << BLU << " jugador 1!" << endl;
            cout << NC << endl;
            cout << "========================================================= \n";
        }
        else
        {
            cout << "El ganador es el jugador 2!" << endl;
        }
    }
    if (jugada1 == 5)
    {

        if (lagarto[jugada2 - 1] == 1)
        {
            cout << "========================================================= \n";
            cout << "Gana el " << GRN << " jugador 1!" << endl;
            cout << NC << endl;
            cout << "========================================================= \n";
        }
        else
        {
            cout << "El ganador es el jugador 2!" << endl;
        }
    }
}
