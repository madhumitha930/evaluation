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
		printf(" you selected aiml:\n");
break;
	    case 3:
printf(" you selected ece:\n");
break;
        }
    }
    
    return 0;
}
