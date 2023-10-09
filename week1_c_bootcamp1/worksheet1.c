#include <stdio.h>
#include <math.h>
int helloWorld(){
    printf("Hello world!\n");
    return 0;
}

int integerSummation(){
    int a;
    int b;
    int c;
    printf("Enter number one: ");
    scanf("%d",&a);
    printf("Enter number two: ");
    scanf("%d",&b);
    c = a + b;
    printf("The answer of %d + %d is %d\n",a,b,c);
    return 0;


}
int floatSummation(){
    float a;
    float b;
    float c;
    printf("Enter number one: ");
    scanf("%f",&a);
    printf("Enter number two: ");
    scanf("%f",&b);
    c = a + b;
    printf("The answer of %f + %f is %f\n",a,b,c);
    return 0;

}

int maxSize(){
    printf("The size of an int is %zu bytes \n",sizeof(int));
    printf("The size of a char is %zu bytes \n",sizeof(char));
    printf("The size of a float is %zu bytes \n",sizeof(float));
    printf("The size of a double is %zu bytes \n",sizeof(double));
    return 0;
}

int areaRectangle() {
    float a;
    float b;
    float c;
    printf("Enter number one: ");
    scanf("%f",&a);
    printf("Enter number two: ");
    scanf("%f",&b);
    c = a * b;
    printf("The answer of %f * %f is %f\n",a,b,c);
    return 0;


}

int areaCircle(){
    float pi = 3.1415;
    float rad;
    float area;
    printf("Enter the radius of your circle: ");
    scanf("%f",&rad);
    area = M_PI * rad * rad;
    printf("The area is %f",area);
    return 0;
}

int swap_variables(){
    char *str1 = "Noah";
    char *str2 = "Fred";
    printf("str1 is %s, str2 is %s\n", str1, str2);
    char *temp = str1;
    str1 = str2;
    str2 = temp;
    printf("str1 is %s, str2 is %s\n", str1, str2);

    return 0;

}

int odd_or_even(){
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);
    if (a % 2 == 0){
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }
    return 0;
}

int f_to_d(){
    float deg, far;
    printf("Enter farenheit: ");
    scanf("%f",&far);
    deg = (far - 32) * (5/9);
    printf("%f degrees celcius %f",deg,far);
    return 0;
}

int main(){
    f_to_d();
    return 0;
}

