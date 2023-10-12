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

int fac(int num,int sum){
    if (num == 1){
        return sum;
    } else{
        sum = sum * num;
        return fac(num -1, sum );
    }
    
}

int factorial(){
    int num = 0;
    int total;
    printf("What number do you want the factorial of?: ");
    scanf("%d", &num);
    total = fac(num, 1);
    printf("The factorial is %d",total);
    return 0;


}

int light_distance(int days) {
    int sol = 299792458;
    int seconds = days * 24 * 60 * 60;
    int metres = sol * seconds;
    int kilometers = metres / 1000;
    printf("Light travels %d km in %d days\n",kilometers,days);
}

int compound_interest(int start_money,double interest_rate,double time){
    double multiplier = pow(double interest_rate,double time);
    float total = start_money * multiplier;
    printf("%f",total);
}

int main(){
    compound_interest(1000,1.08,15);
    return 0;
}

