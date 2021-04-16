#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>





int enter_info()
{
    char airline[10];
    char destination[20];
    char travel_type[10];
    char final_destination[20];

    printf("USE BLOCK LETTERS ONLY");

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
        final_destination=NULL;
    }

    struct Baggage temp0;
    strcpy(temp0.Airline,airline);
    strcpy(temp0.Destination,destination);
    strcpy(temp0.Travel_type,travel_type);
    strcpy(temp0.Final_destination,final_destination);
    temp0.Conveyor=0;
    temp0.Post_read=NULL;
    temp0.Pre_screen=NULL;
    temp0.Post_screen=NULL;

    return frame_barcode(&temp0);

}




int frame_barcode(Baggage *temp)
{
    switch (temp->Airline)
    {
        case SPICEJET:
        temp->Barcode=1000000 + (++spicejet_count);
        break;

        case INDIGO:
        temp->Barcode=2000000 + (++indigo_count);
        break;

        case AIRINDIA:
        temp->Barcode=3000000 + (++airindia_count);
        break;

        case VISTARA:
        temp->Barcode=4000000 + (++vistara_count);
        break;

        case AIRASIA:
        temp->Barcode=3000000 + (++airasia_count);
        break;

        default:
        printf("INVALID CHOICE OF AIRLINE");
        return 1;

    }

    switch(temp->Destination)
    {
        case DELHI:
        temp->Barcode+=100000;
        break;

        case MUMBAI:
        temp->Barcode+=200000;
        break;

        case BANGALORE:
        temp->Barcode+=300000;
        break;

        case CHENNAI:
        temp->Barcode+=400000;
        break;

        case HYDERABAD:
        temp->Barcode+=500000;
        break;

        case AHMEDABAD:
        temp->Barcode+=600000;
        break;

        case COCHIN:
        temp->Barcode+=700000;
        break;

        case GOA:
        temp->Barcode+=800000;
        break;

        case SILIGURI:
        temp->Barcode+=900000;
        break;

        default:
        printf("INVALID CHOICE OF DESTINATION");
        return 1;


    }

    if (temp->Travel_type=="DIRECT")
    {
        temp->Barcode+=10000;
    }
    else if (temp->Travel_type="VIA")
    {
        temp->Barcode+=20000;
    }
    else
    {
        printf("INVALID TRAVEL TYPE");
        return 1;
    }

    printf("BAGGAGE SUBMISSION SUCCESSFUL");
    printf("YOUR LUGGAGE PNR IS %ld \n", temp->Barcode);

    baggage_list[baggage_count]=temp;
    barcode_list[baggage_count]=temp->Barcode;
    baggage_count++;




    read_barcode(temp);
}

void read_barcode(Baggage *temp)
{
    if (temp->Airline == "SPICEJET")
    {
        spicejet(temp);
    }

    else if (temp->Airline == "INDIGO")
    {
        indigo(temp);
    }

    else if (temp->Airline == "AIRINDIA")
    {
        airindia(temp);
    }

    else if (temp->Airline == "VISTARA")
    {
        vistara(temp);
    }

    else if (temp->Airline == "AIRASIA")
    {
        airasia(temp);
    }
}