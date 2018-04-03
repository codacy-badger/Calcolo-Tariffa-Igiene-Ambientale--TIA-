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
            float quotavar=0;
            float totale=0;
    printf("Calcolo per la Tariffia Igiene Ambientale\nVersione 0.5\nFrancesco Masala\n");
    printf("Selezionare il territorio\nTerritorio Urbano=1\nTerritorio ExtraUrbano=2 (non funzionante)\n");
    scanf("%d", &tariffa);


    if (tariffa == 2) {
            printf("Hai selezionato Territorio Extraurbano\n");
            printf("inserire il numero di componenti della famiglia:\n");
            scanf("%d", &comp);

            printf("inserire il numero di metri quadrati della casa:\n");

            scanf("%d", &qfmq);

            printf("Resoconto totale:\nComponenti della famiglia: %d\nMetri quadrati della casa:%d\n",comp,qfmq);

            printf("In developing :D")

    } else {

            printf("hai selezionato Territorio Urbano\n");
            printf("inserire il numero di componenti della famiglia:\n");
            scanf("%d", &comp);

            printf("inserire il numero di metri quadrati della casa:\n");

            scanf("%d", &qfmq);

            printf("Resoconto totale:\nComponenti della famiglia: %d\nMetri quadrati della casa:%d\n",comp,qfmq);
        if(comp==1) {
            quotavar=0.7313;
            totale=quotavar*qfmq;
                printf("Il totale dovuto da pagare è di: %f", totale);

        } else {
                    if(comp==2)  {
                            quotavar=0.8594;
                            totale=quotavar*qfmq;
                            printf("Il totale dovuto da pagare è di: %f", totale);

                    } else {
                                    if(comp==3) {
                                            quotavar=0.9599;
                                            totale=quotavar*qfmq;
                                            printf("Il totale dovuto da pagare è di: %f", totale);
                                    } else {
                                                if(comp==4) {
                                                    quotavar=1.0423;
                                                    totale=quotavar*qfmq;
                                                    printf("Il totale dovuto da pagare è di: %f", totale);
                                                } else {
                                                        if(comp==5) {
                                                                        quotavar=1.1246;
                                                                        totale=quotavar*qfmq;
                                                                        printf("Il totale dovuto da pagare è di: %f", totale);
                                                                } else {
                                                                        quotavar=1.1886;
                                                                        totale=quotavar*qfmq;
                                                                        printf("Il totale dovuto da pagare è di: %f", totale);

                                                                 }
                                                        }
                                                }
                                    }
                    }
        }

    return 0;
}