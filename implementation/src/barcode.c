#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "common.h"
#include "barcode.h"
#include "test.h"

void enter_info()
{
    char airline[10];
    char destination[20];
    char travel_type[10];
    char final_destination[20];

    printf("USE BLOCK LETTERS");

    printf("ENTER YOUR AIRLINE'S NAME");
    gets(airline);

    printf("ENTER YOUR DESTINATION");
    gets(destination);

    printf("ENTER YOUR TRAVEL TYPE : DIRECT OR VIA");
    gets(travel_type);
    
    if (travel_type=="VIA")
    {
        printf("IF TRAVELLING VIA, ENTER YOUR FINAL DESTINATION");
        gets(final_destination);
    }
    else
    {
        final_destination="NONE";
    }

    Baggage temp0;
    temp0.Airline=airline;
    temp0.Destination=destination;
    temp0.Travel_type=travel_type;
    temp0.Final_destination=final_destination;
    temp0.Conveyor=0;
    temp0.Post_read="";
    temp0.Pre_screen="";
    temp0.Post_screen="";

    frame_barcode(&temp0);

}




void frame_barcode()