#include <stdio.h>
#include <stdlib.h>

struct Distance {
    int feet;
    float inch;
};

int main(int argc, char **argv) {
   
    if (argc < 5) {
        printf("Command line error");
        return -1;
    }

    struct Distance d1, d2, sum;

    
    d1.feet = atoi(argv[1]);
    d1.inch = atof(argv[2]);

    
    d2.feet = atoi(argv[3]);
    d2.inch = atof(argv[4]);

    
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;

   
    if (sum.inch >= 12.0) {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = (int)sum.inch % 12 + (sum.inch - (int)sum.inch); 
        // Note: The logic above handles the remainder for floats
    }

    printf("\nTotal Distance: %d feet, %.2f inches\n", sum.feet, sum.inch);

    return 0;
}



