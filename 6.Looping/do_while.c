#include <stdio.h>
int main(void) {
    const int secret_code = 13;
    int code_entered;

    do {
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("plz entet the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Con! U r cured!\n");
    
    return 0;
}