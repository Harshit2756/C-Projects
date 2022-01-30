
//Harshit khnadelwal
/**/

#include <stdio.h>

int i, j;

struct cric_player
{
    char name[30];
    int age;
    int country;
    int category;
    int odi;
    int int_20;
    float batt_score;
    int wickets;
};

void country_code();
void num_batsman(struct cric_player cp[], int);
void average_Score(struct cric_player cp[], int);
void num_bowlers(struct cric_player cp[], int);
void max_wickets(struct cric_player cp[], int);
void display_Board(struct cric_player cp[], int);

int main()
{
    int choice, n;

    printf("\nEnter number of players: ");
    scanf("%d", &n);

    struct cric_player cp[n];

    for (i = 0; i < n; i++)
    {
        printf("\n************************************************");

        printf("\nEnter name of player %d: ", i + 1);
        scanf("%s", cp[i].name);

        printf("\nEnter age of player: ");
        scanf("%d", &cp[i].age);

        country_code();
        printf("\nEnter country of player: ");
        scanf("%d", &cp[i].country);

        printf("\n1. Batsman \n2. Bowler  \n3. Wicket-keeper \n4. All rounder");
        printf("\nEnter category of player: ");
        scanf("%d", &cp[i].category);

        printf("\nEnter number of ODI's played: ");
        scanf("%d", &cp[i].odi);

        printf("\nEnter number of International 20-20's played: ");
        scanf("%d", &cp[i].int_20);

        printf("\nEnter average batting score: ");
        scanf("%f", &cp[i].batt_score);

        printf("\nEnter total number of wickets taken: ");
        scanf("%d", &cp[i].wickets);
    }

    //displaying the entered information

    for (i = 0; i < n; i++)
    {
        printf("\n\n");
        printf("\n************************************************");

        printf("\nName of player %d: %s", i + 1, cp[i].name);

        printf("\nAge of player: %d", cp[i].age);

        printf("\nCountry of player: ");
        if (cp[i].country == 1)
            printf("India");
        else if (cp[i].country == 2)
            printf("England");
        else if (cp[i].country == 3)
            printf("Sri Lanka");
        else if (cp[i].country == 4)
            printf("Australia");
        else
            printf("\nPlease check input again.");

        printf("\n1. Batsman \n2. Bowler  \n3. Wicket-keeper \n4. All rounder");
        printf("\nCategory of player: ");
        if (cp[i].category == 1)
            printf("Batsman");
        else if (cp[i].category == 2)
            printf("Bowler");
        else if (cp[i].category == 3)
            printf("Wicket-keeper");
        else if (cp[i].category == 4)
            printf("All rounder");
        else
            printf("Please check input again.");

        printf("\nNumber of ODI's played: %d", cp[i].odi);

        printf("\nNumber of International 20-20's played: %d", cp[i].int_20);

        printf("\nAverage batting score: %f", cp[i].batt_score);

        printf("\nTotal number of wickets taken: %d", cp[i].wickets);
    }
    printf("\n\n---*---*---*---*---*---*---*---*---*---*---*---*---*---");

    while (1)
    {
        printf("\n");
        printf("\n1. Number of batsman of a particular country.");
        printf("\n2. Batsman with highest average score.");
        printf("\n3. Number of bowlers of a particular country.");
        printf("\n4. Bowler that has taken maximum no of wickets.");
        printf("\n5. Show a particular players entire DISPLAY BOARD INFORMATION .");
        printf("\n6. Exit.");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            num_batsman(cp, n);
            break;

        case 2:
            average_Score(cp, n);
            break;

        case 3:
            num_bowlers(cp, n);
            break;

        case 4:
            max_wickets(cp, n);
            break;

        case 5:
            display_Board(cp, n);
            break;

        case 6:
            return 0;

        default:
            printf("\nWrong choice . Enter again.");
            main();
        }

        printf("\n\n---*---*---*---*---*---*---*---*---*---*---*---*---*---");
    }

    return 0;
}

