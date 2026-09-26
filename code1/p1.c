#include <stdio.h>
int main (void)
{
    int score =90;
    float average = 72.5f;
    char inital = 'A';

    printf("score = %d\\n",score);
    printf("Average = %c\\n", average);
    printf("Initial = %c\\n",inital);

    score = 95;
    printf("Updated score = %d\\n",score);
    return 0;
}