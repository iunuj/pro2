#include <stdio.h>
#include <time.h>

double power_iter(int a, int b) {
    double result = 1;

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    return result;
}

double power_rec(int a, int b) {
    if (b == 0) {
        return 1;
    }
    else {
        return a * power_rec(a, b - 1);
    }
}

int main() {
    int a = 13;
    int b = 21;

    clock_t start_iter = clock();
    double result_iter = power_iter(a, b);
    clock_t end_iter = clock();
    double iter_time = ((double)(end_iter - start_iter)) / CLOCKS_PER_SEC;    

    clock_t start_rec = clock();
    double result_rec = power_rec(a, b);
    clock_t end_rec = clock();
    double rec_time = ((double)(end_rec - start_rec)) / CLOCKS_PER_SEC;

    printf("Power Iterative Result: %f\n", result_iter);
    printf("Time: %f \n", iter_time);

    printf("Power Recursive Result: %f\n", result_rec);
    printf("Time: %f \n", rec_time);
    
    return 0;

}