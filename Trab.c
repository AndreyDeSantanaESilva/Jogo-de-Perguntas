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

    // For�a a sa�da do buffer para a tela
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
printf("\n\t\033[1;36m|\033[1;33m2- \tCome�ar                                                    \033[1;36m|");
printf("\n\t\033[1;36m|\033[1;33m3- \tPontos                                                     \033[1;36m|");
printf("\n\t\033[1;36m|\033[1;33m4- \tCreditos                                                   \033[1;36m|");
printf("\n\t\033[1;36m|\033[1;33m5- \tSair                                                       \033[1;36m|");
printf("\n\t\033[1;36m|******************************************************************|");
printf("\n\t\033[1;35m  Escolha um n�mero para seguir em frente:");
scanf("%d", &escolhas);
switch(escolhas){
//-------------------------------- COMO JOGAR -----------------------------------
case 1:
    system("cls");
int voltar;
printf("\n\t\033[1;33mObjetivo do Jogo:");
printf("\n\t\033[1;36mO objetivo do jogo � responder corretamente a um conjunto de perguntas e acumular pontos.\n\n");
printf("\n\t\033[1;33m - Cada jogo come�a com 4 vidas, voc� perde 1 vida a cada erro, chegando em 0 voc� perde o jogo.\n\n");
printf("\n\t\033[1;36m      + Jogo de Programa��o = 2 ponto por acerto e -2 por erro.\n\n");
printf("\n\t\033[1;36m      + Jogo de One pice e Fisica Quantica = 1 ponto por acerto e -1 por erro.\n\n");
printf("\n\t\033[1;36m      + Jogo advinha��o = 10 pontos e -1 por erro.\n\n");
printf("\n\t\033[1;33m - Pontua��o por jogo e pontua��o geral ser� apresentada na aba Pontua��o(3) no Menu Principal.\n\n");
printf("\n\t\033[1;33m - Cr�ditos do jogo na aba Cr�ditos(4).\n\n");
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
        printf("\n\t\033[1;36m|1- Perguntas sobre programa��o                                    |");
        printf("\n\t\033[1;36m|2- Perguntas sobre One Piece                                      |");
        printf("\n\t\033[1;36m|3- Perguntas sobre Fisica Quantica                                |");
        printf("\n\t\033[1;36m|4- Advinha��o                                                     |");
        printf("\n\t\033[1;36m|5- Retornar                                                       |");
        printf("\n\t\033[1;36m|******************************************************************|");
        printf("\n\t\033[1;35m  Escolha um n�mero para seguir em frente:");
        scanf("%d", &escolhas);
        //printf("\033[0m");
    switch(escolhas){
// --------------------------  COME�O JOGOS DE PROGRAMA��O --------------------------------
        case 1:
            vida=4;
            system("cls");
do {//QUESTAO 1 JP
        system("cls");
        printf("\n\n\t\tSua pontua��o nesse jogo foi: %d", pontojP);
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                      VIDA:    %d  |", vida);
    printf("\n\t|Qual � a fun��o de um compilador no contexto de programa��o?      |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Interpretar c�digo-fonte em tempo real                        |");
    printf("\n\t|2-  Converter c�digo-fonte em c�digo execut�vel                   |");
    printf("\n\t|3-  Facilitar o gerenciamento de projetos de software             |");
    printf("\n\t|4-  Testar o c�digo-fonte para encontrar erros                    |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontojP*2-((4-vida)*2));
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 2);
do {//QUESTAO 2 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|Qual das op��es a seguir � um exemplo de uma estrutura de dados   |");
    printf("\n\t|linear?                                                           |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  �rvore bin�ria                                                |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontojP*2);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 3);
do {//QUESTAO 3 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|O que � uma fun��o recursiva em programa��o?                      |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Uma fun��o que retorna um valor booleano                      |");
    printf("\n\t|2-  Uma fun��o que se chama repetidamente at� um limite           |");
    printf("\n\t|3-  Uma fun��o que pode ser usada em v�rias partes do c�digo      |");
    printf("\n\t|4-  Uma fun��o que � executada ao mesmo tempo por v�rias threads  |");
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
        printf("\n\t\tSua pontua��o foi de: %d", ((pontojP*2)-((vida+4)*2)));
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 2);
 do{//QUESTAO 4 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|O que significa a sigla SQL em programa��o?                       |");
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
        printf("\n\t\tSua pontua��o foi de: %d", (pontojP*2)-((4-vida)*2));
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 3);
do {//QUESTAO 5 JP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|Qual � a diferen�a entre uma lista ligada simples e uma lista     |");
    printf("\n\t|duplamente ligada?                                                |");
    printf("\n\t|                                                                  |");
    printf("\n\t|1-  Uma lista duplamente ligada permite apenas inser��es no in�cio|");
    printf("\n\t|2-  Uma lista ligada simples armazena elementos em pares          |");
    printf("\n\t|3-  Uma lista duplamente ligada tem ponteiros para o pr�ximo e o  |");
    printf("\n\t|anterior                                                          |");
    printf("\n\t|4-   Uma lista ligada simples s� pode ser percorrida de tr�s para |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontojP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
}while(opcao != 3);
    printf("\n\n\t\tSua pontua��o nesse jogo foi: %d", pontojP);
    printf("\n\t\tVoce utilizou %d vidas", 4-vida);
    pontojP=0+pontojP;
    sleep(5);
    goto incio;
            break;
// --------------------------  COME�O ONE PIECE ------------------------------------
        case 2:
            vida=4;
do {//QUESTAO 1 OP
        system("cls");
    printf("\n\t|******************************************************************|");
    printf("\n\t|                                                       VIDA:    %d |", vida);
    printf("\n\t|Qual nome dos 3 irm�os de Luffy?                                  |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 4);
    do {//QUESTAO 3 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual nome do barco atual dos chap�us de palha?                    |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 1);
    do {//QUESTAO 5 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Onde est� o One Piece?                                            |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
       goto incio;}
    } while (opcao != 2);
    do {//QUESTAO 6 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual desses personagens n�o possui Fruta do Diabo?                |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {//QUESTAO 7 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Gol D. Roger � pai de qual personagem?                            |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {//QUESTAO 8 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual � a m�sica mais tocada pelo Brook?                           |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {//QUESTAO 10 OP
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que � o ONE PIECE?                                              |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Rios de ouro e joias preciosas                                 |");
        printf("\n\t|2) Uma fruta mega poderosa                                        |");
        printf("\n\t|3) A verdade de todo o universo e sobre o s�culo perdido          |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4);
    system("cls || clear");
    printf("\n\t\tPARAB�NS! VOC� VENCEU!");
    printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
    printf("\n\n");
    goto incio;
            break;
//-------------------------------- COME�O JOGO DE FISICA ---------------------------------
        case 3:
    vida=4;
    do {// Pergunta 1 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que � um �tomo na mec�nica qu�ntica?                            |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Uma part�cula sem carga el�trica.                              |");
        printf("\n\t|2) Uma part�cula subat�mica que comp�e pr�tons e n�utrons.        |");
        printf("\n\t|3) A menor unidade de mat�ria que ainda mant�m as propriedades    |");
        printf("\n\t|   qu�micas de um elemento.                                       |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 2 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual � a unidade b�sica da energia em f�sica qu�ntica?            |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 4);
    do {// Pergunta 3 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que � um spin em f�sica qu�ntica?                               |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) A rota��o de uma part�cula em torno de seu pr�prio eixo.       |");
        printf("\n\t|2) A rota��o de uma part�cula em torno de um �tomo.               |");
        printf("\n\t|3) A energia associada a um el�tron em uma camada at�mica.        |");
        printf("\n\t|4) A energia de um f�ton.                                         |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 1);
    do {// Pergunta 4 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual � o princ�pio fundamental da f�sica qu�ntica que afirma que  |");
        printf("\n\t|� imposs�vel determinar com precis�o a posi��o e o momento de uma |");
        printf("\n\t|part�cula simultaneamente?                                        |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Princ�pio da Relatividade                                      |");
        printf("\n\t|2) Lei da Conserva��o da Energia                                  |");
        printf("\n\t|3) Princ�pio da Incerteza de Heisenberg                           |");
        printf("\n\t|4) Princ�pio da Gravidade Qu�ntica                                |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 5 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que � uma sobreposi��o qu�ntica?                                |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Um fen�meno onde part�culas se movem em m�ltiplas dire��es     |");
        printf("\n\t|   simultaneamente.                                               |");
        printf("\n\t|2) Um estado onde uma part�cula existe em m�ltiplos lugares ao    |");
        printf("\n\t|   mesmo tempo.                                                   |");
        printf("\n\t|3) Um estado onde a velocidade de uma part�cula � incerta.        |");
        printf("\n\t|4) Um fen�meno onde part�culas mudam de posi��o em intervalos     |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {// Pergunta 6 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual � o nome da teoria qu�ntica que descreve a dualidade         |");
        printf("\n\t|                                                                  |");
        printf("\n\t|onda-part�cula?                                                   |");
        printf("\n\t|1) Teoria da Relatividade Geral                                   |");
        printf("\n\t|2) Mec�nica Newtoniana                                            |");
        printf("\n\t|3) Mec�nica Qu�ntica                                              |");
        printf("\n\t|4) Teoria da Gravita��o Universal                                 |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 7 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que � um el�tron?                                               |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Uma part�cula subat�mica com carga positiva.                   |");
        printf("\n\t|2) Uma part�cula subat�mica com carga negativa.                   |");
        printf("\n\t|3) Uma part�cula neutra encontrada no n�cleo de um �tomo.         |");
        printf("\n\t|4) Uma part�cula que comp�e os pr�tons e n�utrons.                |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {// Pergunta 8 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual � o nome do fen�meno que descreve a mudan�a de estado de uma |");
        printf("\n\t|part�cula quando observada?                                       |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Efeito Doppler                                                 |");
        printf("\n\t|2) Sobreposi��o Qu�ntica                                          |");
        printf("\n\t|3) Colapso da Fun��o de Onda                                      |");
        printf("\n\t|4) Efeito Fotoel�trico                                            |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 3);
    do {// Pergunta 9 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|Qual � o nome da equa��o fundamental da mec�nica qu�ntica que     |");
        printf("\n\t|descreve a evolu��o temporal de um sistema qu�ntico?              |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Equa��o de Einstein                                            |");
        printf("\n\t|2) Equa��o de Schr�dinger                                         |");
        printf("\n\t|3) Equa��o de Newton                                              |");
        printf("\n\t|4) Equa��o de Maxwell                                             |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 2);
    do {// Pergunta 10 Fisica
        system("cls || clear");
        printf("\n\t|******************************************************************|");
        printf("\n\t|                                                       VIDA:    %d |", vida);
        printf("\n\t|O que � o entrela�amento qu�ntico?                                |");
        printf("\n\t|                                                                  |");
        printf("\n\t|1) Uma conex�o f�sica entre duas part�culas que permite que seus  |");
        printf("\n\t|   estados sejam dependentes um do outro, independentemente da    |");
        printf("\n\t|   dist�ncia entre elas.                                          |");
        printf("\n\t|2) Uma teoria que descreve a rela��o entre part�culas e ondas.    |");
        printf("\n\t|3) Um estado onde part�culas se movem em m�ltiplos lugares ao     |");
        printf("\n\t|   mesmo tempo.                                                   |");
        printf("\n\t|4) Um fen�meno onde a velocidade de uma part�cula � incerta.      |");
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
        printf("\n\t\tSua pontua��o foi de: %d", pontoF);
        printf("\n\t\tVoc� utilizou %d vidas", vida+4);
        sleep(5);
        goto incio;}
    } while (opcao != 1);
    system("cls || clear");
    printf("\n\t\tPARAB�NS! VOC� VENCEU!");
    printf("\n\t\tSua pontua��o foi de: %d", pontoOP);
    printf("\n\t\tVoc� utilizou %d vidas", vida+4);
    printf("\n\n");
    goto incio;
            break;
// ---------------------  FINAL JOGO DE FISICA ---------------------
    case 4:
        system("cls");
    // Inicializa o gerador de n�meros aleat�rios
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;  // Gera um n�mero aleat�rio entre 1 e 100

    printf("\tBem-vindo ao jogo de adivinha��o!\n");
    printf("\tEstou pensando em um n�mero entre 1 e 100.\n");

    // Loop do jogo
    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroSecreto) {
            system("cls");
            printf("\tBem-vindo ao jogo de adivinha��o!\n");
            printf("\tEstou pensando em um n�mero entre 1 e 100.\n");
            printf("\tMuito alto! Tente novamente.\n");
        } else if (palpite < numeroSecreto) {
            system("cls");
            printf("\tem-vindo ao jogo de adivinha��o!\n");
            printf("\tEstou pensando em um n�mero entre 1 e 100.\n");
            printf("\tMuito baixo! Tente novamente.\n");
        } else {
            system("cls");
            pontoAdv=(pontoAdv*0)+10;
            printf("\t\t\tParab�ns! Voc� acertou!!!\n\t\t\t n�mero em %d tentativas.\n", tentativas);
            sleep(5);
            goto incio;
        }
    } while (palpite != numeroSecreto);
      case 5: //Retornar
            goto incio;
            break;}}
            if (cont == 2) {("tentarNovamente");}
            else
                printf("\n\t\tComando inv�lido\n");
             break;

case 3: //Pontua��o
        chute();;
        printf("\n\t Pontua��o sobre programa��o                                   %d", pontojP);
        printf("\n\t Pontua��o sobre One Pice                                      %d", pontoOP);
        printf("\n\t Pontua��o sobre Fisica Quantica                               %d", pontoF);
        printf("\n\t Pontua��o jogo de Advinha��o                                  %d", pontoAdv);
        printf("\n\n");
        printf("\n\t                    PONTUA��O TOTAL:  %d", pontojP+pontoOP+pontoF+pontoAdv);
        printf("\n\t<******************************************************************>\n\n\t");
        system("pause");
        break;
case 4: // Creditos
        chute();
        printf("\n\t\t\033[1;33m<********************| \033[1;36mCR�DITOS \033[1;33m|********************>");
        printf("\n\t\t                    \033[1;35mProgramadores:");
        printf("\n\t\t               \033[1;32mAndrey de Santana e Silva");
        printf("\n\t\t               \033[1;32mMarcelo Casagrande Tavares \n");
        printf("\n\t\t                 \033[1;35mProfessor respons�vel:");
        printf("\n\t\t                 \033[1;32mProf. Dr. Enir Fonseca \n");
        printf("\n\t\t                       \033[1;35mFaculdade:");
        printf("\n\t\t                   \033[1;32mUnilus | Santos-SP\n\n\n\n");
        system("pause");
        break;
case 5: //Sair
        system("cls");
        exit(0);


}}}
