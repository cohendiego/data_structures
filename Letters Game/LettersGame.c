#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXGUESSES 5

//function prototypes with a comment for each one describing what the function does.
//Copy and paste from assignment

//function prototype
int SingleGame(char file_letter);
void GameRules();
char RetrieveGuess();
int GuessedIt(char answer, char input_letter);



int main()
{
	//declare additional variables
	int games;
	char file_letter;
	int PlayGames = 4,
		i = 0;
	int sentinel = 1;
	char userguess;
	int cow;
	//display instructions
	//open fileFILE* inptr; 
	//get number of games to play

	FILE* inptr;

	inptr = fopen("lettersin.txt", "r");

	GameRules();	//callin function to display rules
	userguess = RetrieveGuess();
	
	
	do
	{
		fscanf(inptr, "%c ", &file_letter);
		printf("%c\n", file_letter);
		fscanf(inptr, "%c ", &file_letter);
		printf("%c\n", file_letter);
		fscanf(inptr, "%c ", &file_letter);
		printf("%c\n", file_letter);
		fscanf(inptr, "%c ", &file_letter);
		printf("%c\n", file_letter);
	} while (sentinel != 1);


	printf("\nHow many games do you want to play (1-4)?");
	scanf("%d", &games);

	//cow = SingleGame(char file_letter);

	for (i = 0; i <= PlayGames; i++);
	{
		printf("\nLet's play game %d\n", i);
		fscanf(inptr, " %c", &file_letter);

		for (i = 0; i < PlayGames; i++)
		{
			//get a letter from file
			//Play one game
			//check for win or lose	
		}


		//close file
		return 0;
	}
}

//Function definitions
//copy and paste prototypes and comments from assignment. Then remove the ; from each

int SingleGame(char file_letter)
{
	int numGuesses = 0;
	while (numGuesses < MAXGUESSES)
	{
		char R;
		printf();
			R = RetrieveGuess();
	}
		//RetrieveGuess function call
		//GuessedIt function call
		//update counter for number of guesses used
		numGuesses = numGuesses + 1;
	
}

void GameRules()
{
	printf("Welcome\nYou Will Enter the Number of Gaames You Want To Play\nYou have 5 chances to Guess each letter\nLets Begin!\n");
}

char RetrieveGuess()
{
	char guess;
	printf("Enter a guess\n");
	scanf("%c", &guess);
}

int GuessedIt(char answer, char input_letter)
{
	int G;
	if (answer == input_letter);
		printf("You Guessed It");
	G = 1;
	else
		(answer == input_letter);
		printf("wrong");
		G = 0;
	return G;
}
