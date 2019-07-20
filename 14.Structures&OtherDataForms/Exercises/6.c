#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define SIZE 19

struct member {
    int number;

    char first[80];
    char last[80];

    int out;
    int kick;
    int move;
    int point;
    double rbi;
};

int main(int argc, char * argv[]) {
    char * filename = argv[1];
    FILE * fp;
    if ((fp = fopen(filename, "r")) == NULL) {
        exit(EXIT_FAILURE);
    }

    char * line[255];
    struct member members[SIZE];
    for (int i = 0; i < SIZE; i++) {
        struct member a = {i, "", "", 0, 0, 0, 0, 0.0};
        members[i] = a;
    }

    while (1) {
        int number;

        char first[80];
        char last[80];

        int out;
        int kick;
        int move;
        int point;

        if (fscanf(fp, "%d %s %s %d %d %d %d", &number, first, last, &out, &kick, &move, &point) != 7) {
            printf("Scan end.\n");
            break;
        }

        strcpy(members[number].first, first);
        strcpy(members[number].last, last);
        members[number].out += out;
        members[number].kick += kick;
        members[number].move += move;
        members[number].point += point;
        members[number].rbi = members[number].kick / members[number].out;
    }

    for (int i = 0; i < SIZE; i++) {
        if (members[i].out == 0) continue;
        printf("%d 号球员 %s %s 出场数 %d 击中数 %d rbi %lf\n", i, members[i].first, members[i].last, 
            members[i].out, members[i].kick, members[i].rbi);
    }
    
    return 0;
}