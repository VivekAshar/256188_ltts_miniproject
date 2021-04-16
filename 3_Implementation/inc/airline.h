#ifndef __AIRLINE_H__
#define __AIRLINE_H__


#include "barcode.h"




// SPICEJET 

void spicejet(Baggage *temp);


void spicejet_load(long int *belt, int *count, long int pnr);


long int *spicejet_min_traffic();


void spicejet_screen(Baggage *temp);





// INDIGO

void indigo(Baggage *temp);


void indigo_load(long int *belt, int *count, long int pnr);


long int *indigo_min_traffic();


void indigo_screen(Baggage *temp);




// AIRINDIA

void airindia(Baggage *temp);


void airindia_load(long int *belt, int *count, long int pnr);


long int *airindia_min_traffic();


void airindia_screen(Baggage *temp);




// VISTARA


void vistara(Baggage *temp);


void vistara_load(long int *belt, int *count, long int pnr);


long int *vistara_min_traffic();


void vistara_screen(Baggage *temp);



// AIRASIA


void airasia(Baggage *temp);


void airasia_load(long int *belt, int *count, long int pnr);


long int *airasia_min_traffic();


void airasia_screen(Baggage *temp);




#endif
