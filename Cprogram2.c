#include <stdio.h>

int main() {
    int choice;

    printf("Choose your B.Tech branch:\n");
    printf("1. Computer Science & Engineering (CSE)\n");
    printf("2. Electronics & Communication Engineering (ECE)\n");
    printf("3. Artificial Intelligence & Machine Learning (AIML)\n");
    printf("4. Mechanical Engineering (ME)\n");
    printf("Enter your choice (1-4): ");
    
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You have chosen Computer Science & Engineering (CSE).\n");
    } else if (choice == 2) {
        printf("You have chosen Electronics & Communication Engineering (ECE).\n");
    } else if (choice == 3) {
        printf("You have chosen Artificial Intelligence & Machine Learning (AIML).\n");
    } else if (choice == 4) {
        printf("You have chosen Mechanical Engineering (ME).\n");
    } else {
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
i
