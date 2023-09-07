/*
Autor: Thiago Santos de Jesus
Exercício 1: Estatística Básica
Data: 05/09/2023
*/

#include <stdio.h>
#include <math.h>
#define TAM 1000

int main(){
    
    int N;
    float guarda, num[TAM], media, mediana; 
    
    printf("Quantos números na sua série (N): ");
    scanf("%d", &N);
    
    printf("\nEntre com os números:\n");
    putchar('\n');
    
    for(int i=0; i<N; i++){
        putchar('>');
        scanf("%f", &num[i]);
    }
    
    //Rol dos elementos da série -- Bubble Sort
    for(int a=0; a<N; a++){
        for(int b=a+1; b<N; b++){
            if(num[a]<num[b])
            {
                guarda = num[a];
                num[a]=num[b];
                num[b]=guarda;
            }
        }
    }
    
    //Obter valor mínimo e máximo através do Rol
    
    putchar('\n');
    printf("Valor Mínimo: %.2f", num[N-1]);
    putchar('\n');
    printf("Valor Máximo: %.2f", num[0]);
    
    //---------MÉDIA----------
    for(int i = 0; i<N; i++){
        media = media + num[i];
    }
        media = media/N;
        
    putchar('\n');
    printf("Média: %.2f", media);
    putchar('\n');
    
    
    //------MEDIANA---------
    
     if(N%2==0){
        mediana = (num[(N-1)/2] + num[N/2])/2;
     }
     else if(N%2!=0){
        mediana = num[N/2]; 
     }
        
    printf("Mediana: %.2f", mediana);
    
    //----DESVIO-PADRÃO-----
    
    float desviop, lista[TAM]; // lista para salvar valores dos desvios
    
    //laço para atribuir desvios a lista e elevar ao quadrado
    for(int i=0; i<N; i++){
        lista[i] = pow((num[i] - media), 2);
    }
    
    // laço para somar desvios ao quadrado e dividir pelo números de elementos
    for(int s=0; s<N; s++)
        desviop = desviop + lista[s];
    desviop = sqrt(desviop/N);
    
    printf("\nDesvio-Padrão: %f", desviop);
    putchar('\n');
    putchar('\n');
            
    
 return 0;   
}