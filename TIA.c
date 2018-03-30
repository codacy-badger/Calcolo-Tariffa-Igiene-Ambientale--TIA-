//  main.c
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
    printf("Calcolo per la Tariffia Igiene Ambientale\nVersione 0.1\nFrancesco Masala\n");

        printf("inserire il numero di componenti della famiglia:\n");
        strtod("%d",comp);

        printf("inserire il numero di metri quadrati della casa:\n");
        strtod("%d",qfmq);

    printf("Resoconto totale:\nComponenti della famiglia: %d\nMetri quadrati della casa:%d\n",comp,qfmq);

    return 0;
}