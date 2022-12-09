/*Created By 22CE071_Jalay*/

#include <stdio.h>

int main()
{
    int sticks = 21, taken_sticks; // game_over=0=false;

    printf("game overview:\n\tthere are 21 sticks.\n\tyou have to pick sticks in between 1 to 4\n\tafter your pick, I will pick sticks.\n\tWhoever is forced to pick up the last match-stick loses the game.\n\n");

    while (sticks != 1)
    {
        printf("It's your turn.    (left sticks = %d): ", sticks);
        scanf("%d", &taken_sticks);
        if (taken_sticks > 4 || taken_sticks < 1)
        {
            printf("You can't pick %d sticks, You must pick sticks in this range: %d - %d\n", taken_sticks, 1, 4);
            continue;
        }
        sticks -= taken_sticks;       // picked by user
        sticks -= (5 - taken_sticks); // picked by computer
        printf("I picked %d sticks.\n", 5 - taken_sticks, sticks);
        // printf("I picked %d sticks. (left sticks = %d)\n", 5 - taken_sticks, sticks);
    }
    printf("\nOops, there is only 1 stick left.\n");
    printf("You loose the game :(.\n\n");

    printf("Created By 22CE071_Jalay");

    return 0;
}
