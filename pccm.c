#include <stdio.h>
#include <stdlib.h>
#define TAM 10


int main(int argc, char **argv){

    /*Declaração de variaveis*/
    int ch;
    char line[TAM];
    int i, numLin = 0;                                      //numLin = Numero de linhas da entrada.

    struct grafo
    {
      int vertices;
      int arcos;  /* data */
      int *adj;
    };

    FILE *file;
    file= fopen(argv[1],"r");
    if (file == NULL)                                       //Checagem de abertura de arquivo.
        printf("FAILURE: Abertura de arquivo\n");
    

    while ( fgets(line, 10, file) != NULL)                  //Leitura linha a linha da entrada.
    {
        printf("%s", line);                             
        numLin++;
    };
    
    printf("\n%d\n", numLin);

    return 0;
}

