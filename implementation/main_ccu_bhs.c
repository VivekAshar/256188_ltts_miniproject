#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "common.h"
#include "barcode.h"
#include "status.h"


int main()
{
    while(1)
    {
        int choice;
        printf("Welcome to Netaji Shubhash Chandra Bose International Airport baggage support");
        printf("Press 1 for submitting your baggage");
        printf("Press 2 for your baggage's status");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enter_info();
            break;

        case 2:
            get_status();
            break;
        
        default:
            printf("Invalid Chooice")
        }


    }
}