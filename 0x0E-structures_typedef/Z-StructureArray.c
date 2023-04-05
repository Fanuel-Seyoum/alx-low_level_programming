#include <stdio.h>
#include <stdlib.h>


struct myStudent{
    char name[20];
    int sex;
    int age;
    int grade;
};

int main(){
  
    struct myStudent ebenezer_school[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Please enter the name of the student\n");
        scanf("%s", &ebenezer_school[i].name );
        printf("Please enter the age of %d student\n", i+1);
        scanf("%d", &ebenezer_school[i].age);
        printf("Please enter the grade of %d student\n", i+1);
        scanf("%d", &ebenezer_school[i].grade);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("The name of the student is %s\n", ebenezer_school[i].name);
        printf("The age of student %d is %d\n", i+1, ebenezer_school[i].age);
        printf("The grade student %d is %d\n", i+1, ebenezer_school[i].grade);
    }
}

#include <stdio.h>
#include<stdlib.h>

struct Node{
    int age;
    struct Node *nodePtr;
};

int main () {
    struct Node* head = malloc(sizeof(struct Node));
    head -> age = 45;
    head -> nodePtr = NULL;
    struct Node* current = malloc(sizeof(struct Node));
    current -> age = 46;
    current -> nodePtr = NULL;
    head -> nodePtr = current;
    struct Node* current = malloc(sizeof(struct Node));
    current -> age = 47;
    current -> nodePtr = NULL;
    
    return 0;

}

#include <stdio.h>
#include<stdlib.h>

struct Node{
    int age;
    struct Node *nodePtr;
};

int main () {
    struct Node* head = malloc(sizeof(struct Node));
    head -> age = 45;
    head -> nodePtr = NULL;
    struct Node* current = malloc(sizeof(struct Node));
    current -> age = 46;
    current -> nodePtr = NULL;
    head -> nodePtr = current;
    current -> nodePtr = malloc(sizeof(struct Node));
    current -> nodePtr -> age = 47;
    current -> nodePtr -> nodePtr = NULL;

    return 0; 
}
