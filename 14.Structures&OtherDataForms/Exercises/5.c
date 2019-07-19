#include <stdio.h>
#include <stdlib.h>
#define CSIZE 4

struct name {
    char first[80];
    char last[80];
};

struct student {
    struct name name;
    float grade[3];
    float average;
};
double average(struct student *);
double average_class(struct student[]);
void print_stu(struct student *);

int main(void) {
    struct student students[CSIZE];
    struct student stu;

    int count = 0;
    printf("Plz input first name:");
    while (scanf("%s", stu.name.first) == 1 && count < CSIZE) {
        printf("Plz input last name:");
        if (scanf("%s", stu.name.last) != 1) {
            exit(EXIT_FAILURE);
        };

        printf("Plz input grade:");
        if (scanf("%f %f %f", &stu.grade[0], &stu.grade[1], &stu.grade[2]) != 3) {
            exit(EXIT_FAILURE);
        };
        stu.average = average(&stu);
        print_stu(&stu);
        students[count++] = stu;
        if (count < CSIZE) printf("Plz input name:\n");
    }
    
    printf("class average is %f", average_class(students));
    return 0;
}

double average(struct student * stu) {
    return (stu->grade[0] + stu->grade[1] + stu->grade[2]) / 3;
}

double average_class(struct student stu[]) {
    float sum = 0.0;
    for (int i = 0; i < CSIZE; i++) {
        sum += stu[i].average;
    }
    return (sum / CSIZE);
}

void print_stu(struct student * stu) {
    printf("%s.%s average is %f\n", stu->name.first, stu->name.last, stu->average);
}
