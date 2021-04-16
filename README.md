# Baggage tracking and management system for airports
This project was done as a part of the step-in program for L&amp;T Technology Services.

## Introduction
This project implements a more automated, efficient and self-serving baggage tracking and management system that enables for the real-time tracking of the traveller's baggages and for self-assisted, easy and fast baggage clearnace of faulty baggages with contrabands, without the interventaion of Airport Authority officials.

## Folder Structure
Folder             | Description
-------------------| ----------------------------------------------- 
`requirements`   | Documents detailing requirements and research
`architecture`   | Documents specifying design details
`implementation` | All code and documentation
`test_plan`      | Documents with test plans and procedures

PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
       |         |                |                |               |             |  
       |         |                |                |               |             |
       

## Challenges Faced and How Was It Overcome

1. Multi-threading approach : Since this is a real-time system, one thread is required to capture the inputs of the travellers and AAI officials, the other thread is required to efficiently move around the conveyor belts forward. Since I'm very new to the concept of multi-threads, it hasn't been implemented here.

2. Memory management : As the structural plan of my airports requires 80 conveyor belts, which are implemented as a pointer array of long int type to hold the PNR of the baggage, it was a challenge to efficiently manage my memory resources. 

3. Identifying a faulty bag : In this virtual implementation, to give rise to faulty bags with contrabands, a random number has been generated using the rand() function with p(faulty bag) = 1/10.

4.Real-time : It was a challenge to implement real-time scenarios which add the delay caused by the steady movement of bags on the conveyor belts and from one conveyor belt to the other.

## Learning Resources
1. [Baggage management system at Denver airport](https://science.howstuffworks.com/transport/flight/modern/baggage-handling.htm)
2. [github workflow](https://docs.github.com/en/actions/learn-github-action)
