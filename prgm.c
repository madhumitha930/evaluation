#include <stdio.h>

int main() {
    int choice;

    while (1) { 
        printf("\nChoose an option:\n");
        printf("1. CSE (Computer Science & Engineering)\n");
        printf("2. AIML (Artificial Intelligence & Machine Learning)\n");
        printf("3. ECE (Electronics & Communication Engineering)\n");
        printf("4. Mechanical Engineering\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected CSE:\n");
                break;
            case 2:
                printf("You selected AIML:\n");
                break;
            case 3:
                printf("You selected ECE:\n");
                break;
            case 4:
                printf("You selected Mechanical:\n");
                break;
            case 5:
                printf("Exiting the program...\n");
                return 0; 
            default:
                printf("Invalid choice! Please enter a valid option (1-5).\n");
        }
    }
    
    return 0;
}
