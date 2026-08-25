#include<stdio.h>
int main(){

    //declaracao de variaveis
    float n1,n2,n3,n4;
    float media=0;

    //Entrada de dados
    printf(" Digite a nota 1: ");
    scanf( "%f", &n1);
    printf(" Digite a nota 2: ");
    scanf( "%f", &n2);
    printf(" Digite a nota 3: ");
    scanf( "%f", &n3);
    printf(" Digite a nota 4: ");
    scanf( "%f", &n4);

    //processamento
    media=(n1+n2+n3+n4)/4;

    if( media >=7){
        printf("Aprovado");

    }else{
        printf("Reprovado");

    }


return 0;

}
