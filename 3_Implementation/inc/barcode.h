#ifndef __BARCODE_H__
#define __BARCODE_H__

typedef struct Baggage        
{
    long int Barcode;
    char Airline[10];
    char Destination[20];
    char Travel_type[10];
    char Final_destination[20];
    int Conveyor;
    char Post_read[5];
    char Pre_screen[5];
    char Post_screen[5];
} Baggage;

int enter_info();

int frame_barcode(Baggage* temp);

void read_barcode(Baggage* temp);

#endif














