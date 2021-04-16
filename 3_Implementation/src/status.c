#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "status.h"

void get_status()
{
    int choice;
    printf("ARE YOU A TRAVELLER OR AAI OFFICER?\n");
    printf("PRESS 1 FOR TRAVELLER AND 2 FOR AAI OFFICER\n");
    if (choice==1)
    {
        baggage_status();
    }
    else
    {
        coveyor_status();

    }

}

void baggage_status()
{
    long int PNR_temp;
    printf("ENTER THE PNR OF YOUR LUGGAGE %ld", &PNR_temp);
    

}