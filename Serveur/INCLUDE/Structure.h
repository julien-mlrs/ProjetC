#ifndef Structure_h
#define Structure_h

typedef char * string;


typedef struct Card Card;
struct Card{
    char * Marque;
    char * Numero;
    int OrdreCarte;
};

typedef struct Deck Deck;
struct Deck{
    Card *card;
    Deck *next;
    Deck *prev;
};

#endif 