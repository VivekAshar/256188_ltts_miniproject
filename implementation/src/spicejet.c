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




void spicejet(Baggage *temp) // main function for spicejet airline
{
    int *min_count; // To hold the current capacity of the pre-screening conveyor belt with least traffic
    

    temp->Post_read="s";

    spicejet_load(s,&s_count,temp->Barcode);
    (temp->conveyor)++;

    long int *min_belt = spicejet_min_traffic(temp);
    
    if (temp->Pre_screen=="s1")
    {
        min_count=&s1_count;
    }

    if (temp->Pre_screen=="s2")
    {
        min_count=&s2_count;
    }

    if (temp->Pre_screen=="s3")
    {
        min_count=&s3_count;
    }

    if (temp->Pre_screen=="s4")
    {
        min_count=&s4_count;
    }

    if (temp->Pre_screen=="s5")
    {
        min_count=&s5_count;
    }


    spicejet_load(min_belt, min_count, temp->Barcode);
    (temp->conveyor)++;

    spicejet_screen(temp);

}

void spicejet_screen(Baggage *temp)
{
    int random=(rand()%10);
    if (random==0)
    {
        temp->Post_screen="c";
        spicejet_load(c,&c_count,temp->Barcode);
        printf("Your baggage has a contra-band, please collect it from the Baggage clearance area near gate 10 and clear it\n")
    }
    else
    {
        switch(temp->Destination)
        {
            case DELHI:
            temp->Post_screen="sd";
            break;

            case MUMBAI:
            temp->Post_screen="sm";
            break;

            case BANGALORE:
            temp->Post_screen="sb";
            break;

            case CHENNAI:
            temp->Post_screen="sc";
            break;

            case HYDERABAD:
            temp->Post_screen="sh";
            break;

            case AHMEDABAD:
            temp->Post_screen="sa";
            break;

            case COCHIN:
            temp->Post_screen="sk";
            break;

            case GOA:
            temp->Post_screen="sg";
            break;

            case SILIGURI:
            temp->Post_screen="ss";
            break;
        }

        printf("Your baggage took the path\n");
        printf("%s --> %s --> %s", temp->Post_read, temp->Pre_screen, temp->Post_screen);
        printf("Your baggage has been succesfully loaded on to the flight bounded to %s\n", temp->Destination);
    }
}

void spicejet_load(long int *belt, int *count,long int PNR) // To load a given baggage onto a given conveyor belt
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

long int *spicejet_min_traffic(Baggage *temp1)
{
    int arr_temp[5]={s1_count, s2_count , s3_count , s4_count, s5_count};

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
        temp1->Pre_screen="s1";
        return s1;
    }
    if (min_index==1)
    {
        temp1->Pre_screen="s2";
        return s2;
    }
    if (min_index==2)
    {
        temp1->Pre_screen="s3";
        return s3;
    }
    if (min_index==3)
    {
        temp1->Pre_screen="s4";
        return s4;
    }
    if (min_index==4)
    {
        temp1->Pre_screen="s5";
        return s5;
    }

}