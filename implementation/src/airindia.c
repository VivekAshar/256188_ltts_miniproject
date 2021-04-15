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




void airindia(Baggage *temp) // main function for airindia airline
{
    int *min_count; // To hold the current capacity of the pre-screening conveyor belt with least traffic for airindia
    

    temp->Post_read="i";

    airindia_load(i,&i_count,temp->Barcode);
    (temp->conveyor)++;

    long int *min_belt = airindia_min_traffic(temp);
    
    if (temp->Pre_screen=="i1")
    {
        min_count=&i1_count;
    }

    if (temp->Pre_screen=="i2")
    {
        min_count=&i2_count;
    }

    if (temp->Pre_screen=="i3")
    {
        min_count=&i3_count;
    }

    if (temp->Pre_screen=="i4")
    {
        min_count=&i4_count;
    }

    if (temp->Pre_screen=="i5")
    {
        min_count=&i5_count;
    }


    airindia_load(min_belt, min_count, temp->Barcode);
    (temp->conveyor)++;

    airindia_screen(temp);

}

void airindia_screen(Baggage *temp)
{
    int random=(rand()%10);
    if (random==0)
    {
        temp->Post_screen="c";
        airindia_load(c,&c_count,temp->Barcode);
        printf("Your baggage has a contra-band, please collect it from the Baggage clearance area near gate 10 and clear it\n")
    }
    else
    {
        switch(temp->Destination)
        {
            case DELHI:
            temp->Post_screen="id";
            break;

            case MUMBAI:
            temp->Post_screen="im";
            break;

            case BANGALORE:
            temp->Post_screen="ib";
            break;

            case CHENNAI:
            temp->Post_screen="ic";
            break;

            case HYDERABAD:
            temp->Post_screen="ih";
            break;

            case AHMEDABAD:
            temp->Post_screen="ia";
            break;

            case COCHIN:
            temp->Post_screen="ik";
            break;

            case GOA:
            temp->Post_screen="ig";
            break;

            case SILIGURI:
            temp->Post_screen="is";
            break;
        }

        printf("Your baggage took the path\n");
        printf("%s --> %s --> %s", temp->Post_read, temp->Pre_screen, temp->Post_screen);
        printf("Your baggage has been succesfully loaded on to the flight bounded to %s\n", temp->Destination);
    }
}

void airindia_load(long int *belt, int *count,long int PNR) // To load a given baggage onto a given conveyor belt for airindia
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

long int *airindia_min_traffic(Baggage *temp1)
{
    int arr_temp[5]={i1_count, i2_count , i3_count , i4_count, i5_count};

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
        temp1->Pre_screen="i1";
        return i1;
    }
    if (min_index==1)
    {
        temp1->Pre_screen="i2";
        return i2;
    }
    if (min_index==2)
    {
        temp1->Pre_screen="i3";
        return i3;
    }
    if (min_index==3)
    {
        temp1->Pre_screen="i4";
        return i4;
    }
    if (min_index==4)
    {
        temp1->Pre_screen="i5";
        return i5;
    }

}