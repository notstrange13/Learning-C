#include <stdio.h>

void calc(float value);

int main(){
    float value = 100.0;
    calc(value);
    return 0;
}

void calc(float value){

    value = value + (0.18*value);
    printf("%f", value);

}