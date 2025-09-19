/*
 * Name & Surname: Melih BULUT.
 * Date: 08.03.2022
 * The purpose of the program: Printing Fibonacci numbers as desired
 */

#include <stdio.h>
#include <conio.h>
// The part where the calculations of case 1 are made.
void AdditionAndAssignment(int assignedNumber) {
    int firstAssignedValue = 0, secondAssignedValue = 1;
    int nextValue;
    printf("Result: ");
    for (int i = 0; i < assignedNumber; i++) {
        nextValue = firstAssignedValue + secondAssignedValue;
        firstAssignedValue = secondAssignedValue;
        secondAssignedValue = nextValue;
        printf("%d ", firstAssignedValue);
    }
}
// The part where the calculations of case 2 are made.
void enteredRange(int assignedNumber1, int assignedNumber2) {
    int firstAssignedValue = 0, secondAssignedValue = 1;
    int nextValue;
    printf("Result: ");
    for (;;) {
        nextValue = firstAssignedValue + secondAssignedValue;
        firstAssignedValue = secondAssignedValue;
        secondAssignedValue = nextValue;
        if(firstAssignedValue >= assignedNumber1 && firstAssignedValue <= assignedNumber2){
            printf("%d ", firstAssignedValue);
        }else if(firstAssignedValue > assignedNumber2){
            break;
        }

    }
}
// The part where the calculations of case 3 are made.
void singleValue(int assignedNumber){
    int firstAssignedValue = 0, secondAssignedValue = 1;
    int nextValue;
    printf("Result: ");
    for (int i = 0; i < assignedNumber; i++) {
        nextValue = firstAssignedValue + secondAssignedValue;
        firstAssignedValue = secondAssignedValue;
        secondAssignedValue = nextValue;
    }
    printf("%d ", firstAssignedValue);
}
// The part where the calculations of case 4 are made.
void pascalTriangle(int rows){
    int middle = 1, space, i, j;
    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                middle = 1;
            else
                middle = middle * (i - j + 1) / j;
            printf("%4d", middle);
        }
        printf("\n");
    }
    int firstAssignedValue = 0, secondAssignedValue = 1;
    int nextValue;
    printf("Result: ");
    for (int i = 0; i < rows; i++) {
        nextValue = firstAssignedValue + secondAssignedValue;
        firstAssignedValue = secondAssignedValue;
        secondAssignedValue = nextValue;
        printf("%d ", firstAssignedValue);
    }

}

    int main() {
        char runAgain;
        while (1) {//I created an infinite loop with while to run it again until it fails.
            float numberRankings;
            float minValue, maxValue;
            float single;
            float pascal;
            int chooseAction;
            int substitution, transfer;
            printf("_WELCOME TO THE FIBONACCI PROGRAM_\n\n");
            printf("1) To print the number of Fibonacci sequences entered.\n"
                   "2) To print the fibonacci numbers between the 2 entered numbers.\n"
                   "3) Printing only the Fibonacci number in the entered sequence.\n"
                   "4)Printing Pascal's triangle and fibonacci numbers\n"
                   "Please select the type of transaction you want to do: \n");
            scanf("%d", &chooseAction);
            switch (chooseAction) {  //select the desired calculation type
                case 1:
                    printf("Enter the Fibonacci number you want to see : ");
                    scanf("%f", &numberRankings);
                    if (numberRankings - (int) numberRankings == 0) {
                        if (numberRankings > 0) {
                            AdditionAndAssignment(numberRankings);
                        } else {
                            printf("The entered value must be a positive number!\n");
                        }
                    } else {
                        printf("ERROR: The number you entered is a decimal number!");
                    }
                    if (numberRankings == fflush(stdin)) {
                break;}
                    fflush(stdout);
                    break;

                case 2:
                    while (1) {
                        printf("Enter 2 values to find the Fibonacci numbers in the range :");
                        scanf("%f %f", &minValue, &maxValue);
                        if (minValue < maxValue) {
                            if (minValue - (int) minValue == 0 && maxValue - (int) maxValue == 0) {
                                if (minValue > 0 && maxValue > 0) {
                                    enteredRange(minValue, maxValue);
                                    break;
                                } else {
                                    printf("The entered value must be a positive number!\n");
                                    break;
                                }
                            } else {
                                printf("ERROR: The number you entered is a decimal number!");
                                break;
                            }
                        } else {
                            if (minValue > maxValue) {
                                printf("You entered minValue greater than maxValue ! \n"
                                       "Do you want to swap the values of both?(N:No, Y:Yes)\n");
                                substitution = getch();
                                if (substitution != 'y' && substitution != 'Y') {
                                    if (substitution != 'n' && substitution != 'N') {
                                        printf("You entered indefinite value,the program has been closed!");
                                        break;
                                    } else {
                                        printf("Values are not replaced");
                                        break;
                                    }
                                } else {
                                    printf("Values have been replaced\n");
                                    transfer = minValue;
                                    minValue = maxValue;
                                    maxValue = transfer;
                                    enteredRange(minValue, maxValue);
                                    break;
                                }

                            } else {
                                printf("The minValue must be less than the maxValue in order to print the fibonacci numbers in a certain range!");
                            }
                            break;
                        }
                    }
                    if (minValue == fflush(stdin) || maxValue == fflush(stdin)) {
                        break;
                    }
                    fflush(stdout);
                    break;

                case 3:
                    printf("Enter the Fibonacci number you want to see : ");
                    scanf("%f", &single);
                    if (single - (int) single == 0) {
                        if (single > 0) {
                            singleValue(single);
                        } else {
                            printf("The entered value must be a positive number!\n");
                        }
                    } else {
                        printf("ERROR: The number you entered is a decimal number!");
                    }
                    if (single == fflush(stdin)) {
                        break;
                    }
                    fflush(stdout);
                    break;
                case 4:
                    printf("Enter how many lines of Pascal's triangle you want to see : ");
                    scanf("%f", &pascal);
                    if (pascal - (int) pascal == 0) {
                        if (pascal > 0) {
                            pascalTriangle(pascal);
                        } else {
                            printf("The entered value must be a positive number!\n");
                        }
                    } else {
                        printf("ERROR: The number you entered is a decimal number!");
                    }
                    if (pascal == fflush(stdin)) {
                        break;}
                    break;
                default:
                    printf("You entered an invalid value!\n");
                    if (chooseAction == fflush(stdin)) {
                        break;
                    }
            }
            // Restart function.
                printf("\nDo you want to run again?(N:No, Y:Yes)\n");
                scanf("%s", &runAgain);
                if (runAgain != 'y' && runAgain != 'Y') {
                    if (runAgain != 'n' && runAgain != 'N') {
                            printf("You entered indefinite value!");
                            break;
                    } else {
                        printf("Thank you using the program.");
                        break;
                    }
                }
        }
            fflush(stdout);

        return 0;
    }