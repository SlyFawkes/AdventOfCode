#include <stdio.h>
#include <stdlib.h>

void read_expense_data(int *expenses) {
    FILE *fp;
    fp = fopen("../data/day_01_expenses.txt", "r");

    char buff[255];
    char *_;
    for (int i = 0; i < 200; ++i) {
        fscanf(fp, "%s", buff);
        expenses[i] = (int) strtol(buff, &_, 10);
    }

    fclose(fp);
}
