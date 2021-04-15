#ifndef __AIRLINE_H__
#define __AIRLINE_H__


#include "barcode.h"


void spicejet(Baggage *temp);


void spicejet_load(long int *belt, int *count, long int pnr);


void spicejet_min_traffic();


void spicejet_screening(Baggage *temp);


void spicejet_faulty(Baggage *temp);


void spicejet_loading();

#endif
