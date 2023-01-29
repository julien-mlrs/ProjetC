#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../INCLUDE/Carte.h"
#include "../INCLUDE/Structure.h"


char *MarqueCard[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
char *NumeroCard[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

void InitCarte(Card JeuCarte[52]){
    int compteur = 0;
    for(int j = 0; j<4; j++){
        for(int i = 0; i<13; i++){
            JeuCarte[compteur].Marque = MarqueCard[j];
            JeuCarte[compteur].Numero = NumeroCard[i];
            JeuCarte[compteur].OrdreCarte = compteur + 1;
            compteur++;
        }
    }
}

void PrintCard(Card JeuCarte[52]){
    int compteur = 0;
    for(int j = 0; j<4; j++){
        for(int i = 0; i<13; i++){
            printf("Carte - %d : %s of %s\n", JeuCarte[compteur].OrdreCarte, JeuCarte[compteur].Numero, JeuCarte[compteur].Marque);
            compteur++;
        }
    }
    printf("Total des cartes : %d\n", compteur++);
    
}

void MelangeCard(Card JeuCarte[52]) {
    srand(time(0) + clock());
    for (int i = 0; i < 52; i++) {
        int randomIndex = rand() % 52;
        Card temp = JeuCarte[i];
        JeuCarte[i] = JeuCarte[randomIndex];
        JeuCarte[randomIndex] = temp;
    }
}

void AddCard(Card * JeuCarte, Deck ** DeckJoueur){
    Deck * newDeck = malloc(sizeof(Deck));
    newDeck->card = JeuCarte;
    newDeck->next = NULL;
    newDeck->prev = NULL;
    if(*DeckJoueur == NULL){
        *DeckJoueur = newDeck;
    }else {
        Deck * currentDeck = *DeckJoueur;
        while (currentDeck->next != NULL) {
            currentDeck = currentDeck->next;
        }
        currentDeck->next = newDeck;
        newDeck->prev = currentDeck;
    }
}



void DistributionCard(Card JeuCarte[52]){
    

}




