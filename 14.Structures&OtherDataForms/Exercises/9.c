#include <stdio.h>
#include <strings.h>
#define SIZE 12

struct seat {
    int num;
    int reserved;
    char name[80];
};

struct flight {
    int num;
    int emtpy;
    struct seat seats[SIZE];
};

void handle(struct flight *, char);
void show(struct seat[SIZE], int, int);
int flight_selection();
char selection(int num);

int main(void) {
    struct flight flights[4] = {
        {102}, {311}, {444}, {519}
    };
    for (int i = 0; i < 4; i++) {
        flights[i].emtpy = 12;
        for (int j = 0; j < 12; j++) {
           flights[i].seats[j].num = j + 1;
           flights[i].seats[j].reserved = 0;
        }
    }

    int select;

    while ((select = flight_selection()) != 5) {
        while (getchar() != '\n') {
            continue;
        }

        char c;
        while ((c = selection(flights[select - 1].num)) != 'f') {
            while (getchar() != '\n') {
                continue;
            }
            handle(&flights[select - 1], c);
        }
    }

    return 0;
}

void handle(struct flight * flight, char c) {
    char choice;
    char name[80];
    int s;

    switch (c) {
    case 'a':
        printf("%d\n", flight->emtpy);
        break;
    case 'b':
        show(flight->seats, SIZE, 0);
        break;
    case 'c':
        show(flight->seats, SIZE, 1);
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
        } while (flight->seats[s - 1].reserved == 1);

        printf("name: %s, seat %d, confirm(y/n)?", name, s);
        while (getchar() != '\n') {
            continue;
        }
        int result = scanf("%c", &choice);
        if (result != 1 || choice != 'y') break;
        while (getchar() != '\n') {
            continue;
        }

        flight->seats[s - 1].reserved = 1;
        strcpy(flight->seats[s - 1].name, name);
        flight->emtpy--;
        break;
    case 'e':
        do {
            printf("Plz input a not empty seat: ");
            scanf("%d", &s);
        } while (flight->seats[s - 1].reserved == 0);
        flight->seats[s - 1].reserved = 0;
        flight->emtpy--;
        break;
    default:
        break;
    }
}

void show(struct seat seats[SIZE], int size, int type) {
    for (int i = 0; i < size; i++) {
        if (seats[i].reserved == 1) continue;
        if (type == 0) printf("seat %d is empty\n", seats[i].num);
        else printf("seat %c is empty\n", i + 'A');
    }
}

char selection(int num) {
    printf("Choose~ your flight is %d\n", num);
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

int flight_selection() {
    printf("Choose flight~\n");
    printf("1) 102\n");
    printf("2) 311\n");
    printf("3) 444\n");
    printf("4) 519\n");
    printf("5) quit\n");

    int c;
    if (scanf("%d", &c) == 1) return c;
    else return 5;
}
