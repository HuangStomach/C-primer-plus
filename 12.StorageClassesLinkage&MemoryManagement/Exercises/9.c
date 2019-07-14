#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int size;
    printf("How many words do you wish to enter? ");
    scanf("%d", &size);
    char ** array = (char **) malloc(size * sizeof(char *));

    char c;
    char * str = (char *) malloc(80 * sizeof(char));
    printf("Enter 5 words now: \n");
    getchar();
    
    int j = 0;
    int k = 0;
    while ((c = getchar()) != '\n') {
        if (isblank(c)) {
            str[j] = '\0';
            j = 0;
            
            array[k++] = str;
            str = (char *) malloc(80 * sizeof(char));
            continue;
        }
        
        str[j++] = c;
    }
    array[k++] = str;
    
    printf("Here r u words: \n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", array[i]);
    }
    
    return 0;
}