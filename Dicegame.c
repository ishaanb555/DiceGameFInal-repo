// Ishaan Bhattacharya testing a random number game
//preprocessor directives
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//constants and global variables

//function prototypes

//main
int main(){
    
    int user_choice;
    int dice_result;
    int exitflag = 0;
    while (exitflag == 0)
    {
    
    printf("Please enter a number: ");
    scanf("%d",&user_choice);
    srand(time(0));
    
    dice_result = (rand() % 6) + 1;

    if (dice_result == user_choice)
    {
        printf("You got it!\nYou're Guess of %d was correct as it was the same as the dice roll of %d\n",user_choice,dice_result);
        exitflag = 1;
    }
    else{
        printf("Next Time bud\nYou're guess was %d and the correct answer was %d\n", user_choice, dice_result);
    }
    }

    printf("GAME OVER!\n");

    return 0;
}