void country_code()
{
    printf("\n1. India");
    printf("\n2. England");
    printf("\n3. Sri Lanka");
    printf("\n4. Australia");
}

//1. Number of batsman of a particular country.
void num_batsman(struct cric_player cp[], int num)
{
    int coun;
    int num_batsman = 0;

    country_code();
    printf("\nEnter the country code for which number of batsman are to be displayed: ");
    scanf("%d", &coun);

    for (i = 0; i < num; i++)
    {

        if (coun == cp[i].country && cp[i].category == 1)
        {

            num_batsman++;
        }
    }

    printf("\nNumber of batsman are %d.", num_batsman);
}

//2. Batsman with highest average score.
void average_Score(struct cric_player cp[], int num)
{
    int max, k;

    max = cp[0].batt_score;

    for (i = 0; i < num; i++)
    {
        if (cp[i].category == 1)
        {
            if (cp[i].batt_score > cp[0].batt_score)
            {
                max = cp[i].batt_score;
                k = i;
            }
        }
    }

    printf("\nBatsman with highest average batting score is %s with score %d.", cp[k].name, max);
}

//3. Number of bowlers of a particular country.
void num_bowlers(struct cric_player cp[], int num)
{
    int coun;
    int num_bowlers = 0;

    country_code();
    printf("\nEnter the country code for which number of batsman are to be displayed: ");
    scanf("%d", &coun);

    for (i = 0; i < num; i++)
    {

        if (coun == cp[i].country && cp[i].category == 2)
        {

            num_bowlers++;
        }
    }

    printf("\nNumber of bowlers are %d.", num_bowlers);
}

//4. Bowler that has taken maximum no of wickets.
void max_wickets(struct cric_player cp[], int num)
{
    int max, k;

    max = cp[0].wickets;

    for (i = 0; i < num; i++)
    {
        if (cp[i].category == 2)
        {
            if (cp[i].wickets > cp[0].wickets)
            {
                max = cp[i].wickets;
                k = i;
            }
        }
    }

    printf("\nBowler who has taken maximum number of wickets is %s with score %d.", cp[k].name, max);
}

//5. Show a particular players entire Display board information.
void display_Board(struct cric_player cp[], int num)
{
    int player;

    printf("\nDISPLAY BOARD INFORMATION");
    for (i = 0; i < num; i++)
    {
        printf("\n%d. ", i + 1);
        printf("%s", cp[i].name);
    }

    printf("\n\nEnter particular player to display his information: ");
    scanf("%d", &player);

    for (i = 1; i <= num; i++)
    {
        if (player == i)
        {
            printf("\n");
            printf("\nName of player %d: %s", i, cp[i - 1].name);

            printf("\nAge of player: %d", cp[i - 1].age);

            printf("\nCountry of player: ");
            if (cp[i].country == 1)
                printf("India");
            else if (cp[i].country == 2)
                printf("England");
            else if (cp[i].country == 3)
                printf("West Indies");
            else if (cp[i].country == 4)
                printf("Australia");
            else
                printf("Please check again.");

            //printf("\n\n1. Batsman \n2. Bowler  \n3. Wicket-keeper \n4. All rounder
            printf("\nCategory of player: ");
            if (cp[i - 1].category == 1)
                printf("Batsman");
            else if (cp[i - 1].category == 2)
                printf("Bowler");
            else if (cp[i - 1].category == 3)
                printf("Wicket-keeper");
            else if (cp[i - 1].category == 4)
                printf("All rounder");
            else
                printf("Please check input again.");

            printf("\nNumber of ODI's played: %d", cp[i - 1].odi);

            printf("\nNumber of International 20-20's played: %d", cp[i - 1].int_20);

            printf("\nAverage batting score: %f", cp[i - 1].batt_score);

            printf("\nTotal number of wickets taken: %d", cp[i - 1].wickets);
        }
    }
}