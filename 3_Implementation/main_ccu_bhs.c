#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "barcode.h"
#include "status.h"
#include "airline.h"


// DECLARATION OF GLOBAL VARIABLES

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



extern Baggage baggage_list[1000]; // an array of every defined baggage

extern long int barcode_list[1000]; // an array of every barcode generated

extern int baggage_count; // total baggage submitted in the airport for the day

extern int spicejet_count;    // total count of pessengers for spicejet
extern int indigo_count;      // total count of pessengers for indigo   
extern int airindia_count;    // total count of pessengers for airindia
extern int vistara_count;     // total count of pessengers for vistara
extern int airasia_count;     // total count of pessengers for airasia




// conveyor belts after classification as per the airline - post barcode reading
// every conveyor belt holds the barcode of every bag on it 

extern long int *s;
extern long int *g;
extern long int *i;
extern long int *v;
extern long int *a;


extern int s_count; // count of the baggage on the conveyor belt of spicejet - s1
extern int g_count; // count of the baggage on the conveyor belt of spicejet - s2
extern int i_count; // count of the baggage on the conveyor belt of spicejet - s3
extern int v_count; // count of the baggage on the conveyor belt of spicejet - s4
extern int a_count; // count of the baggage on the conveyor belt of spicejet - s5



// conveyor belts pre-screening for Spicejet
// every conveyor belt holds the barcode of every bag on it 

extern long int *s1;
extern long int *s2;
extern long int *s3;
extern long int *s4;
extern long int *s5;


extern int s1_count; // count of the baggage on the conveyor belt of spicejet - s1
extern int s2_count; // count of the baggage on the conveyor belt of spicejet - s2
extern int s3_count; // count of the baggage on the conveyor belt of spicejet - s3
extern int s4_count; // count of the baggage on the conveyor belt of spicejet - s4
extern int s5_count; // count of the baggage on the conveyor belt of spicejet - s5


// conveyor belts pre-screening for Indigo
// every conveyor belt holds the barcode of every bag on it

extern long int *g1;
extern long int *g2;
extern long int *g3;
extern long int *g4;
extern long int *g5;


extern int g1_count; // count of the baggage on the conveyor belt of indigo - g1
extern int g2_count; // count of the baggage on the conveyor belt of indigo - g2
extern int g3_count; // count of the baggage on the conveyor belt of indigo - g3
extern int g4_count; // count of the baggage on the conveyor belt of indigo - g4
extern int g5_count; // count of the baggage on the conveyor belt of indigo - g5

// conveyor belts pre-screening for AirIndia
// every conveyor belt holds the barcode of every bag on it

extern long int *i1;
extern long int *i2;
extern long int *i3;
extern long int *i4;
extern long int *i5;

extern int i1_count; // count of the baggage on the conveyor belt of airindia - g1
extern int i2_count; // count of the baggage on the conveyor belt of airindia - g2
extern int i3_count; // count of the baggage on the conveyor belt of airindia - g3
extern int i4_count; // count of the baggage on the conveyor belt of airindia - g4
extern int i5_count; // count of the baggage on the conveyor belt of airindia - g5

// conveyor belts pre-screening for Vistara
// every conveyor belt holds the barcode of every bag on it

extern long int *v1;
extern long int *v2;
extern long int *v3;
extern long int *v4;
extern long int *v5;

extern int v1_count; // count of the baggage on the conveyor belt of vistara - v1
extern int v2_count; // count of the baggage on the conveyor belt of vistara - v2
extern int v3_count; // count of the baggage on the conveyor belt of vistara - v3
extern int v4_count; // count of the baggage on the conveyor belt of vistara - v4
extern int v5_count; // count of the baggage on the conveyor belt of vistara - v5


// conveyor belts pre-screening for AirAsia
// every conveyor belt holds the barcode of every bag on it

extern long int *a1;
extern long int *a2;
extern long int *a3;
extern long int *a4;
extern long int *a5;


extern int a1_count; // count of the baggage on the conveyor belt of airasia - a1
extern int a2_count; // count of the baggage on the conveyor belt of airasia - a2
extern int a3_count; // count of the baggage on the conveyor belt of airasia - a3
extern int a4_count; // count of the baggage on the conveyor belt of airasia - a4
extern int a5_count; // count of the baggage on the conveyor belt of airasia - a5







// conveyor belts post-screening for faulty baggage
// conveyor belt holds the barcode of every bag on it


extern long int *c;

extern int c_count; // count of the baggage on the conveyor belt of faulty baggage - c




//INITIALISATION  OF GLOBAL EXTERN VARIABLES

baggage_count=0;     // initaial count of the total baggage


spicejet_count=0;    // initial count of pessengers for spicejet
indigo_count=0;      // initial count of pessengers for indigo   
airindia_count=0;    // initial count of pessengers for airindia
vistara_count=0;     // initial count of pessengers for vistara
airasia_count=0;     // initial count of pessengers for airasia


