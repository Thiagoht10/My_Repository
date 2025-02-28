#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int* gerarRandomico() {
 
    static int r[10]; //Aqui é criado um vetor "r".
    int a; //Cria-se uma variavel "a".
 
    for(a = 0; a < 10; a++) { //cria-se um laço que acrescenta 1 a cada loop na variável "a".
        r[a] = rand() % 100; // Vetor recebe a variável "a" como posição. É também gerado um número aleatório de 0 a 100 pela função "rand()".
        printf("\nr[%d] = %d", a, r[a]); //mostra na tela os dados.
    }
    return r; //A função retorna o vetor "r" já com os números eleatórios e o loop criado com a variável "a".
}
 
int main(){
 
   int *p; //Cria-se um ponteiro.
   int i; //Declara-se um variável.
 
   p = gerarRandomico(); //O ponteiro "p" chama a função "gerarRandomico()", ou seja, o retorno que é o vetor "r".
 
   for ( i = 0; i < 10; i++ ) { //Cria-se um loop com a variável "i", que acrescenta 1 a cada ciclo.
      printf("\np[%d] = %d", i, p[i]); //Mostra na tela os dados puxados da função "gerarRandomico()".
   }
   return 0; //Retorna 0.
}
