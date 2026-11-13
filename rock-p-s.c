#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//welcome
void myWelcome(void) {
    printf("===Welcome to 'Rock, Paper, Scissors' - The most basic yet classic game ever!===");
}
//Rule
    const char *words[3] = {
        "Rock",
        "Paper",
        "Scissors"
    };
//welcome
int main() {
    srand(time(NULL));
    myWelcome();
    printf("\n");
//word generator
 int total_words = sizeof(words) / sizeof(words[0]);
 int random_index = rand() % total_words;
//countdown
  int countdown;
  
    for (countdown = 3; countdown >= 0; countdown--)
    if(countdown == 0) { printf("Go!!!\n");
  } else 
  {printf("%d\n", countdown);}
  //User decision
  char decision[10];
  printf("Enter your decision: ");
  scanf("%9s", decision);
  // When user picks "rock"
  if (strcmp(decision, words[0] ) == 0){
    if (strcmp(words[random_index], words[2] ) == 0)
        {printf("You won!\n");}
     else if(strcmp(words[random_index], words[1] ) == 0)
        {printf("You lost!\n");}
      else 
        {printf("It is a tie!\n");}}
  // When picks "Paper"
  else if (strcmp(decision, words[1] ) == 0)
    if (strcmp(words[random_index], words[2]) == 0)
      {printf("You lost!\n");}
    else if(strcmp(words[random_index], words[1] ) == 0)
      {printf("It is a tie!\n");}
     else 
       {printf("You won!\n");}
  // When picks "Scissors"
  else if (strcmp(decision, words[2] ) == 0)
    if (strcmp(words[random_index], words[2] ) == 0)
      {printf("It is a tie!\n");}
     else if(strcmp(words[random_index], words[1] ) == 0)
      {printf("You won!\n");}
       else 
        {printf("You lost!\n");}
 else 
 {printf("Invalid! Please capitalize the first letter of your decision, and choose suitable decisions of the game!(ex: Rock)\n");}
 printf("The computer's choice was: %s\n", words[random_index]);
 return 0;
}

      
    
  

  
  
  

