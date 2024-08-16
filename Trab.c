#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void printGameOver() {
    printf("\t\033[1;36m  _____                         ____                 \n");
    printf("\t / ____|                       / __ \\                \n");
    printf("\t| |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __ \n");
    printf("\t| | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__|\n");
    printf("\t| |__| | (_| | | | | | |  __/ | |__| |\\ V /  __/ |   \n");
    printf("\t \\_____|\\__,_|_| |_| |_|\\___|  \\____/  \\_/ \\___|_|   \n");
}
void chute(){
    system("cls");
printf("\n\t\033[1;36m<******************************************************************>\n");
printf("\t\t\033[1;35m________  ___    ___  ___    ___  ________  ________\n");
printf("\t\t\033[1;35m|******|  |*|    |*|  |*|    |*|  |******|  |******|\n");
printf("\t\t\033[1;35m|*|       |*|    |*|  |*|    |*|    |**|    |*|     \n");;
printf("\t\t\033[1;35m|*|       |********|  |*|    |*|    |**|    |****|  \n");
printf("\t\t\033[1;35m|*|       |********|  |*|    |*|    |**|    |****|  \n");
printf("\t\t\033[1;35m|*|       |*|    |*|  |*|    |*|    |**|    |*|     \n");
printf("\t\t\033[1;35m|******|  |*|    |*|  |********|    |**|    |******|\n");
printf("\t\033[1;36m<------------------------------------------------------------------>");
}
main(){
setlocale(LC_ALL, "Portuguese");
system("cls");
int escolhas,cont, tentarNovamente = 1, menu=1, opcao, vida=4, voltar, principal=1, progresso;
int numeroSecreto, palpite, tentativas = 0;
int pontojP=0, pontoOP=0, pontoF=0, pontoAdv=0;
char nick[15];

// ---------------------  COLOQUE SEU NICK ---------------------
      printf("\n\t\t\033[1;35mInforme seu nome:\033[1;32m ");
      scanf("%s", nick);
// ---------------------  CARREGANDO ---------------------------

int mostrar_progresso(int progresso) {
    // Limpa a linha atual
    printf("\r");

    // Imprime a barra de progresso
    printf("\033[1;36m   [");
    for (int i = 0; i < 50; ++i) {
        if (i < progresso / 2) {
            printf("=");
        } else {
            printf(" ");
        }
    }
    printf("] %d%%", progresso);

    // Força a saída do buffer para a tela
    fflush(stdout);

    // Incrementa o progresso em 10
    return progresso + 10;}
while (progresso <= 100) {
        progresso = mostrar_progresso(progresso);
        usleep(500000);  // Espera 500 milissegundos (500000 microsegundos)
    }
    printf("\nCarregamento completo!\n");
    goto incio;


//-------------------------------- MENU PRINCIPAL -----------------------------------
incio:

while(1){
        chute();
printf("\n\t\033[1;36m|******************************************************************|");
printf("\n\t\033[1;36m|\033[1;33m1- \tComo jogar?                                                \033[1;36m|");
printf("\n\t\033[1;36m|\033[1;33m2- \tComeçar                                                    \033[1;36m|");
printf("\n\t\033[1;36m|\033[1;33m3- \tPontos                                                     \033[1;36m|");
printf("\n\t\033[1;36m|\033[1;33m4- \tCreditos                                                   \033[1;36m|");
printf("\n\t\033[1;36m|\033[1;33m5- \tSair                                                       \033[1;36m|");
printf("\n\t\033[1;36m|******************************************************************|");
printf("\n\t\033[1;35m  Escolha um número para seguir em frente:");
scanf("%d", &escolhas);
switch(escolhas){
//-------------------------------- COMO JOGAR -----------------------------------
case 1:
    system("cls");
int voltar;
printf("\n\t\033[1;33mObjetivo do Jogo:");
printf("\n\t\033[1;36mO objetivo do jogo é responder corretamente a um conjunto de perguntas e acumular pontos.\n\n");
printf("\n\t\033[1;33m - Cada jogo começa com 4 vidas, você perde 1 vida a cada erro, chegando em 0 você perde o jogo.\n\n");
printf("\n\t\033[1;36m      + Jogo de Programação = 2 ponto por acerto e -2 por erro.\n\n");
printf("\n\t\033[1;36m      + Jogo de One pice e Fisica Quantica = 1 ponto por acerto e -1 por erro.\n\n");
printf("\n\t\033[1;36m      + Jogo advinhação = 10 pontos e -1 por erro.\n\n");
printf("\n\t\033[1;33m - Pontuação por jogo e pontuação geral será apresentada na aba Pontuação(3) no Menu Principal.\n\n");
printf("\n\t\033[1;33m - Créditos do jogo na aba Créditos(4).\n\n");
printf("\t\033[1;35mDeseja voltar ao menu Sim(1)? ");
printf("\tDeseja voltar ao menu Sim(1)? ");
scanf("%d", &voltar);
if(voltar==1)
     goto incio;
else{
    printf("\n\t\tComando invalido");
    sleep(1);
    goto incio;}
    break;
//-------------------------------- MENU JOGOS --------------------------------------
case 2:
    while ("menu"){

        if(nick[0]=='\0'){
      system("cls");
      printf("\n\t\t %s deseja continuar (1) ou colocar outro nick (2)? ", nick);
      scanf("%d", &cont);
        if (cont == 1) ("menu");}

        chute();
        int escolhas;
        principal=0;
        printf("\n\t\t\t\t\033[1;35mBEM VINDO \033[1;32m %s", nick);
        printf("\n\t\033[1;36m|******************************************************************|");
        printf("\n\t\033[1;36m|1- Perguntas sobre programação                                    |");
        printf("\n\t\033[1;36m|2- Perguntas sobre One Piece                                      |");
        printf("\n\t\033[1;36m|3- Perguntas sobre Fisica Quantica                                |");
        printf("\n\t\033[1;36m|4- Advinhação                                                     |");
        printf("\n\t\033[1;36m|5- Retornar                                                       |");
        printf("\n\t\033[1;36m|******************************************************************|");
        printf("\n\t\033[1;35m  Escolha um número para seguir em frente:");
        scanf("%d", &escolhas);
        //printf("\033[0m");
    switch(escolhas){
// --------------------------  COMEÇO JOGOS DE PROGRAMAÇÃO --------------------------------
        case 1:
            vida=4;
            system("cls");
do {//QUESTAO 1 JP
        system("cls");
        printf("\n\n\t\tSua pontuação nesse jogo foi: %d", pontojP);
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                      VIDA:    %d  |", vida);
    printf("\n\t|Qual é a função de um compilador no contexto de programação?      |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Interpretar código-fonte em tempo real                        |");
    printf("\n\t|2-  Converter código-fonte em código executável                   |");
    printf("\n\t|3-  Facilitar o gerenciamento de projetos de software             |");
    printf("\n\t|4-  Testar o código-fonte para encontrar erros                    |");
    printf("\n\t|******************************************************************|");
    printf("\n\n\t\tResposta:");
    scanf("%d", &opcao);
    if (opcao != 2) {
            printf("Resposta errada\n");
            system("pause");
            vida--;}
    else {pontojP=2-(4-vida)*2;
    }
    if(vida<=0){
        system("cls");
        pontojP=vida-4;
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontojP*2-((4-vida)*2));
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 2);
do {//QUESTAO 2 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|Qual das opções a seguir é um exemplo de uma estrutura de dados   |");
    printf("\n\t|linear?                                                           |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Árvore binária                                                |");
    printf("\n\t|2-  Grafo                                                         |");
    printf("\n\t|3-  Pilha                                                         |");
    printf("\n\t|4-  Hash table                                                    |");
    printf("\n\t|******************************************************************|");
    printf("\n\n\t\tResposta:");
    scanf("%d", &opcao);
    if (opcao != 3) {
            printf("Resposta errada\n");
            system("pause");
            vida--;
            pontojP-=2;}
    else pontojP+=2;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontojP*2);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 3);
do {//QUESTAO 3 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|O que é uma função recursiva em programação?                      |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Uma função que retorna um valor booleano                      |");
    printf("\n\t|2-  Uma função que se chama repetidamente até um limite           |");
    printf("\n\t|3-  Uma função que pode ser usada em várias partes do código      |");
    printf("\n\t|4-  Uma função que é executada ao mesmo tempo por várias threads  |");
    printf("\n\t|******************************************************************|");
    printf("\n\n\t\tResposta:");
    scanf("%d", &opcao);
    if (opcao != 2) {
           printf("Resposta errada\n");
            system("pause");
            vida--;
            pontojP-=2;}
    else pontojP+=2;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", ((pontojP*2)-((vida+4)*2)));
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 2);
 do{//QUESTAO 4 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|O que significa a sigla SQL em programação?                       |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Simple Query Language                                         |");
    printf("\n\t|2-  Secure Query Language                                         |");
    printf("\n\t|3-  Structured Query Language                                     |");
    printf("\n\t|4-  Sequential Query Language                                     |");
    printf("\n\t|******************************************************************|");
    printf("\n\n\t\tResposta:");
    scanf("%d", &opcao);
    if (opcao != 3) {
            printf("Resposta errada\n");
            system("pause");
            vida--;
            pontojP-=2;}
    else pontojP+=2;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", (pontojP*2)-((4-vida)*2));
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 3);
do {//QUESTAO 5 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|Qual é a diferença entre uma lista ligada simples e uma lista     |");
    printf("\n\t|duplamente ligada?                                                |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Uma lista duplamente ligada permite apenas inserções no início|");
    printf("\n\t|2-  Uma lista ligada simples armazena elementos em pares          |");
    printf("\n\t|3-  Uma lista duplamente ligada tem ponteiros para o próximo e o  |");
    printf("\n\t|anterior                                                          |");
    printf("\n\t|4-   Uma lista ligada simples só pode ser percorrida de trás para |");
    printf("\n\t|frente                                                            |");
    printf("\n\t|******************************************************************|");
    printf("\n\n\t\tResposta:");
    scanf("%d", &opcao);
    if (opcao != 3) {
            printf("Resposta errada\n");
            system("pause");
            vida--;
            pontojP-=2;}
    else pontojP+=2;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontojP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 3);
    printf("\n\n\t\tSua pontuação nesse jogo foi: %d", pontojP);
    printf("\n\t\tVoce utilizou %d vidas", 4-vida);
    pontojP=0+pontojP;
    sleep(5);
    goto incio;
            break;
// --------------------------  COMEÇO ONE PIECE ------------------------------------
        case 2:
            vida=4;
do {//QUESTAO 1 OP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|Qual nome dos 3 irmãos de Luffy?                                  |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Vergo, Ceaser e Rebcca                                        |");
    printf("\n\t|2-  Zoro, Sanji e Usopp                                           |");
    printf("\n\t|3-  Ace, Sabo e Uta                                               |");
    printf("\n\t|4-  Kid, Law e Bonney                                             |");
    printf("\n\t|******************************************************************|");
    printf("\n\n\t\tResposta:");
    scanf("%d", &opcao);
    if (opcao != 3) {
            printf("Resposta errada\n");
            vida--;}
    else pontoOP=2-(4-vida)*2;
    if(vida<=0){
        system("cls");
        pontoOP=vida-4;
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 3);
    do {//QUESTAO 2 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual o nome da fruta do Kizaru?                                   |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Gomu Gomu no mi                                                |");
        printf("\n\t|2) Mera Mera no mi                                                |");
        printf("\n\t|3) Hana-Hana no Mi                                                |");
        printf("\n\t|4) Pika Pika no Mi                                                |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 4) {
            printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 4);
    do {//QUESTAO 3 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual nome do barco atual dos chapéus de palha?                    |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Going Merry                                                    |");
        printf("\n\t|2) Moby Dick                                                      |");
        printf("\n\t|3) Thousand Sunny                                                 |");
        printf("\n\t|4) Red Force                                                      |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 3) {
             printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {//QUESTAO 4 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual o primeiro Shichibukai que o Luffy enfrentou?                |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Crocodile                                                      |");
        printf("\n\t|2) Barba Negra                                                    |");
        printf("\n\t|3) Jinbe                                                          |");
        printf("\n\t|4) Boa Hancock                                                    |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 1) {
            printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 1);
    do {//QUESTAO 5 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Onde está o One Piece?                                            |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Skypie                                                         |");
        printf("\n\t|2) Laugh Tale                                                     |");
        printf("\n\t|3) Wano                                                           |");
        printf("\n\t|4) Ilha Dawn                                                      |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 2) {
             printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
       goto incio;}
    } while (opcao != 2);
    do {//QUESTAO 6 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual desses personagens não possui Fruta do Diabo?                |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Nico Robin                                                     |");
        printf("\n\t|2) Rayleigh                                                       |");
        printf("\n\t|3) Kaido                                                          |");
        printf("\n\t|4) Smoker                                                         |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 2) {
              printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {//QUESTAO 7 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Gol D. Roger é pai de qual personagem?                            |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Monkey D. Luffy                                                |");
        printf("\n\t|2) Portgas D. Ace                                                 |");
        printf("\n\t|3) Trafalgar D. Water Law                                         |");
        printf("\n\t|4) Rocks D. Xebec                                                 |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 2) {
             printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {//QUESTAO 8 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual é a música mais tocada pelo Brook?                           |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Drums of Liberation                                            |");
        printf("\n\t|2) Binks no Sake                                                  |");
        printf("\n\t|3) We Are                                                         |");
        printf("\n\t|4) Blue Bird                                                      |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 2) {
             printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {//QUESTAO 9 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual desses personagens nunca foi um imperador?                   |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Barba Negra                                                    |");
        printf("\n\t|2) Luffy                                                          |");
        printf("\n\t|3) Gol D. Roger                                                   |");
        printf("\n\t|4) Buggy                                                          |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 3) {
             printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {//QUESTAO 10 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que é o ONE PIECE?                                              |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Rios de ouro e joias preciosas                                 |");
        printf("\n\t|2) Uma fruta mega poderosa                                        |");
        printf("\n\t|3) A verdade de todo o universo e sobre o século perdido          |");
        printf("\n\t|4) As amizades que fazemos durante nossas aventuras               |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4) {
            printf("Resposta errada\n");
            vida--;
            pontoOP--;}
    else pontoOP=1+pontoOP;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoOP);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4);
    system("cls || clear");
    printf("\n\t\tPARABÉNS! VOCÊ VENCEU!");
    printf("\n\t\tSua pontuação foi de: %d", pontoOP);
    printf("\n\n");
    goto incio;
            break;
//-------------------------------- COMEÇO JOGO DE FISICA ---------------------------------
        case 3:
    vida=4;
    do {// Pergunta 1 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que é um átomo na mecânica quântica?                            |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Uma partícula sem carga elétrica.                              |");
        printf("\n\t|2) Uma partícula subatômica que compõe prótons e nêutrons.        |");
        printf("\n\t|3) A menor unidade de matéria que ainda mantém as propriedades    |");
        printf("\n\t|   químicas de um elemento.                                       |");
        printf("\n\t|4) Um quantum de luz.                                             |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 3) {
           printf("Resposta errada\n");
           vida--;}
    else pontoF=2-(4-vida)*2;
    if(vida<=0){
        system("cls");
        pontoF=vida-4;
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 2 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual é a unidade básica da energia em física quântica?            |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Joule                                                          |");
        printf("\n\t|2) Hertz                                                          |");
        printf("\n\t|3) Kelvin                                                         |");
        printf("\n\t|4) Quantum                                                        |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 4) {
            printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 4);
    do {// Pergunta 3 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que é um spin em física quântica?                               |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) A rotação de uma partícula em torno de seu próprio eixo.       |");
        printf("\n\t|2) A rotação de uma partícula em torno de um átomo.               |");
        printf("\n\t|3) A energia associada a um elétron em uma camada atômica.        |");
        printf("\n\t|4) A energia de um fóton.                                         |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 1) {
            printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 1);
    do {// Pergunta 4 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual é o princípio fundamental da física quântica que afirma que  |");
        printf("\n\t|é impossível determinar com precisão a posição e o momento de uma |");
        printf("\n\t|partícula simultaneamente?                                        |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Princípio da Relatividade                                      |");
        printf("\n\t|2) Lei da Conservação da Energia                                  |");
        printf("\n\t|3) Princípio da Incerteza de Heisenberg                           |");
        printf("\n\t|4) Princípio da Gravidade Quântica                                |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 3) {
            printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 5 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que é uma sobreposição quântica?                                |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Um fenômeno onde partículas se movem em múltiplas direções     |");
        printf("\n\t|   simultaneamente.                                               |");
        printf("\n\t|2) Um estado onde uma partícula existe em múltiplos lugares ao    |");
        printf("\n\t|   mesmo tempo.                                                   |");
        printf("\n\t|3) Um estado onde a velocidade de uma partícula é incerta.        |");
        printf("\n\t|4) Um fenômeno onde partículas mudam de posição em intervalos     |");
        printf("\n\t|   regulares.                                                     |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 2) {
         printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {// Pergunta 6 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual é o nome da teoria quântica que descreve a dualidade         |");
        printf("\n\t|                                                                  |");
        printf("\n\t|onda-partícula?                                                   |");
        printf("\n\t|1) Teoria da Relatividade Geral                                   |");
        printf("\n\t|2) Mecânica Newtoniana                                            |");
        printf("\n\t|3) Mecânica Quântica                                              |");
        printf("\n\t|4) Teoria da Gravitação Universal                                 |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 3) {
          printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 7 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que é um elétron?                                               |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Uma partícula subatômica com carga positiva.                   |");
        printf("\n\t|2) Uma partícula subatômica com carga negativa.                   |");
        printf("\n\t|3) Uma partícula neutra encontrada no núcleo de um átomo.         |");
        printf("\n\t|4) Uma partícula que compõe os prótons e nêutrons.                |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 2) {
            printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {// Pergunta 8 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual é o nome do fenômeno que descreve a mudança de estado de uma |");
        printf("\n\t|partícula quando observada?                                       |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Efeito Doppler                                                 |");
        printf("\n\t|2) Sobreposição Quântica                                          |");
        printf("\n\t|3) Colapso da Função de Onda                                      |");
        printf("\n\t|4) Efeito Fotoelétrico                                            |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 3) {
            printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 9 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual é o nome da equação fundamental da mecânica quântica que     |");
        printf("\n\t|descreve a evolução temporal de um sistema quântico?              |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Equação de Einstein                                            |");
        printf("\n\t|2) Equação de Schrödinger                                         |");
        printf("\n\t|3) Equação de Newton                                              |");
        printf("\n\t|4) Equação de Maxwell                                             |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 2) {
            printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {// Pergunta 10 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que é o entrelaçamento quântico?                                |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Uma conexão física entre duas partículas que permite que seus  |");
        printf("\n\t|   estados sejam dependentes um do outro, independentemente da    |");
        printf("\n\t|   distância entre elas.                                          |");
        printf("\n\t|2) Uma teoria que descreve a relação entre partículas e ondas.    |");
        printf("\n\t|3) Um estado onde partículas se movem em múltiplos lugares ao     |");
        printf("\n\t|   mesmo tempo.                                                   |");
        printf("\n\t|4) Um fenômeno onde a velocidade de uma partícula é incerta.      |");
        printf("\n\t|******************************************************************|");
        printf("\n\n\t\tResposta:");
        scanf("%d", &opcao);
        if (opcao != 1) {
           printf("Resposta errada\n");
           vida--;
           pontoF--;}
    else pontoF=1+pontoF;
    if(vida<=0){
        system("cls");
        printGameOver();
        printf("\n\t\tSua pontuação foi de: %d", pontoF);
        printf("\n\t\tVocê utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 1);
    system("cls || clear");
    printf("\n\t\tPARABÉNS! VOCÊ VENCEU!");
    printf("\n\t\tSua pontuação foi de: %d", pontoOP);
    printf("\n\t\tVocê utilizou %d vidas", vida+4);
    printf("\n\n");
    goto incio;
            break;
// ---------------------  FINAL JOGO DE FISICA ---------------------
    case 4:
        system("cls");
    // Inicializa o gerador de números aleatórios
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;  // Gera um número aleatório entre 1 e 100

    printf("\tBem-vindo ao jogo de adivinhação!\n");
    printf("\tEstou pensando em um número entre 1 e 100.\n");

    // Loop do jogo
    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroSecreto) {
            system("cls");
            printf("\tBem-vindo ao jogo de adivinhação!\n");
            printf("\tEstou pensando em um número entre 1 e 100.\n");
            printf("\tMuito alto! Tente novamente.\n");
        } else if (palpite < numeroSecreto) {
            system("cls");
            printf("\tem-vindo ao jogo de adivinhação!\n");
            printf("\tEstou pensando em um número entre 1 e 100.\n");
            printf("\tMuito baixo! Tente novamente.\n");
        } else {
            system("cls");
            pontoAdv=(pontoAdv*0)+10;
            printf("\t\t\tParabéns! Você acertou!!!\n\t\t\t número em %d tentativas.\n", tentativas);
            sleep(5);
            goto incio;
        }
    } while (palpite != numeroSecreto);
      case 5: //Retornar
            goto incio;
            break;}}
            if (cont == 2) {("tentarNovamente");}
            else
                printf("\n\t\tComando inválido\n");
             break;

case 3: //Pontuação
        chute();;
        printf("\n\t Pontuação sobre programação                                   %d", pontojP);
        printf("\n\t Pontuação sobre One Pice                                      %d", pontoOP);
        printf("\n\t Pontuação sobre Fisica Quantica                               %d", pontoF);
        printf("\n\t Pontuação jogo de Advinhação                                  %d", pontoAdv);
        printf("\n\n");
        printf("\n\t                    PONTUAÇÃO TOTAL:  %d", pontojP+pontoOP+pontoF+pontoAdv);
        printf("\n\t<******************************************************************>\n\n\t");
        system("pause");
        break;
case 4: // Creditos
        chute();
        printf("\n\t\t\033[1;33m<********************| \033[1;36mCRÉDITOS \033[1;33m|********************>");
        printf("\n\t\t                    \033[1;35mProgramadores:");
        printf("\n\t\t               \033[1;32mAndrey de Santana e Silva");
        printf("\n\t\t               \033[1;32mMarcelo Casagrande Tavares \n");
        printf("\n\t\t                 \033[1;35mProfessor responsável:");
        printf("\n\t\t                 \033[1;32mProf. Dr. Enir Fonseca \n");
        printf("\n\t\t                       \033[1;35mFaculdade:");
        printf("\n\t\t                   \033[1;32mUnilus | Santos-SP\n\n\n\n");
        system("pause");
        break;
case 5: //Sair
        system("cls");
        exit(0);


}}}
