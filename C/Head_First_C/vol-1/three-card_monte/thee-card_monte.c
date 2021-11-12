#include <stdio.h>

/* This doesn't work because when computer loads string literal. It stores the memory into constant stack which only read only
so the sting cant be updated */

/*To solve this make a copy of the string literal using array variable */

/*
int main()
{
    char *cards = "JKQ";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[2] = cards[1];
    cards[1] =  a_card;
    puts(cards);
    return 0;   

}
*/

/* Rearranged code */

int main()
{
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);
    return(0); 
}