#include <stdio.h>
#include <strings.h>
#define SIZE 12

struct seat {
    int num;
    int reserved;
    char name[80];
};

void show(struct seat[SIZE], int, int);
char selection();

int main(void) {
    struct seat seats[SIZE] = {
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
        {6, 0},
        {7, 0},
        {8, 0},
        {9, 0},
        {10, 0},
        {11, 0},
        {12, 0}
    };

    char c;
    int num = 12;
    char name[80];
    int s;

    while ((c = selection()) != 'f') {
        switch (c) {
        case 'a':
            printf("%d\n", num);
            break;
        case 'b':
            show(seats, SIZE, 0);
            break;
        case 'c':
            show(seats, SIZE, 1);
            break;
        case 'd':
            printf("Plz input name: ");
            scanf("%s", name);
            int s;
            do {
                printf("Plz input empty seat: ");
                if (scanf("%d", &s) != 1) {
                    while (getchar() != '\n') {
                        continue;
                    }
                    continue;
                }
            } while (seats[s - 1].reserved == 1);

            seats[s - 1].reserved = 1;
            strcpy(seats[s - 1].name, name);
            num--;
            break;
        case 'e':
            do {
                printf("Plz input a not empty seat: ");
                scanf("%d", &s);
            } while (seats[s - 1].reserved == 0);
            seats[s - 1].reserved = 0;
            num++;
            break;
        default:
            break;
        }
        while (getchar() != '\n') {
            continue;
        }
    }
    
    return 0;
}

void show(struct seat seats[SIZE], int size, int type) {
    for (int i = 0; i < size; i++) {
        if (seats[i].reserved == 1) continue;
        if (type == 0) printf("seat %d is empty\n", seats[i].num);
        else printf("seat %c is empty\n", i + 'A');
    }
}

char selection() {
    printf("Choose~\n");
    printf("a) show number of empty seats\n");
    printf("b) show list of empty seats\n");
    printf("c) show alpha list of empty seats\n");
    printf("d) assign a customer\n");
    printf("e) delete a reserv\n");
    printf("f) quit\n");

    char c;
    if (scanf("%c", &c) == 1) return c;
    else return 'f';
}