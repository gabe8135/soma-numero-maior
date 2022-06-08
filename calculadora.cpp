#include <stdio.h> //bibliotecas
#include <stdlib.h> 

int main()
{    //variaveis 
    int num1; 
    int num2;
    int resultado;
    int maior;
      //processamento
    printf("insira o primeiro numero para soma: \n");
    scanf("\n%d", &num1 );          //entrada do primeio valor
    
    printf("\ninsira o segundo numero para soma: \n");
    scanf("\n%d", &num2 );          //entrada do segundo valor
    
    resultado = num1 + num2; //essa e a variavel pra soma
    
  printf("\na soma dos dois numeros é: = %d \n", resultado); // aqui iprime o resultado
    
  // mostra qual numero � o maior dos dois numeros  
    if (num1 > num2){    //se num1 for maior que num2 
    printf("\nO maior valor digitado é: %d \n\n", num1); //mostra o num1
}
  if (num1 < num2){    //se num2 for maior que num1 
    printf("\nO maior numero digitado é: %d \n\n", num2); //mostra num2
}
  if (num1 == num2){    //se caso os numeros forem iguais
    printf("\nOs dois numeros possuem o mesmo valor!\n\n"); //diz que os numeros sao iguais
  }
  
  system ("pause");    //pausa o sistema
  return 0;          //se tudo ok retorna a zero
}
    