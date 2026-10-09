#include <stdio.h>
void soma(){
int valor1, valor2;

printf("Digite o valor um: ");
scanf("%i", &valor1);

printf("Digite o valor dois: ");
scanf("%i", &valor2);


valor1 += valor2;
printf("o resultado da soma é: %i",valor1);
}



void subtracao(){
int valor1, valor2;

printf("Digite o valor um: ");
scanf("%i", &valor1);

printf("Digite o valor dois: ");
scanf("%i", &valor2);


valor1 -= valor2;
printf("o resultado da soma é: %i",valor1);
}



void multiplicar(){
int valor1, valor2;

printf("Digite o valor um: ");
scanf("%i", &valor1);

printf("Digite o valor dois: ");
scanf("%i", &valor2);


valor1 *= valor2;
printf("o resultado da soma é: %i",valor1);
}



int main()
{ 
    int opcao;
    

    do{
        printf("\n-------MENU DE OPÇÕES-------\n");
        printf("\n1. Somar dois números\n");
        printf("\n2. subtrair dois números\n");
        printf("\n3. Multiplicar dois números\n");
        printf("\n4. Sair\n");
        printf("escolha uma opção: ");
        scanf("%i", &opcao);
        

        switch (opcao){
            case 1:
                soma();

        break;
        
         case 2:
         subtracao();

        break;
        case 3:
           multiplicar();
        break;

        case 4:
        printf("\nFinalizando sistema");
        break;


        default:
        printf("\nEntrada invalida");

        }

    }  while (opcao != 4);



        
    }   





    


    





