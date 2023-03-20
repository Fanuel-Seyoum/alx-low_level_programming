#include <stdio.h>
#include <stdlib.h>

// struct student {
//     int age;
//     int grade;
// };


// int main(void)
// {
    // // struct student p = { 1, 3 };        /* initialized variable */
    // struct student q;                   /* uninitialized */
    // q = p;                     /* copy member values from p into q */
 
    // struct student s = { s.age = 10, s.grade = 5 };
    // struct student x;
    // x = s;
    // printf("The age of thes student is %d and he is in grade %d\n", s.age, s.grade);
    // printf("The age of thes student is %d and he is in grade %d\n", x.age+5, x.grade+5);
    // // struct student s;
    // // s.age = 10;
    // // s.grade = 10;

    // struct point {
    // int age;
    // int grade;
    // };
    // struct point student = { 12, 7 };
    // printf("The age of the student is %d and he is in grade %d\n", student.age, student.grade);
    // struct point *p = &student;  /* p is a pointer to student */
    
    // (*p).age = 13;
    // p->grade = 8;
    // printf("The age of the student is %d and he is in grade %d\n", student.age, student.grade);

//     return 0;

    
// }

// struct user
// {
//     char *name;
//     char *email;
//     int age;
// };

// int main(void)
// {
//     struct user yeabtsega;
//     yeabtsega.name =  "Bibi";
//     yeabtsega.email = "'bibi@gmail.com'";
//     yeabtsega.age = 2;
//     printf("The name of the child is %s and her email is %s while her age is %d\n", yeabtsega.name, yeabtsega.email, yeabtsega.age);
//     return(0);
// }

// int main (){
// typedef struct point point;
// struct point {
//    int    x;
//    int    y;
// };
// point p = {1, 2};
// return (0);
// }


int main()
{
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = { .y = 2, .x = 1 };
printf("The first value is %d and the second value is %d", p.y, p.x);
}