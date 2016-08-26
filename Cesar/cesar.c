#include <stdio.h>
#include <string.h>
// codigo de Cesar

//protótipo da funcão
void code_cesar(char[], int ); //nos prototipos o nome das variaveis nao importa, sendo relevante apenas o tipo de dado
void decode_cesar(char[], int );
int is_upperCase(char ch);
int read(char[]);


int main(){

    int desloc;
    char op;
    char str[300];

    do{

        printf("Opcoes:\n\nC- Codificar\nD- Decodificar\nS- Sair\n\nOpcao:");

        fflush(stdin);
        op = getche();

        switch(op){
        case 'c':
        case 'C':
            desloc = read(str);
            code_cesar(str, desloc);

        break;
        case 'd':
        case 'D':
            desloc = read(str);
            decode_cesar(str, desloc);
        break;
        case 'S':
        case 's':
            printf("Bye...");
        break;
        default:
            printf("Opcao invalida\n\n");

        }


    }while(op != 'S' && op != 's');

}


void code_cesar(char string[], int d){

    int i,desloc;

    for(i=0 ; i < strlen(string) ; i++){

        //só faz a troca para caracteres do alfabeto a-z;A-Z
        if(is_upperCase(string[i]) >= 0){

            desloc = d;

            if(is_upperCase(string[i]) == 1){

                if(string[i] + desloc > 90){
                     desloc = desloc - (91 - string[i]) ;
                     string[i]='A';
                }

            }else if(is_upperCase(string[i]) == 0){

                if(string[i] + desloc > 122){
                     desloc = desloc - (123 - string[i]) ;
                     string[i]='a';
                }

            }

            string[i] = string[i] + desloc;
        }

    }
    printf("\n\nCodigo Cesar: %s\n\n\n", string);


}

void decode_cesar(char string[], int d){
    int i,desloc;

    for(i=0 ; i < strlen(string) ; i++){

        desloc = d;

        if(is_upperCase(string[i]) == 1){

            if(string[i] - desloc < 65){
                 desloc = desloc - (string[i]-64) ;
                 string[i]='Z';
            }

        }else if(is_upperCase(string[i]) == 0){

            if(string[i] - desloc < 97){
                 desloc = desloc - (string[i] - 96) ;
                 string[i]='z';
            }

        }

        string[i] = string[i] - desloc;

    }
    printf("\n\nPalavra Decodificada: %s\n\n\n", string);

}


//função que retorna 1 caso o caractere seja maiusculo e 0 caso minusculo; caso não seja letra do alfabeto, retorna -1
int is_upperCase(char ch){

    if(ch >=65 && ch <=90){
        return 1;
    }

    if(ch >=97 && ch <=122){
        return 0;
    }else{
        return -1;
    }

}


//funcao para leitura da palavra e retorna a quantidade de deslocamento
int read(char word[]){

    int deslocamento;

    printf("\n\nInforme a palavra: ");
    scanf("%[^\n]s",word);

    printf("Qual a quantidade de deslocamento (1-10): ");
    scanf("%d",&deslocamento);

    return deslocamento;

}

