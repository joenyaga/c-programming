/*
Author:Joe Nyaga
Reg Number:BCS-05-0071/2026
Description:program to ask the lecturer to enter a student's marks
Date:06/10/2026
*/
#include <stdio.h>

int main() {
    int mark;
    char choice;

    do {
        printf("Enter student's mark (0-100): ");
        scanf("%d", &mark);

        while (mark < 0 || mark > 100) {
            printf("Invalid mark! Please enter a mark between 0 and 100: ");
            scanf("%d", &mark);
        }

        if (mark >= 80) {
            printf("Mark: %d, Grade: A\n", mark);
        }
        else if (mark >= 70) {
            printf("Mark: %d, Grade: B\n", mark);
        }
        else if (mark >= 60) {
            printf("Mark: %d, Grade: C\n", mark);
        }
        else if (mark >= 50) {
            printf("Mark: %d, Grade: D\n", mark);
        }
        else {
            printf("Mark: %d, Grade: F\n", mark);
        }

        printf("Do you want to enter another student's mark? (y/n): ");
        scanf(" %c", &choice);

		} while (choice == 'y' || choice == 'Y');

        printf("Program ended.\n");

        return 0;
}