#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    (marks >= 90 && marks <= 100)
        ? printf("Grade A \n"),  grade = 'A'
        : (marks >= 80 && marks <= 89)
            ? printf("Grade B \n"),  grade = 'B'
            : (marks >= 70 && marks <= 79)
                ? printf("Grade C \n"), grade = 'C'
                : (marks >= 60 && marks <= 69)
                    ? printf("Grade D \n"), grade = 'D'
                    : (marks >= 50 && marks <= 59)
                        ? printf("Grade E \n"), grade = 'E'
                        : (marks >= 0 && marks <= 49)
                            ? printf("Grade F \n"), grade ='F'
                            : printf("Please Enter the Correct Marks! \n");
    
    switch (grade)
        {
            case 'A':
                printf("Excellent work!. \n");
                break;
            case 'B':
                printf("Well Done!. \n");
                break;
            case 'C':
                printf("Good Job!. \n");
                break;
            case 'D':
                printf("You Passed, but you could do better!. \n");
                break;
            case 'E':
                printf("You Passed!. \n");
                break;
            case 'F':
                printf("Sorry, you failed!. \n");
                break;
            default:
                printf("Invalid Marks \n");
                break;
        }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E')
    {
        printf("Congratulations! You are eligible for the next level! \n");
        printf("--------------------------------------------------------");
    }
    else
    {
        printf("Please try again next time! \n");
        printf("--------------------------------------------------------");
    }
}