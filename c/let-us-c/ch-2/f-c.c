#include <stdio.h>

#define MALE 0
#define FEMALE 1
#define EXCELLENT 0
#define POOR 1
#define CITY 0
#define VILLAGE 1

int main(void)
{
    int health, age, gender, resident;
    printf("Enter health condition (0:Excellent, 1:Poor): ");
    scanf("%d", &health);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter gender (0:Male, 1:Female): ");
    scanf("%d", &gender);
    printf("Enter resident place(0:City, 1:Village): ");
    scanf("%d", &resident);
    if(health == EXCELLENT && (age >= 25 && age <=35) && resident == CITY && gender == MALE)
    {
        printf("The person should be insured.\n");
        printf("The premium is Rs. 4 per thousand.\n");
        printf("The person's policy amount cannot exceed Rs. 2 lakhs.\n");
    }
    return 0;
}