
#include <stdio.h>
#include <day_01.h>

int main() {
    int expenses[200];

    read_expense_data(expenses);

    for (int i = 0; i < 199; ++i) {
        for (int j = i; j < 200; ++j) {
            if (expenses[i] + expenses[j] == 2020) {
                printf("Answer: %d\n", expenses[i]*expenses[j]);
            }
        }
    }

    return 0;
}

