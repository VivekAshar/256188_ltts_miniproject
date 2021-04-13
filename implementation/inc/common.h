#ifndef __COMMON_H__
#define __COMMON_H__

// The structure that defines baggage

extern typedef struct         
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

extern baggage baggage_list[1000]; // an array of every defined baggage

extern long int barcode_list[1000]; // an array of every barcode generated

extern int baggage_count; // total baggage submitted in the airport for the day




// conveyor belts after classification as per the airline - post barcode reading
// every conveyor belt holds the barcode of every bag on it 

extern long int *s=malloc(20*sizeof(long int));
extern long int *g=malloc(20*sizeof(long int));
extern long int *i=malloc(20*sizeof(long int));
extern long int *v=malloc(20*sizeof(long int));
extern long int *a=malloc(20*sizeof(long int)); 






// conveyor belts pre-screening for Spicejet
// every conveyor belt holds the barcode of every bag on it 

extern long int *s1=malloc(20*sizeof(long int));
extern long int *s2=malloc(20*sizeof(long int));
extern long int *s3=malloc(20*sizeof(long int));
extern long int *s4=malloc(20*sizeof(long int));
extern long int *s5=malloc(20*sizeof(long int));


// conveyor belts pre-screening for Indigo
// every conveyor belt holds the barcode of every bag on it

extern long int *g1=malloc(20*sizeof(long int));
extern long int *g2=malloc(20*sizeof(long int));
extern long int *g3=malloc(20*sizeof(long int));
extern long int *g4=malloc(20*sizeof(long int));
extern long int *g5=malloc(20*sizeof(long int));

// conveyor belts pre-screening for AirIndia
// every conveyor belt holds the barcode of every bag on it

extern long int *i1=malloc(20*sizeof(long int));
extern long int *i2=malloc(20*sizeof(long int));
extern long int *i3=malloc(20*sizeof(long int));
extern long int *i4=malloc(20*sizeof(long int));
extern long int *i5=malloc(20*sizeof(long int));

// conveyor belts pre-screening for Vistara
// every conveyor belt holds the barcode of every bag on it

extern long int *v1=malloc(20*sizeof(long int));
extern long int *v2=malloc(20*sizeof(long int));
extern long int *v3=malloc(20*sizeof(long int));
extern long int *v4=malloc(20*sizeof(long int));
extern long int *v5=malloc(20*sizeof(long int));

// conveyor belts pre-screening for AirAsia
// every conveyor belt holds the barcode of every bag on it

extern long int *a1=malloc(20*sizeof(long int));
extern long int *a2=malloc(20*sizeof(long int));
extern long int *a3=malloc(20*sizeof(long int));
extern long int *a4=malloc(20*sizeof(long int));
extern long int *a5=malloc(20*sizeof(long int));








// conveyor belts post-screening for faulty baggage
// conveyor belt holds the barcode of every bag on it
extern long int *c=malloc(100*sizeof(long int));








// conveyor belts post-screening for Spicejet
// every conveyor belt holds the barcode of every bag on it

extern long int *sd=malloc(20*sizeof(long int));
extern long int *sm=malloc(20*sizeof(long int));
extern long int *sb=malloc(20*sizeof(long int));
extern long int *sc=malloc(20*sizeof(long int));
extern long int *sh=malloc(20*sizeof(long int));
extern long int *sa=malloc(20*sizeof(long int));
extern long int *sk=malloc(20*sizeof(long int));
extern long int *sg=malloc(20*sizeof(long int));
extern long int *ss=malloc(20*sizeof(long int));

// conveyor belts post-screening for Indigo
// every conveyor belt holds the barcode of every bag on it

extern long int *gd=malloc(20*sizeof(long int));
extern long int *gm=malloc(20*sizeof(long int));
extern long int *gb=malloc(20*sizeof(long int));
extern long int *gc=malloc(20*sizeof(long int));
extern long int *gh=malloc(20*sizeof(long int));
extern long int *ga=malloc(20*sizeof(long int));
extern long int *gk=malloc(20*sizeof(long int));
extern long int *gg=malloc(20*sizeof(long int));
extern long int *gs=malloc(20*sizeof(long int));

// conveyor belts post-screening for AirIndia
// every conveyor belt holds the barcode of every bag on it

extern long int *id=malloc(20*sizeof(long int));
extern long int *im=malloc(20*sizeof(long int));
extern long int *ib=malloc(20*sizeof(long int));
extern long int *ic=malloc(20*sizeof(long int));
extern long int *ih=malloc(20*sizeof(long int));
extern long int *ia=malloc(20*sizeof(long int));
extern long int *ik=malloc(20*sizeof(long int));
extern long int *ig=malloc(20*sizeof(long int));
extern long int *is=malloc(20*sizeof(long int));

// conveyor belts post-screening for Vistara
// every conveyor belt holds the barcode of every bag on it

extern long int *vd=malloc(20*sizeof(long int));
extern long int *vm=malloc(20*sizeof(long int));
extern long int *vb=malloc(20*sizeof(long int));
extern long int *vc=malloc(20*sizeof(long int));
extern long int *vh=malloc(20*sizeof(long int));
extern long int *va=malloc(20*sizeof(long int));
extern long int *vk=malloc(20*sizeof(long int));
extern long int *vg=malloc(20*sizeof(long int));
extern long int *vs=malloc(20*sizeof(long int));

// conveyor belts post-screening for Airasia
// every conveyor belt holds the barcode of every bag on it

extern long int *ad=malloc(20*sizeof(long int));
extern long int *am=malloc(20*sizeof(long int));
extern long int *ab=malloc(20*sizeof(long int));
extern long int *ac=malloc(20*sizeof(long int));
extern long int *ah=malloc(20*sizeof(long int));
extern long int *aa=malloc(20*sizeof(long int));
extern long int *ak=malloc(20*sizeof(long int));
extern long int *ag=malloc(20*sizeof(long int));
extern long int *as=malloc(20*sizeof(long int));





#endif