#include <stdio.h>

int main()
{
    char card_name[3];
    puts("Enter the Card Name: \t");
    scanf("%2s", card_name);
    int val = 0;
   switch(card_name[0]){
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
        val = atoi(card_name);
            } 
    /* Checks if the value is between 3 and 6 (inclusive) */
    if ((val >2) && (val < 7)){
        puts("Count has gone up");
    }
    /* Checks if the value is 10*/
    else if(val == 10){
        puts("Count has gone down");
    }
 
    //printf("The card value is : %i\n", val); 
    return 0;
 }