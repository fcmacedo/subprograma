#include <stdio.h>

//protótipo da funcão
void code_cesar(char[], int ); //nos prototipos o nome das variaveis nao importa, sendo relevante apenas o tipo de dado
void decode_cesar(char[], int );


int main(){

    int desloc;
    char op;
    char str[100];

    do{

        printf("Informe a palavra a codificar ou decodificar: ");
        scanf("%[^\n]s",str);
        printf("Qual a quantidade de deslocamento (1-10): ");
        scanf("%d",&desloc);
        code_cesar(str, desloc);


        printf("Opcoes:\n\nC- Codificar\nD- Decodificar\nS- Sair\n\nOpcao:");

        fflush(stdin);
        op = getche();

        switch(op){
        case 'c':
        case 'C':
            printf("Chamar a funcao para codificar\n\n");
            //code_cesar(str, desloc);
        break;
        case 'd':
        case 'D':
            printf("Chamar a funcao para decodificar\n\n");
           // code_cesar(str, desloc);
        break;
        case 'S':
        case 's':
            printf("Bye...");
        default:
            printf("Opcao invalida\n\n");

        }


    }while(op != 'S' && op != 's');

}


void code_cesar(char string[], int pos){

}
void decode_cesar(char string[], int pos){

}
