#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    int a[] = {3, 5, 2, 1, 7};
    int b[8];
    int a_len = sizeof(a)/sizeof(int);
	
    // Initialize the "bucket" array.
    for (int i=0; i<8; i++) {
        b[i] = 0;
    }

    for (int i=0; i<a_len; i++) {
	b[a[i]] = 1;
    }

    // Print original array
    for (int i=0; i<a_len; i++) {
        printf("%6d", a[i]);
    }
    printf("\n");

    // Print result
    for (int i=0; i<8; i++) {
        if (b[i] > 0) {
            printf("%6d", i);
	    }
    }
    printf("\n");
	
    return 0;
}
