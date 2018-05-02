//  TIA.c
//  Calcolo della Tariffa Igiene Ambientale (TIA)
//  Versione 1.0
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
            float quotavar1=39.27;
            float quotavar2=70.7005;
            float quotavar3=90.3375;
            float quotavar4=117.8585;
            float quotavar5=141.4010;
            float quotavar6=161.0380;
            float quotafix1=0.7313;
            float quotafix2=0.8594;
            float quotafix3=0.9599;
            float quotafix4=1.0423;
            float quotafix5=1.1246;
            float quotafix6=1.1886;
            float quotafissa=0;
            float totale=0;
            float tia=0;
            float iva=0;
			float stop=0;

    printf("Calcolo per la Tariffa Igiene Ambientale\nVersione 0.5\nFrancesco Masala\n");
    printf("Selezionare il territorio\nTerritorio Urbano=1\nTerritorio ExtraUrbano=2\n");
    scanf("%d", &tariffa); //selezione del territorio


    if (tariffa == 2) {     //selezione del territorio pt.2
            printf("Hai selezionato Territorio Extraurbano\n"); //annuncio del territorio

            printf("inserire il numero di metri quadrati della casa:\n");

            scanf("%d", &qfmq);

            printf("Resoconto totale:Metri quadrati della casa:%d\n", qfmq); //output dei dati per verifica

            if(qfmq<45) {
            	totale=(quotafix1*qfmq)+quotavar1;
                quotafissa=quotafix1*qfmq;
                iva=totale/10;
                tia=iva+totale;
                printf("Quota fissa = %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix1,qfmq,quotafissa,quotavar1,totale,iva,tia);  //output del totale dovuto da pagare
            }else{
        	
			        		if(qfmq>=46&&qfmq<=60) {
								totale=(quotafix2*qfmq)+quotavar2;
                				quotafissa=quotafix2*qfmq;
                				iva=totale/10;
                				tia=iva+totale;
                				printf("Quota fissa = %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix2,qfmq,quotafissa,quotavar2,totale,iva,tia);  //output del totale dovuto da pagare
							}else{
											if(qfmq>=61&&qfmq<=75) {
												totale=(quotafix3*qfmq)+quotavar3;
                								quotafissa=quotafix3*qfmq;
                								iva=totale/10;
                								tia=iva+totale;
                								printf("Quota fissa = %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix3,qfmq,quotafissa,quotavar3,totale,iva,tia);  //output del totale dovuto da pagare
											}else{
															if(qfmq>=76&&qfmq<=90) {
																quotafissa=quotafix4*qfmq;
																totale=quotafissa+quotavar4;
                												iva=totale/10;
                												tia=iva+totale;
                												printf("Quota fissa = %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix4,qfmq,quotafissa,quotavar4,totale,iva,tia);  //output del totale dovuto da pagare
															}else{
																			if(qfmq>=91&&qfmq<=105) {
																				totale=(quotafix5*qfmq)+quotavar5;
                																quotafissa=quotafix5*qfmq;
                																iva=totale/10;
                										tia=iva+totale;
                															printf("Quota fissa = %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix5,qfmq,quotafissa,quotavar5,totale,iva,tia);  //output del totale dovuto da pagare	
																}else{
																							totale=(quotafix6*qfmq)+quotavar6;
                																			quotafissa=quotafix6*qfmq;
                																			iva=totale/10;
                																			tia=iva+totale;
                																			printf("Quota fissa = %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix6,qfmq,quotafissa,quotavar6,totale,iva,tia);  //output del totale dovuto da pagare																			
																			}
																	}	
															}
													}   											
											}
		} else {

            printf("hai selezionato Territorio Urbano\n"); //annuncio del territorio
            printf("inserire il numero di componenti della famiglia:\n");
            scanf("%d", &comp);

            printf("inserire il numero di metri quadrati della casa:\n");

            scanf("%d", &qfmq);

            printf("Resoconto totale:\nComponenti della famiglia: %d\nMetri quadrati della casa:%d\n",comp,qfmq); //output dei dati per verifica
        if(comp==1) { //selezione dei componenti della famiglia attraverso comp
            totale=(quotafix1*qfmq)+quotavar1;//moltiplicazione quota fissa per metri quadri più quota variabile
            quotafissa=quotafix1*qfmq;
            iva=totale/10;      // ciao gv
            tia=iva+totale;
            printf("Quota fissa = %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix1,qfmq,quotafissa,quotavar1,totale,iva,tia);  //output del totale dovuto da pagare

        } else {
                    if(comp==2)  {
                            totale=(quotafix2*qfmq)+quotavar2;
                            iva=totale/10;
                            tia=iva+totale;
                            quotafissa=quotafix2*qfmq;
                            printf("Quota fissa= %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix2,qfmq,quotafissa,quotavar2,totale,iva,tia);
                    } else {
                                    if(comp==3) {
                                            totale=(quotafix3*qfmq)+quotavar3;
                                            iva=totale/10;
                                            tia=iva+totale;
                                            quotafissa=quotafix3*qfmq;
                                            printf("Quota fissa= %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix3,qfmq,quotafissa,quotavar3,totale,iva,tia);
                                    } else {
                                                if(comp==4) {
                                                    totale=(quotafix4*qfmq)+quotavar4;
                                                    iva=totale/10;
                                                    tia=iva+totale;
                                                    quotafissa=quotafix4*qfmq;
                                                    printf("Quota fissa= %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix4,qfmq,quotafissa,quotavar4,totale,iva,tia);
                                                } else {
                                                            if(comp==5) {
                                                                        totale=(quotafix5*qfmq)+quotavar5;
                                                                        iva=totale/10;
                                                                        tia=iva+totale;
                                                                        quotafissa=quotafix5*qfmq;
                                                                        printf("Quota fissa= %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva =€ %f\nTotale =€ %f", quotafix5,qfmq,quotafissa,quotavar5,totale,iva,tia);
                                                                    } else {
                                                                        totale=(quotafix6*qfmq)+quotavar6;
                                                                        iva=totale/10;
                                                                        tia=iva+totale;
                                                                        quotafissa=quotafix6*qfmq;
                                                                        printf("Quota fissa= %f x %d mq =€ %f\nQuota variabile =€ %f\nTotale Imponibile =€ %f\nIva = %f\nTotale =€ %f", quotafix6,qfmq,quotafissa,quotavar6,totale,iva,tia);
                                                                    }
                                                            }
                                                }
                                        }
                                }
                        }
printf ("programma eseguito correttamente");
    return 0;
}
