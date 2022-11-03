#include <stdio.h>
void menu();
float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);

int main()
{
    
menu(); 

float a, b;  
char operador;
    
    
printf("digite 1 numero ");
scanf("%f", &a);
printf("digite 2 numero ");
scanf("%f", &b);
printf("digite metodo");
scanf(" %c", &operador);

switch(operador){
    case '+': printf("soma %f", soma(a, b));break;
    case '-': printf("soma %f", subtracao(a, b));break;
    case '*': printf("soma %f", multiplicacao(a, b));break;
    case '/': printf("soma %f", divisao(a, b));break;
    
}
return 0;
}

void menu(){
    printf("digite 2 numeros e em seguida uma operação como: + ou - ou / ou * \n");
}

float soma(float n1, float n2){
    float resultado;
    resultado = n1 + n2;
    return resultado;
}
float subtracao(float n1, float n2){
    float resultado;
    resultado = n1 - n2; 
    return resultado;
    
}
float multiplicacao(float n1, float n2){
    float resultado;
    resultado = n1 * n2;    
    return resultado;
    
}
float divisao(float n1, float n2){
    float resultado;
    resultado = n1 / n2;
    return resultado;
}

void mostrarresposta(float n1, char a){
    printf("o resultado da soma é " soma(a, b));
    printf("o resultado da subtracao é " subtracao(a, b));
    printf("o resultado da divisao é " multiplicacao(a, b));
    printf("o resultado da multiplicacao é " divisao(a, b));

}
