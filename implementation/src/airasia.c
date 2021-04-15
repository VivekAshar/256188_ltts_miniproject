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




void airasia(Baggage *temp) // main function for airasia airline
{
    int *min_count; // To hold the current capacity of the pre-screening conveyor belt with least traffic for airasia
    

    temp->Post_read="a";

    airasia_load(a,&a_count,temp->Barcode);
    (temp->conveyor)++;

    long int *min_belt = airasia_min_traffic(temp);
    
    if (temp->Pre_screen=="a1")
    {
        min_count=&a1_count;
    }

    if (temp->Pre_screen=="a2")
    {
        min_count=&a2_count;
    }

    if (temp->Pre_screen=="a3")
    {
        min_count=&a3_count;
    }

    if (temp->Pre_screen=="a4")
    {
        min_count=&a4_count;
    }

    if (temp->Pre_screen=="a5")
    {
        min_count=&a5_count;
    }


    airasia_load(min_belt, min_count, temp->Barcode);
    (temp->conveyor)++;

    airasia_screen(temp);

}

void airasia_screen(Baggage *temp)
{
    int random=(rand()%10);
    if (random==0)
    {
        temp->Post_screen="c";
        airasia_load(c,&c_count,temp->Barcode);
        printf("Your baggage has a contra-band, please collect it from the Baggage clearance area near gate 10 and clear it\n")
    }
    else
    {
        switch(temp->Destination)
        {
            case DELHI:
            temp->Post_screen="ad";
            break;

            case MUMBAI:
            temp->Post_screen="am";
            break;

            case BANGALORE:
            temp->Post_screen="ab";
            break;

            case CHENNAI:
            temp->Post_screen="ac";
            break;

            case HYDERABAD:
            temp->Post_screen="ah";
            break;

            case AHMEDABAD:
            temp->Post_screen="aa";
            break;

            case COCHIN:
            temp->Post_screen="ak";
            break;

            case GOA:
            temp->Post_screen="ag";
            break;

            case SILIGURI:
            temp->Post_screen="as";
            break;
        }

        printf("Your baggage took the path\n");
        printf("%s --> %s --> %s", temp->Post_read, temp->Pre_screen, temp->Post_screen);
        printf("Your baggage has been succesfully loaded on to the flight bounded to %s\n", temp->Destination);
    }
}

void airasia_load(long int *belt, int *count,long int PNR) // To load a given baggage onto a given conveyor belt for airasia
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


long int *airasia_min_traffic(Baggage *temp1)
{
    int arr_temp[5]={a1_count, a2_count , a3_count , a4_count, a5_count};

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
        temp1->Pre_screen="a1";
        return a1;
    }
    if (min_index==1)
    {
        temp1->Pre_screen="a2";
        return a2;
    }
    if (min_index==2)
    {
        temp1->Pre_screen="a3";
        return a3;
    }
    if (min_index==3)
    {
        temp1->Pre_screen="a4";
        return a4;
    }
    if (min_index==4)
    {
        temp1->Pre_screen="a5";
        return a5;
    }

}