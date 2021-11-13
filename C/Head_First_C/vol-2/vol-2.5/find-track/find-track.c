//for some shitty reason this code is not working and I Dont know why
//Searched the internet and found people with similar problem
//https://github.com/lekum/head-first-c/tree/master/chapter_2.5/jukebox_original

#include<stdio.h>
#include<string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "the girl from Iwo Jima"
};

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++){
        if (strstr(tracks[i], search_for))
            printf("Track %i: '%s'\n", i, tracks[i]);
        
    }
}  

int main()
{
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track(search_for);
    return 0;
}