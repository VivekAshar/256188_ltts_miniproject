# Requirements
## Introduction
This project implements a more automated, efficient and self-serving baggage tracking and management system that enables for the real-time tracking of the traveller's baggages and for self-assisted, easy and fast baggage clearnace of faulty baggages with contrabands, without the interventaion of Airport Authority officials.

## Research
First step to implementing a more efficient and aautomated system was to understand and deep-dive into the existing one at one of the airports with top-notch Baggagement Handling Systems (BHS) in the world.
![How the baggage management system works in Denver airport](https://science.howstuffworks.com/transport/flight/modern/baggage-handling.htm)

## Features
1. Hands-free entry at the airport : Dropping of the baggage with downloaded barcode tags at the entry gate itself, a step lcloser to automation.
2. Real-time tracking for travellers : Travellers get mobile notifications regarding their baggage movement on conveyor belts, if the baggage is faulty and on succssful loading of the baggage on the respective flight.
3. Real-time management for AAI officials : Authorities can get the status of every baggage and conveyor belt in the system.

## Defining Our System
1. Baggage Barcode formation : Based on user input of Airline used, destination, type of travel : DIRECT OR VIA and final destination, a barcode is formulated.
2. Baggage Barcode reader : Barcode is read for proper segregation and loading on the respective flight.
3. Identifying the conveyor belt with least traffic : For faster and more efficient approach.
3. Baggage Screening : Baggage is checked for contrabands ( Here, a random number generated is a contraband if it is a multiple of 10.

## SWOT ANALYSIs

## Who: Travellers and the AAI officials, both can rely on this BHS for efficient and reliable baggage management and tracking.

## What: A step closer to more automated, faster and efficient systems at airport.

## When: Travellers can use this system throughout their journey from the deperture airport to the arrivial airport. AAI officials can rely on this robust rel-time system on a daily basis.

## Where: Airports throughout the country and even globally, with more added features.

## How: A UI can be added to extend the functionality and encapsulate the product for public and authority usage.

**TBD**

# Detail requirements

## High Level Requirements:

ID        | Description                                                                                  | Status (Implemented/Future)

1_HR      | Form a connectivity air-map of our airport (Kolkata CCU) with all the connected destinations | Implemented


##  Low level Requirements:

ID     | Description                                                                                     | Status (Implemented/Future)

1_LR   | Formulate a unique PNR for every user based on the airline, destination and the travel type     | Implemented
