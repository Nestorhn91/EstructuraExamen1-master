#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <queue>
using namespace std;


//Devuelve el ultimo numero de mi_lista (dado)
list<int>::iterator getUltimo(list<int> mi_lista)
{
    list<int>::iterator i = mi_lista.begin();
    return i;

}

//Devuelve true si todos los numero de mi_set (dado) son pares
bool sonPares(set<int> mi_set)
{
    for(set<int>::iterator i = mi_set.begin(); i!= mi_set.end(); i++)
    {
        if(*i %2>=1)
        {
            return false;
        }
    }
    return true;
}


//Devuelve un set que contenga unicamente los numeros de mi_pila (dado)
set<int> convertirASet(queue<int> mi_pila)
{
    set<int> mi_set;
    while(!mi_pila.empty())
    {
        mi_set.insert(mi_pila.front());
        mi_pila.pop();
    }
        return mi_set;
}

//Devuelve una lista que contenga unicamente los numeros presentes en agenda (dado) asociados con la llave nombre (dado)
list<int> obtenerNumeros(multimap<string,int> agenda, string nombre)
{
    list<int>numeros;
  return numeros;

}


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
