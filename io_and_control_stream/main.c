#include "stdio.h"

#define LOWER 0
#define UPPER 300
#define STEP 20
#define IN  1  /* inside a word */
#define OUT 0 /* inside a word */

void print_fahrenhei_celsius_table() {
    printf("===================================\n");
    printf("| Here is fahrenhei celsius table |\n");
    printf("===================================\n");
    float fahr;
    printf("  F     C\n");
    for(fahr = LOWER; fahr < UPPER; fahr =  fahr + STEP) {
        printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}

void get_char_show() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    putchar(c); // print value of EOF. Control+D
}

void count_char() {
    long num_char;
    num_char = 0;
    while (getchar() != EOF ) {
        num_char = num_char + 1;
    }
    printf("Number of char is %ld\n", num_char);
}

void count_line() {
    long num_line = 0;
    int c;
    while ((c = getchar())!= EOF ) {
        if (c == '\n') {
            num_line = num_line + 1;
        }
    }
    printf("Number of line is %ld\n", num_line);
}


void count_word() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        nc = nc + 1;
        if (c == '\n') {
            nl = nl + 1;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            nw = nw + 1;
        }
    }

    printf("Lines: %d -- Words: %d -- Chars: %d\n", nl, nw, nc);
}

int main() {
    print_fahrenhei_celsius_table();
    get_char_show();
    count_char();
    count_line();
    count_word();
    return 0;
}