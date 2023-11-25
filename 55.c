/* RAW CODE */
#include <stdio.h>

float angleInput();
void angleQuadrant(float angle);

int main()
{
    float angle;
    angle = angleInput();
    angleQuadrant(angle);
    return 0;
}
float angleInput()
{
    float angle;
    printf("Please input the angle: ");
    scanf("%f", &angle);
    return angle;
}
void angleQuadrant(float angle)
{
    if (angle == 0 || angle == 360){
        printf("\nThe angle %.1f it is not in a quadrant but lies on the positive X-axis", angle);
    }
    else if (angle == 90){
        printf("\nThe angle %.1f it is not in a quadrant but it lies on the positive Y-axis", angle);
    }
    else if (angle == 180){
        printf("\nThe angle %.1f it is not in a quadrant but it lies on the negative X-axis", angle);
    }
    else if (angle == 270){
        printf("\nThe angle %.1f it is not in a quadrant but it lies on the negative Y-axis", angle);
    }
    else if (angle < 90){
        printf("\nThe angle %.1f lies on Quadrant I", angle);
    }
    else if (angle < 180){
        printf("\nThe angle %.1f lies on Quadrant II", angle);
    }
    else if (angle < 270){
        printf("\nThe angle %.1f lies on Quadrant III", angle);
    }
    else if (angle < 360){
        printf("\nThe angle %.1f lies on Quadrant IV", angle);
    }
    else {
        printf("\nYou entered the wrong number. Please try again");
    }
    return;
}
