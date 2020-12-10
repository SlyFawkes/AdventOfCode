#include <stdio.h>
#include <day_01.h>

int main() {
    int expenses[200];

    read_expense_data(expenses);

    for (int i = 0; i < 198; ++i) {
        for (int j = i+1; j < 199; ++j) {
            for (int k = j+1; k < 200; ++k) {
                if (expenses[i] + expenses[j] + expenses[k] == 2020) {
                    printf("Answer: %d\n", expenses[i]*expenses[j]*expenses[k]);
                }
            }
        }
    }
    return 0;
}
