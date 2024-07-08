#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "LDL.h"
#include <locale.h> //necess�rio para usar setlocale

int main(int argc, char * argv[]) {

    setlocale(LC_ALL, "Portuguese");

    lista * l = NULL;

    l = create();

    insertEnd(l, "Quinta-Feira");
    insertBegin(l, "Quarta-Feira");
    insertEnd(l, "Sexta-Feira");
    insertBegin(l, "Ter�a-Feira");
    insertEnd(l, "S�bado");
    insertBegin(l, "Segunda-Feira");
    insertEnd(l, "Domingo");

    show(l);
    clear_lista(l);

    return EXIT_SUCCESS;

}
