#ifndef Carte_h
#define Carte_h

#include "./Structure.h"


extern char *MarqueCard[];
extern char *NumeroCard[];

void PrintCard(Card JeuCarte[52]);
void InitCarte(Card JeuCarte[52]);
void MelangeCard(Card JeuCarte[52]);


#endif