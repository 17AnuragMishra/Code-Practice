#include<stdio.h>
int circle(int r){
    int circumference, area, r;
    const pi = 3.14;
    circumference = 2*pi*r;
    area = pi*r*r;
    return circumference, area;
}
int main(){
    int r, circumference, area;
    printf("Enter the radius: ");
    scanf("%d", &r);
    circumference = circle(circumference);
    area = circle(area);

    printf("Circumference and radius of circle are: %d and %d", circumference, area);
    return 0;
}

/*#include <stdio.h>
float getCircleArea(float radius){
	const float PI = 3.14;
	float area;
	area = PI * radius * radius;
	return area;	
}
int main(){
    float radius, circleArea;
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);
    circleArea = getCircleArea(radius);
    printf("The Area of the Circle is: %f", circleArea);
    return 0;
    
}*/