/***********************************************************
 Kyle Burgin, Isaac Myers, Stevie Alexis
 Mini Project 1- Table arrangment V.1.0  1dec2020  2020-12-1

A program that ask's the user for how many people are in the 
party and then decides which table to but them in based off 
their party size.

 ************************************************************/

#include <stdio.h>

int main ()
{
    int partyNum; 
  
    printf("How many people are in your party?");
    scanf("%d", &partyNum);

   
    if (partyNum == 1)
    {

        printf("We will seat you at the bar!");

    }
    if (partyNum == 2)
    {
        printf("We will seat you at a small table!");

    }
    if (partyNum >2 && partyNum <= 4)
    {
        printf("We will seat you at a medium table!");

    }
    if(partyNum >4 && partyNum <= 6)
    {
        printf("We will seat you at a large table!");
    }
    if(partyNum >6 && partyNum <= 8)
    {
        printf("We will seat you at a booth!");
    }
    
    
   
    
    
    
     
    return 0;


}