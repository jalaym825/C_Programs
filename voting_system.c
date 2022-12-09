#include <stdio.h>
int main()
{
    char candidates[5][20] = {{"AJAY RAI"}, {"DR. AWADHESH SINGH"}, {"BABULAL"}, {"AMARNATH SINGH"}, {"RAJESH KUMAR SINGH"}};
    int votes[5] = {0}, age, ind, voted, i, j;

    for (i = 0; i < 5; i++)
    {
        printf("enter your age: ");
        scanf("%d", &age);
        if (age < 18)
            printf("you can't vote, as your age is under 18\n");
        else
        {
            voted = 0;
            while (!voted)
            {
                printf("here is the list of candidates standing in the election\n");
                for (j = 0; j < 5; j++)
                {
                    printf("%d) %s\n", j + 1, candidates[j]);
                }
                printf("enter the index number of the candidate to vote: ");
                scanf("%d", &ind);
                if (ind > 5 || ind < 1)
                {
                    printf("you have eneted invalid index number, try again.\n");
                    continue;
                }
                else
                {
                    votes[ind - 1]++;
                    voted = 1;
                }
            }
        }
    }

    printf("Voting Result:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%-20s - %d\n", candidates[i], votes[i]);
    }

    return 0;
}
