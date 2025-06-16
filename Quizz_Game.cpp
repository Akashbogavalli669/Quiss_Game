#include <stdio.h>
#include <stdlib.h>

int askQuestion(const char* question, const char* options[], char correctOption) {
    char userAnswer;

    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, options[i]);
    }

    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &userAnswer);

    if (userAnswer == correctOption || userAnswer == correctOption + 32) {
        printf("Correct!\n");
        return 1;
    } else {
        printf("Wrong! Correct answer: %c\n", correctOption);
        return 0;
    }
}

int main() {
    int score = 0;
    printf("===== Welcome to the Quiz Game =====\n");

    const char* q1Options[] = {"Python", "C", "Java", "HTML"};
    score += askQuestion("1. Which language is used for web page structure?", q1Options, 'D');

    const char* q2Options[] = {"for", "if", "switch", "def"};
    score += askQuestion("2. Which of the following is not a C keyword?", q2Options, 'D');

    const char* q3Options[] = {"256", "512", "1024", "2048"};
    score += askQuestion("3. How many bytes are in 1 kilobyte (KB)?", q3Options, 'C');

    const char* q4Options[] = {"Linux", "Windows", "Mac", "All of the above"};
    score += askQuestion("4. Which operating systems are commonly used?", q4Options, 'D');

    const char* q5Options[] = {"RAM", "ROM", "SSD", "CPU"};
    score += askQuestion("5. Which one is volatile memory?", q5Options, 'A');

    printf("\n===== Quiz Finished =====\n");
    printf("Your score: %d/5\n", score);

    if (score == 5) printf("Excellent!\n");
    else if (score >= 3) printf("Good job!\n");
    else printf("Better luck next time.\n");

    return 0;
}

