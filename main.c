#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
     //Variáveis usadas
     unsigned int x[200];//variável usada para armazenar os números
     int y;
     int z;
     int k;
     int w;
     int j;
     int i;
     
     
     i=0;
     while(i<200){//zerar todas as posições do vetor x
         x[i] = 0;
         i++;
     }
     z = 0;
     i = 0;
     printf("Digite números entre 0 e 5000: \n");
     while(y != -1){
       scanf("%d", &y);
       j = y / 32;//posição do vetor a ser inserido
       if((y!=-1)&&(y>=0 && y<= 5000)){//aceita que guarde valores entre 0 e 5000
           x[j] = x[j] | (1 << (y-(32*j)));//coloca 1 na posição do bit do valor a ser inserido
           if(y>i){
           i = y;
        }
       }
       
     }
     y = 0;
     w = 0;
     printf("Números Digitados: \n");
     while(y<=i){//printando os números armazenados
       if((x[w] >> (y-(32*w))) & 1){//verificando se a posição do bit é 1, se for imprime
         printf("%d\n", y);
       }
       y++;
       w = y / 32;//posição do vetor a ser verificado
     }
   
  return 0;  
}
