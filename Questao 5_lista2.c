#include <stdio.h>

int main() {
    // Declaracao de variaveis
    float salario_atual;
    float salario_reajustado;
    float percentual;
    
    // Entrada de dados
    printf("Entre com o salario atual: ");
    scanf("%f",&salario_atual);
    
    // Processamento
    if(salario_atual<=300){
      percentual=0.5;
   }else{
      percentual=0.3;
 } 

    salario_reajustado=salario_atual+(salario_atual*percentual);
    printf("O salario reajustado e:%.2f",salario_reajustado);
    
return 0;
}            
