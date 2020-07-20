#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"
#include "ListaSequencial.c"

int main(){
    Lista *li;

    li = cria_lista();
    
    libera_lista(li);
    return 0;
}
