//  TIA.c
//  Calcolo della Tariffa Igiene Ambientale (TIA)
//  Versione 0.1
//
//  Created by Francesco Masala on 30/03/18.
//  Copyright © 2018 Francesco Masala. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
            int comp=0;
            int qfmq=0;
            int tariffa=0;
    printf("Calcolo per la Tariffia Igiene Ambientale\nVersione 0.1\nFrancesco Masala\n");
    printf("Selezionare il territorio\nTerritorio Urbano=1\nTerritorio ExtraUrbano=2");
    scanf("%d", &tariffa);

        if (tariffa == 2) {
            printf("Hai selezionato Territorio Extraurbano\n");
        } else {
            printf("Hai selezionato Territorio Extraurbano\n");
            printf("inserire il numero di componenti della famiglia:\n");
            scanf("%d", &comp);

            printf("inserire il numero di metri quadrati della casa:\n");

            scanf("%d", &qfmq);

            printf("Resoconto totale:\nComponenti della famiglia: %d\nMetri quadrati della casa:%d\n",comp,qfmq);
        }
        if (tariffa == 1) {
        } else {
            printf("Hai selezionato Territorio Urbano\n");
    printf("inserire il numero di componenti della famiglia:\n");
    scanf("%d", &comp);

    printf("inserire il numero di metri quadrati della casa:\n");

    scanf("%d", &qfmq);

    printf("Resoconto totale:\nComponenti della famiglia: %d\nMetri quadrati della casa:%d\n",comp,qfmq);
        }

    return 0;
}