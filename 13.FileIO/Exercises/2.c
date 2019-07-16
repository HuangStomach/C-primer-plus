#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char source_name[80];
    char dest_name[80];
    FILE *source, *dest;

    do {
        printf("Plz type in the source_name name\n");
    } while (scanf("%s", source_name) != 1);

    if ((source = fopen(source_name, "r")) == NULL) {
        printf("Can't open %s\n", source_name);
        exit(EXIT_FAILURE);
    }

    do {
        printf("Plz type in the dest_name name\n");
    } while (scanf("%s", dest_name) != 1);

    if ((dest = fopen(dest_name, "wb")) == NULL) {
        printf("Can't write %s\n", dest_name);
        exit(EXIT_FAILURE);
    }
    
    size_t bytes;
    char temp[4096];
    while ((bytes = fread(temp, sizeof(char), 4096, source)) > 0) {
        fwrite(temp, sizeof(char), bytes, dest);
    }
    
    fclose(source);
    fclose(dest);
    printf("Done\n");

    return 0;
}