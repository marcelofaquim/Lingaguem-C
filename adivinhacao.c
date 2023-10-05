// falando para a linguagem que eu quero, que ela escreva o comando abaixo na tela (Mas especifico, um texto)
#include <stdio.h> 
#include <stdlib.h> // Biblioteca da variavel "ABS"
#include <time.h> // biblioteca da variavel "Time"

// #define é conhecido considerado uma const

int main() {

printf("\n\n");

printf("         P  /_\\  P                             \n");  
printf("        /_\\_|_|_/_\\                                 \n");
printf("    n_n | ||. .|| | n_n         Bem vindo ao        \n");
printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!   \n");
printf("    |" "  |  |_|  |"  " |                           \n");
printf("    |_____| ' _ ' |_____|                           \n");
printf("          \\__|_|__/                                  n");       

printf("\n\n");

    //Pedindo para a maquinar guardar um numero com variaveis

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand(); // criando numero aleatorios

    int numeroSecreto = numeroGrande % 100; // fazendo com que o numero seja de 1 0 99
    int chute;
    int tentativas = 1;
    double pontos = 1000; //variavel que permite casa decimal
    int numerodeTentativas;
    int acertou = 0;
    
    int nivel;
    printf("Qual nivel voce quer jogar??");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha o nivel qu deseja jogar: ");
    scanf("%d", &nivel);

    switch (nivel) // Bem parecido com o if e else
    {
    case 1:
        numerodeTentativas = 20;
        break;
    
    case 2: 
    numerodeTentativas = 15;
    break;
    
    default:

        numerodeTentativas = 6;
        break;
    }
    

//Quando eu quiser chamar uma Variavel dentro de um "Printf" na linguagem C eu coloco o "%d"

    for (int i =1; i <= numerodeTentativas; i++) {

    printf("Tentativa %d\n", tentativas);    
    printf("Qual o numero voce acha que e o secreto: ");

    // Essa função LÊ, oque o usuario digita "Recebe"
    scanf("%d", &chute); 

    printf("Voce considerou o numero: %d \n", chute);

 if(chute < 0) {
        printf("Voce nao pode chutar numero inferiores a 0, tente novamente\n");
        
        continue; //permite eu ter outra chance, sem  iniciar o jogo do 0
    }

    int acertou =(chute == numeroSecreto);
    int maior = chute > numeroSecreto;
   
     if(acertou) {
        
        //Vai parar o lopping assim que eu acertar "Break;"

        break;
    }
        // Não é necessario eu abrir um "If" e colocar um "Else", posso apenas considerar um

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto \n");
        }

        else {
            printf("Seu chute foi menor que o numero secreto \n");

            tentativas++;

            // "ABS", transformas numero, em numeros positivos

            double pontosperdidos = abs (chute - numeroSecreto) /(double) 2;
            pontos = pontos - pontosperdidos* -1;
            
        }

    printf("Vish!! infelizmente voce errou \n");

    }

    printf("Fim de Jogo!");

    if (acertou)
    
    {  printf("                  000000000                          \n");
       printf("             0000000000000000000                     \n");
       printf("           000000 000000000 000000                   \n");
       printf("          000000      00000    00000                 \n");
       printf("        00000000  #   00000  # 0000000               \n");
       printf("       OOOOOOOOOO    OOOOOOO    OOOOOOOOOO           \n");
       printf("      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO          \n");
       printf("      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO          \n");
       printf("      OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO          \n");
       printf("       OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO           \n");
       printf("        OOOOO   OOOOOOOOOOOOOOO   OOOO               \n");  
       printf("          OOOOO   OOOOOOOOOOOOOOO   OOOO             \n");  
       printf("              OOOOOO         OOOOOO                  \n");
       printf("                   OOOOOOOOOOOO                      \n");
       printf("                                                     \n");
        printf("voce ganhou\n");

    //COmo foi criado a variavel Double ao inves de eu considerar %d, tenho que usar %f
    // O %.1f, significa que eu quero apenas uma casa decimal
         printf("Voce acerto em %d tentativas!\n", tentativas);

          printf("total de pontos: %.1f\n", pontos);
    } 
    
    else {
        printf("Voce errou! Tente novamente! \n");

    }
    
   
}