s=(long int*)malloc(20*sizeof(long int));
g=(long int*)malloc(20*sizeof(long int));
i=(long int*)malloc(20*sizeof(long int));
v=(long int*)malloc(20*sizeof(long int));
a=(long int*)malloc(20*sizeof(long int)); 

s_count=0; // initial count of the baggage on the conveyor belt of spicejet
g_count=0; // initial count of the baggage on the conveyor belt of indigo
i_count=0; // initial count of the baggage on the conveyor belt of airindia
v_count=0; // initial count of the baggage on the conveyor belt of vistara
a_count=0; // initial count of the baggage on the conveyor belt of airasia


s1=(long int*)malloc(20*sizeof(long int));
s2=(long int*)malloc(20*sizeof(long int));
s3=(long int*)malloc(20*sizeof(long int));
s4=(long int*)malloc(20*sizeof(long int));
s5=(long int*)malloc(20*sizeof(long int));


s1_count=0; // initial count of the baggage on the conveyor belt of spicejet - s1
s2_count=0; // initial count of the baggage on the conveyor belt of spicejet - s2
s3_count=0; // initial count of the baggage on the conveyor belt of spicejet - s3
s4_count=0; // initial count of the baggage on the conveyor belt of spicejet - s4
s5_count=0; // initial count of the baggage on the conveyor belt of spicejet - s5


g1=malloc(20*sizeof(long int));
g2=malloc(20*sizeof(long int));
g3=malloc(20*sizeof(long int));
g4=malloc(20*sizeof(long int));
g5=malloc(20*sizeof(long int));


g1_count=0; // initial count of the baggage on the conveyor belt of indigo - g1
g2_count=0; // initial count of the baggage on the conveyor belt of indigo - g2
g3_count=0; // initial count of the baggage on the conveyor belt of indigo - g3
g4_count=0; // initial count of the baggage on the conveyor belt of indigo - g4
g5_count=0; // initial count of the baggage on the conveyor belt of indigo - g5



i1=malloc(20*sizeof(long int));
i2=malloc(20*sizeof(long int));
i3=malloc(20*sizeof(long int));
i4=malloc(20*sizeof(long int));
i5=malloc(20*sizeof(long int));

i1_count=0; // initial count of the baggage on the conveyor belt of airindia - i1
i2_count=0; // initial count of the baggage on the conveyor belt of airindia - i2
i3_count=0; // initial count of the baggage on the conveyor belt of airindia - i3
i4_count=0; // initial count of the baggage on the conveyor belt of airindia - i4
i5_count=0; // initial count of the baggage on the conveyor belt of airindia - i5

v1=malloc(20*sizeof(long int));
v2=malloc(20*sizeof(long int));
v3=malloc(20*sizeof(long int));
v4=malloc(20*sizeof(long int));
v5=malloc(20*sizeof(long int));

v1_count=0; // initial count of the baggage on the conveyor belt of vistara - v1
v2_count=0; // initial count of the baggage on the conveyor belt of vistara - v2
v3_count=0; // initial count of the baggage on the conveyor belt of vistara - v3
v4_count=0; // initial count of the baggage on the conveyor belt of vistara - v4
v5_count=0; // initial count of the baggage on the conveyor belt of vistara - v5

a1=malloc(20*sizeof(long int));
a2=malloc(20*sizeof(long int));
a3=malloc(20*sizeof(long int));
a4=malloc(20*sizeof(long int));
a5=malloc(20*sizeof(long int));

a1_count=0; // initial count of the baggage on the conveyor belt of airasia - a1
a2_count=0; // initial count of the baggage on the conveyor belt of airasia - a2
a3_count=0; // initial count of the baggage on the conveyor belt of airasia - a3
a4_count=0; // initial count of the baggage on the conveyor belt of airasia - a4
a5_count=0; // initial count of the baggage on the conveyor belt of airasia - a5

c=malloc(100*sizeof(long int));

c_count=0; // count of the baggage on the conveyor belt of faulty baggage - c


int main()
{

    while(1)
    {
        int choice;
        printf("Welcome to Netaji Shubhash Chandra Bose International Airport baggage support\n");
        printf("Press 1 for submitting your baggage\n");
        printf("Press 2 for your baggage's status\n");
        scanf("%d",&choice);
        int failure; // success=0 failure=1
        switch (choice)
        {
        case 1:
            failure=enter_info();
            break;

        case 2:
            failure=get_status();
            break;
        
        default:
            printf("Invalid Chooice");
            continue;
        }

        if (failure)
        {
            printf("TRY AGAIN");
            continue;
        }
        else
        {
            printf("HAPPY JOURNEY\n");
        }
    }                                            // while loop ends 
}                                                // main ends