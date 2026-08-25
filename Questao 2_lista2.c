#include <stdio.h>
int main () {

    //declaracao de variaveis
    float salario_atual;
    float aumento=0.3;
    float salario_reajuste=0;

    //entrada de dados
    printf("Entre com o seu salario:");
    scanf("%f",&salario_atual);

    //processamento
    salario_reajuste=salario_atual+(salario_atual*aumento);

    if(salario_atual<500){
        printf("O salario reajustado e:%.2f",salario_reajuste);
    }else{
        printf("Funcionario nao tem direito ao aumento");

    }



    return 0;
}
