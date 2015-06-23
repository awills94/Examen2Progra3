// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Celular.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

int Pos = 42;

//Escribe los datos del objeto celular (dado) en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varios celulares en un solo archivo
void escribir(string nombre_archivo, Celular*celular, int posicion)
{
    ofstream out(nombre_archivo.c_str());

        out.seekp(posicion*Pos);

        out.write(celular->nombre.c_str(),30);
        out.write((char*)&celular->modelo,4);
        out.write((char*)&celular->precio,8);
        out.close();


}

//Devuelve un celular previamente escrito (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varios celulares de un solo archivo
Celular* leer(string nombre_archivo, int posicion)
{

    Celular *c = new Celular("",0,0.0);
    ifstream in(nombre_archivo.c_str());

    in.seekg(posicion*Pos);

        char* nombre=new char[30];
        int Modelo;
        double Precio;
        in.read(nombre,30);
        in.read((char*)&Modelo,4);
        in.read((char*)&Precio,8);
        c = new Celular(nombre,Modelo,Precio);
        cout<<nombre<<"    "<<Modelo<<"    "<<Precio<<endl;
in.close();
    return c;


}

//Devuelve el precio del celular en la ultima posicion del archivo con nombre dado
double getUltimoPrecio(string nombre_archivo)
{
    return -1.0;
}

//Convierte la cola (dada) en una pila los datos deben de quedar en el mismo orden
//Nota: El tope de la pila debe de ser el frente de la cola
stack<char> convertirAPila(queue<char> mi_cola)
{
    stack<char> resultado;
    return resultado;
}

//Devuelve true si el set esta ordenado, de lo contrario devuelve false
bool estaOrdenado(set<int> mi_set)
{
    return false;
}

//Devuelve las tablas de los numeros del 1 al 10
//La llave es el numero de la tabla, el valor asociado es un vector que contiene la tabla de dicho numero
map<int,vector<int> > getTablas()
{
    map<int,vector<int> > mi_mapa;
    return mi_mapa;
}

//Devuelve la suma de todos los valores almacenados en el arbol con raiz dada
int getSuma(NodoBinario* raiz)
{
    return -1;
}

//Devuelve true si todos los valores de los nodos son primos, de lo contrario devuelve false
bool sonPrimos(NodoBinario* raiz)
{
    return false;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 0;
}

