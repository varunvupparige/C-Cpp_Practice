#include <stdio.h>
#include <string.h>
#include <ctype.h>


int score(const char name[]) {
    int score = 0;

    for (int i = 0; name[i] != '\0'; i++) {
        char c = toupper(name[i]);

        if (c == 'B' || c == 'C' || c == 'M' || c == 'P')
            score += 3;
        else if (c == 'F' || c == 'H' || c == 'V' || c == 'W')
            score += 4;
        else if (c == 'J' || c == 'X')
            score += 8;
        else if (c == 'K')
            score += 5;
        else if (c >= 'A' && c <= 'Z')
            score += 1;   // default letter score
    }

    return score;
}


int main(void) {

    char Player1[20], Player2[20];

    printf("Enter the player 1's word: ");
    scanf("%s", Player1);

    printf("\nEnter the player 2's word: ");
    scanf("%s", Player2);

    printf("\nAnalyzing........\n");
    int size1 = strlen(Player1);
    int size2 = strlen(Player2);

    int score1 = score(Player1);
    int score2 = score(Player2);

    if (score1 > score2) printf("\n Player 1 wins");
    if (score1 < score2) printf("\n Player 2 wins");
    if (score1 == score2) printf("\n Tie");

    return 0;
}