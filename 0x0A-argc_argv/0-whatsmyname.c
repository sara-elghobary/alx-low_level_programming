#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if argc is greater than 0 to ensure argv[0] exists.
    if (argc > 0) {
        printf("%s\n", argv[0]);  // Print the program name.
    } else {
        printf("Program name not available.\n");
    }

    return 0;
}
