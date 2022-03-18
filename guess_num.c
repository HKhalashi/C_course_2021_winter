#include<stdio.h>

#include<stdbool.h>

bool get_valid_answer(int mean_val) {
    char ans_char;
    while (true) {
        printf("your number is greater than %d?(Y/N)\n", mean_val);
        scanf("%c", &ans_char);
        scanf("%*c" ,&ans_char);
        if (ans_char == 'Y' || ans_char == 'y' || ans_char == '1') {
            return 1;
        }
        if (ans_char == 'N' || ans_char == 'n' || ans_char == '0') {
            return 0;
        }
        puts("your input is not correct , try again" );

    }
}

int main() {
    int lower_bound = 1;
    int upper_bound = 1000;
    int mean_val;
    puts("guess an integer between 1 and 1000");
    do {
        mean_val = (lower_bound + upper_bound) / 2;
        if (get_valid_answer(mean_val)) {
            lower_bound = mean_val + 1;
        } else {
            upper_bound = mean_val;
        }

    } while (lower_bound != upper_bound);

    printf("your number is : %d\n", lower_bound);

    return 0;
}
