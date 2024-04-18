#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int escolhaMenu, escolherMenu, cartasSomadas, cartasDealer, newCard;
int c1, c2;
int cd1, cd2;

int dinheiro = 0;



char *naipes[] = {"Ouro", "Espadas", "Copas", "Paus"};


char logo[] = 


    "    ____  __    ___   __________     _____   ________ __\n"
    "   / __ )/ /   /   | / ____/ //_/   / /   | / ____/ //_/\n"
    "  / __  / /   / /| |/ /   / ,< __  / / /| |/ /   / ,<   \n"
    " / /_/ / /___/ ___ / /___/ /| / /_/ / ___ / /___/ /| |  \n"
    "/_____/_____/_/  |_\\____/_/ |_\\____/_/  |_\\____/_/ |_|  \n"
    "                                                        \n";

void resultado(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", logo);
    printf("Suas cartas somadas: %d", cartasSomadas);
    printf("\nCartas do dealer somadas: %d\n\n", cartasDealer);

    if (cartasDealer > cartasSomadas){
        printf("Que pena, o dealer foi o vencedor!\n\n\n");
    } else {
        printf("Que legal, voce foi o vencedor!\n\n\n");
    }

}


void menuInicial(){

    if( cartasDealer == 21){
        printf("s");
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", logo);
    printf("    Suas cartas somadas sao iguais a: %d\n\n", cartasSomadas);
    printf("\n  1 - Pegar mais uma carta");
    printf("\n  2 - parar\n");
    scanf("%d", &escolherMenu);

    switch(escolherMenu){
        case 1:
            addCards();
            break;
        case 2:
            resultado();
            break;
        default:
            break;
    }
}


void addCards(){
    srand(time(NULL));

    newCard = rand() % 10 + 1;
    int naipeNewcard = rand() % 4;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", logo);
    printf("    Suas cartas somadas sao iguais a: %d\n\n", cartasSomadas);
    printf("    Voce pegou uma nova carta: %d de %s\n\n", newCard, naipes[naipeNewcard]);
    printf("Digite qualquer valor para retornar ao menu\n");
    cartasSomadas += newCard;
    if (cartasSomadas > 21){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("%s", logo);
        printf("Ah! Que pena, voce perdeu o jogo\n");
        printf("Suas cartas somadas ultrapassam 21");
    } else {
        scanf("%d", &escolhaMenu);
        if (escolhaMenu == 0){
            printf("Finalizado");
        }
         else {
            menuInicial();
         }

    }





}


int main(void){

    srand(time(NULL));
    c1 = rand() % 10 + 1;
    c2 = rand() % 10 + 1;

    cd1 = rand() % 10 + 1;
    cd2 = rand() % 10 + 1;

    if (c1)

    srand(time(NULL));
    int naipeAleatorio1 = rand() % 4;
    int naipeAleatorio2 = rand() % 4;
    cartasSomadas = c1 + c2;
    if (cartasSomadas == 21){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("%s", logo);
        printf("Ah! Que legal, voce ganhou o jogo\n");
        printf("Suas cartas somadas dao 21");
    }

    cartasDealer = cd1 + cd2;
    if (cartasDealer == 21){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("%s", logo);
        printf("Ah! Que pena, voce perdeu o jogo\n");
        printf("As cartas somadas do dealer dao 21");
    }


    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("%s", logo);
    printf("Bem vindo ao BlackJack 21\n\n");
    printf("    Suas cartas sao %d de %s e %d de %s\n", c1, naipes[naipeAleatorio1], c2, naipes[naipeAleatorio2]);
    printf("    Suas cartas somadas sao iguais a: %d\n\n", cartasSomadas);
    printf("Deseja comecar suas apostas?\n\n");
    printf("    1 - Apostar (R$10,00);\n");
    printf("    2 - Desistir\n");
    scanf("%d", &escolhaMenu);
    switch(escolhaMenu){
        case 1:
            menuInicial();
            break;
        case 2:
            break;
    }



}
