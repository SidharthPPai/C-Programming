#include <stdio.h>
#include <stdlib.h>


struct Distance {
    int feet;
    float inches;
};


struct Distance add(struct Distance d1, struct Distance d2) {
    struct Distance result;

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;


    if (result.inches >= 12.0) {
        int extraFeet = (int)(result.inches / 12);
        result.feet += extraFeet;
        result.inches = result.inches - (extraFeet * 12);
    }

    return result;
}

int main(int argc, char *argv[]) {
    
    if (argc != 5) {
        printf("Command line error");
        return 1;
    }

    struct Distance d1, d2, sum;

    
    d1.feet = atoi(argv[1]);
    d1.inches = atof(argv[2]);
    d2.feet = atoi(argv[3]);
    d2.inches = atof(argv[4]);

   
    sum = add(dist1, dist2);

   
    printf("Total Distance: %d feet, %.2f inches\n", sum.feet, sum.inches);

    return 0;
}
