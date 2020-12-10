
#include <day_02.h>
#include <string.h>
#include <stdio.h>

int main() {
    char passwords[1000][255];
    char character[1000];
    int min[1000];
    int max[1000];

    read_password_data(passwords, min, max, character);

    int valid_count = 0;
    for (int i = 0; i < 1000; ++i) {
        char curr_char = character[i];
        int curr_min = min[i];
        int curr_max = max[i];
        char* pass = passwords[i];

        int char_count = 0;
        for (int j = 0; j < strlen(pass); ++j) {
            if (pass[j] == curr_char) {
                char_count++;
            }
        }

        if (curr_min <= char_count && char_count <= curr_max){
//            printf("'%d --- %d' --- %c --- %s \n", min[i], max[i], character[i], passwords[i]);

            valid_count++;
        }
    }

    printf("%d", valid_count);

    return 0;
}