#include <stdio.h>
int main(){
    float cels, fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("%10s\t%10s\n", "Fahr(°F)", "Cels(°C)");
    while(fahr <= upper){
        cels = (5.0/9.0) * (fahr-32);
        printf("%10.0f\t%10.1f\n", fahr, cels);
        fahr += step;
    }
    return 0;
}