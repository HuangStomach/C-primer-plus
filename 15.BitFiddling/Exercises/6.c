#include <stdio.h>

struct font {
    unsigned int id : 8;
    unsigned int size : 7;
    unsigned int : 1;
    unsigned int align : 2;
    unsigned int bold : 1;
    unsigned int italic : 1;
    unsigned int underline : 1;
    unsigned int : 3;
};

const char * aligns[3] = {"left", "center", "right"};

void show(struct font *);
char selection();

int main(void) {
    struct font f = { 1, 12, 1, 0, 0, 0 };
    show(&f);

    char choice;
    int size;
    int align;

    while ((choice = selection()) != 'q') {
        switch (choice) {
            case 's':
                printf("Enter font size (0-127): ");
                scanf("%d", &size);
                f.size = size;
                break;
            case 'a':
                printf("select alignment\n1.left 2.center 3.right");
                scanf("%d", &align);
                f.size = align;
                break;
            case 'i':
                f.italic = f.italic == 1 ? 0 : 1;
                break;
            case 'b':
                f.bold = f.bold == 1 ? 0 : 1;
                break;
            case 'u':
                f.underline = f.underline == 1 ? 0 : 1;
                break;
        }
        getchar();
        show(&f);
    }
    
    return 0;
}

void show(struct font * f) {
    printf("id: %d\n", f->id);
    printf("size: %d\n", f->size);
    printf("align: %s\n", aligns[f->align]);
    printf("bold: %s\n", f->bold == 1 ? "ON" : "OFF");
    printf("italic: %s\n", f->italic == 1 ? "ON" : "OFF");
    printf("underline: %s\n", f->underline == 1 ? "ON" : "OFF");
}

char selection() {
    printf("f.font s.size a.alignment b.bold i.italic u.underline q.quit");
    char a;
    if (scanf("%c", &a) != 1) return 'q';
    switch (a) {
    case 'f':
    case 's':
    case 'a':
    case 'b':
    case 'i':
    case 'u':
    case 'q':
        return a;
    default:
        return 'q';
    }
}