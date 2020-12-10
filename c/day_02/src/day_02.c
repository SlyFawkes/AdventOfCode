#include <stdio.h>

void read_password_data(char passwords[][255], int *min, int *max, char *character) {
    FILE *fp;
    fp = fopen("../data/day_02_passwords.txt", "r");

    for (int i = 0; i < 1000; ++i) {
        fscanf(fp, "%d-%d %c: %s", &min[i], &max[i], &character[i], passwords[i]);
    }

    fclose(fp);
}
