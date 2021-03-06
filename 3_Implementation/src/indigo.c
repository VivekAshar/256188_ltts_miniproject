#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "barcode.h"
#include "airline.h"

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




void indigo(Baggage *temp) // main function for indigo airline
{
    int *min_count; // To hold the current capacity of the pre-screening conveyor belt with least traffic for indigo
    

    temp->Post_read="g";

    indigo_load(g,&g_count,temp->Barcode);
    (temp->conveyor)++;

    long int *min_belt = indigo_min_traffic(temp);
    
    if (temp->Pre_screen=="g1")
    {
        min_count=&g1_count;
    }

    if (temp->Pre_screen=="g2")
    {
        min_count=&g2_count;
    }

    if (temp->Pre_screen=="g3")
    {
        min_count=&g3_count;
    }

    if (temp->Pre_screen=="g4")
    {
        min_count=&g4_count;
    }

    if (temp->Pre_screen=="g5")
    {
        min_count=&g5_count;
    }


    indigo_load(min_belt, min_count, temp->Barcode);
    (temp->conveyor)++;

    indigo_screen(temp);

}

void indigo_screen(Baggage *temp)
{
    int random=(rand()%10);
    if (random==0)
    {
        temp->Post_screen="c";
        indigo_load(c,&c_count,temp->Barcode);
        printf("Your baggage has a contra-band, please collect it from the Baggage clearance area near gate 10 and clear it\n")
    }
    else
    {
        switch(temp->Destination)
        {
            case DELHI:
            temp->Post_screen="gd";
            break;

            case MUMBAI:
            temp->Post_screen="gm";
            break;

            case BANGALORE:
            temp->Post_screen="gb";
            break;

            case CHENNAI:
            temp->Post_screen="gc";
            break;

            case HYDERABAD:
            temp->Post_screen="gh";
            break;

            case AHMEDABAD:
            temp->Post_screen="ga";
            break;

            case COCHIN:
            temp->Post_screen="gk";
            break;

            case GOA:
            temp->Post_screen="gg";
            break;

            case SILIGURI:
            temp->Post_screen="gs";
            break;
        }

        printf("Your baggage took the path\n");
        printf("%s --> %s --> %s", temp->Post_read, temp->Pre_screen, temp->Post_screen);
        printf("Your baggage has been succesfully loaded on to the flight bounded to %s\n", temp->Destination);
    }
}

void indigo_load(long int *belt, int *count,long int PNR) // To load a given baggage onto a given conveyor belt for indigo
{
    if (*count==20)
    {
        for (int i=1;i<20;i++)
        {
            belt[i-1]=belt[i];
        }
        belt[19]=PNR;
    }

    else if (*count==100)
    {
        for (int i=1;i<100;i++)
        {
            belt[i-1]=belt[i];
        }
        belt[99]=PNR;
    }

    else
    {
        belt[*(count)]=PNR;
        *count=*count+1;

    }
}

long int *indigo_min_traffic(Baggage *temp1)
{
    int arr_temp[5]={g1_count, g2_count , g3_count , g4_count, g5_count};

    int min = 21;
    int min_index;

    for(int i=0;i<5;i++)
    {
        if (arr_temp[i]<min)
        {
            min=arr_temp[i];
            min_index=i;
        }
    }

    if (min_index==0)
    {
        temp1->Pre_screen="g1";
        return g1;
    }
    if (min_index==1)
    {
        temp1->Pre_screen="g2";
        return g2;
    }
    if (min_index==2)
    {
        temp1->Pre_screen="g3";
        return g3;
    }
    if (min_index==3)
    {
        temp1->Pre_screen="g4";
        return g4;
    }
    if (min_index==4)
    {
        temp1->Pre_screen="g5";
        return g5;
    }

}