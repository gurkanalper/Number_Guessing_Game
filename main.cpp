#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>



void guess(int *number){
    int c;

    printf("one random numbers in [1,100]\n");
    srand(time(NULL));
    for (c = 1; c <= 1; c++) {
        *number = rand() % 101;
    }

}

int game(int *round, int *guess_number, int *player_number, char *status){


    for(*round=1; *round<= 3; (*round)++){
        printf("Enter a number between 0 to 100: ");
        scanf("%d", player_number);
        if(*player_number == *guess_number){
            printf("You win the game! The number was %d", *guess_number);
        }
        else if(*player_number >= *guess_number){
            printf("Try a smaller number!");
        }
        else if(*player_number <= *guess_number){
            printf("Try a bigger number!");
        }
    }
    return 0;
}

int main(){
    int account, bet_money, number, round, player_number;
    char status, answer, n, y;



        printf("Enter a start account for the game $: ");
        scanf("%d", &account);
        do{

            printf("\nEnter the bet amount: ");
            scanf("%d", &bet_money);

            account = account - bet_money;

            guess(&number);

            game(&round, &number, &player_number, &status );

            printf("\n Your account is %d $. Do you want to play again? please answer with (y/n) format ", account);
            fflush(stdin);
            scanf("%c", &answer);
        }
        while(answer == 'y');

        printf("\nThank you for playing. See you next time! ");


    return 0;


}

