#include <stdio.h>

int main()
{
    char card_name[3];
    int count = 0;
    while (card_name[0] != 'q'){
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
            case 'q':
                break;
            default:
            val = atoi(card_name);
            if ((val > 10) || (val < 1)){
                printf("ERROR %d is not a valid card\n", val);
                }
            } 
            /* Checks if the value is between 3 and 6 (inclusive) */
            if ((val >2) && (val < 7)){
                count++;
            }
            /* Checks if the value is 10*/
            else if(val == 10){
                count--;
            }
            printf("Current count is: %i\n", count);
    }
    //printf("The card value is : %i\n", val); 
    return 0;
 }