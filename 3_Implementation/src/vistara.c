#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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




void vistara(Baggage *temp) // main function for vistara airline
{
    int *min_count; // To hold the current capacity of the pre-screening conveyor belt with least traffic for vistara
    

    temp->Post_read="v";

    vistara_load(v,&v_count,temp->Barcode);
    (temp->conveyor)++;

    long int *min_belt = vistara_min_traffic(temp);
    
    if (temp->Pre_screen=="v1")
    {
        min_count=&v1_count;
    }

    if (temp->Pre_screen=="v2")
    {
        min_count=&v2_count;
    }

    if (temp->Pre_screen=="v3")
    {
        min_count=&v3_count;
    }

    if (temp->Pre_screen=="v4")
    {
        min_count=&v4_count;
    }

    if (temp->Pre_screen=="v5")
    {
        min_count=&v5_count;
    }


    vistara_load(min_belt, min_count, temp->Barcode);
    (temp->conveyor)++;

    vistara_screen(temp);

}

void vistara_screen(Baggage *temp)
{
    int random=(rand()%10);
    if (random==0)
    {
        temp->Post_screen="c";
        vistara_load(c,&c_count,temp->Barcode);
        printf("Your baggage has a contra-band, please collect it from the Baggage clearance area near gate 10 and clear it\n")
    }
    else
    {
        switch(temp->Destination)
        {
            case DELHI:
            temp->Post_screen="vd";
            break;

            case MUMBAI:
            temp->Post_screen="vm";
            break;

            case BANGALORE:
            temp->Post_screen="vb";
            break;

            case CHENNAI:
            temp->Post_screen="vc";
            break;

            case HYDERABAD:
            temp->Post_screen="vh";
            break;

            case AHMEDABAD:
            temp->Post_screen="va";
            break;

            case COCHIN:
            temp->Post_screen="vk";
            break;

            case GOA:
            temp->Post_screen="vg";
            break;

            case SILIGURI:
            temp->Post_screen="vs";
            break;
        }

        printf("Your baggage took the path\n");
        printf("%s --> %s --> %s", temp->Post_read, temp->Pre_screen, temp->Post_screen);
        printf("Your baggage has been succesfully loaded on to the flight bounded to %s\n", temp->Destination);
    }
}

void vistara_load(long int *belt, int *count,long int PNR) // To load a given baggage onto a given conveyor belt for vistara
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

long int *vistara_min_traffic(Baggage *temp1)
{
    int arr_temp[5]={v1_count, v2_count , v3_count , v4_count, v5_count};

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
        temp1->Pre_screen="v1";
        return v1;
    }
    if (min_index==1)
    {
        temp1->Pre_screen="v2";
        return v2;
    }
    if (min_index==2)
    {
        temp1->Pre_screen="v3";
        return v3;
    }
    if (min_index==3)
    {
        temp1->Pre_screen="v4";
        return v4;
    }
    if (min_index==4)
    {
        temp1->Pre_screen="v5";
        return v5;
    }

}