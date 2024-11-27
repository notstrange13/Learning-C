// This program contains functions to calculate the area of a square, a rectangle, a circle and a triangle.

#include<stdio.h>
#include<math.h>

void square();
void rectangle();
void circle();
void triangle();

int main(){
    int num=0;

    printf("\t||WELCOME TO AREA CALCULATOR||\n");
    printf("\tFOLLOWING ARE THE FUNCTIONS YOU CAN PERFORM\n");
    printf("\t 1. FOR CALCULATING AREA OF A SQUARE\n");
    printf("\t 2. FOR CALCULATING AREA OF A RECTANGLE\n");
    printf("\t 3. FOR CALCULATING AREA OF A CIRCLE\n");
    printf("\t 4. FOR CALCULATING AREA OF A TRIANGLE\n");
    printf("\tWhat do you want to calculate area of?\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1: square();
        break;
    case 2: rectangle();
        break;
    case 3: circle();
        break;
    case 4: triangle();
        break;
    
    default: printf("Enter a valid number.");
        break;
    }

    return 0;
    
}

void square(){
    int side=0;
    printf("\tEnter the length of one side: ");
    scanf("%d", &side);

    int area= side*side;

    printf("\tArea of the square: %d units\n", area);

}
void rectangle(){
    int length=0, breadth=0;
    printf("\tEnter length of the rectangle: ");
    scanf("%d", &length);

    printf("\tEnter breadth of the rectangle: ");
    scanf("%d", &breadth);

    int area= length*breadth;

    printf("\tArea of the rectangle: %d units\n", area);


}
void circle(){
    int r=0;
    printf("\tEnter radius of the circle: ");
    scanf("%d", &r);

    float area = 3.14*r*r;

    printf("\tArea of the circle: %f units\n", area); 


}
void triangle(){

    int a=0, b=0, c=0;
    
    printf("\tEnter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    float s= (a+b+c)/2;
    float s1= (s-a)*(s-b)*(s-c);
    float area = sqrt(s1);

    printf("\tArea of the triangle: %f units\n", area);


}