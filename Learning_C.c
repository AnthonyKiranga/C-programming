#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
  
int main(){ 
    //Data types 

    //char a = 'C'; // single character  %c focus on chars 
    //char b[] = "Bro"; // array of characters %s focus a ray of chars

    /*float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589293; //8 bytes (64 bits of precision) 15 - 16 digits %lf focus on doubles
    
    bool e = false;               //1 byte (true or false) %d focus on boleans

    char f = 120;                //1 byte (-128 to +127) %d or %c
    unsigned char g =255;        //1byte (0 to +255) %d or %c
    
    short h = 32767;  //2 bytes (-32,768 to +32,767) %d
    unsigned short i = 65535;  //2 bytes (0 to +65,535)   

    int j = 2147483647;      // 4 bytes (-2,147,483,648 to +2,147,483,647) %d and focus on integers
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;       // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615ull;    //8bytes (0 to +18 quintillion) %llu *\
    /*int x;//declaration
    x = 123; //initialization
    int y =321; //declaration + Initialization

    int age = 21; //interger
    float gpa = 2.05; //floating point number
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of characters

    printf("Hello %s\n", name);    
    printf("You are %d old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);*/

    /*printf("I\nlike\npizza!\n");//This is a comment 
    printf("It's really good!\n");*/
    //printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
    /*This is a multi-line comment*/
    //printf("\\I Like Pizza\\ - Abraham Licoln Probably");
    //printf("%0.15f\n",c);//float
    //printf("%0.15lf\n", d); //double
    //printf("%d\n", e); //bool
   //printf("%c\n", f); //char as numeric value
  //printf("%d\n", g);   //unsigned char as numeric value
    //printf("%d\n", h);   //short
    //printf("%d\n", i);      //unsigned short
    //printf("%d\n", j);    //int
    //printf("%u\n,", k);     //unsigned int
    //printf("%lld\n", l);    // long long int
   // printf("%llu\n,", m);

  /* float item1 = 5.75;
   float item2 = 10.00;
   float item3 = 100.99;

  printf("Item 1: $%-8.2f\n", item1);
  printf("Item 2: $%-8.2f\n", item2);
  printf("Item 3: $%-8.2f\n", item3);*/

  //int x = 5;
  //int y = 2;

  //int z = x + y;
  //int z = x - y;
  //int z = x * y;
  //float z = x / (float) y;
  //int z = x % y;
  //x++;
  //y--;
  //printf("%d",y);

/*augmented assignment operators = used to replace a statement where an 
                                   operator takes a variable as one of its 
                                   arguments and then assigns the result
                                   back to the same variable
                                   x = x + 1
                                   X+=1*/
  //int x = 10;

//x = x + 2;
      //x+=2;

 //x = x - 3;
  //x-=3;

//x = x * 4;
//x*=4;

 //x = x / 5;
//x/=5;

 //x = x % 2;
  // x%=2;
//printf("%d\n", x);
 //Accepting user input in C

   /* char name[25]; //bytes
    int age ;

    printf("\nWhat's your name?");
  //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';//String formating to remove new character

    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);*/

   /* double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("\n%lf", J);*/

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

   /* printf("\nEnter the radius of a circle: ");
    scanf("%lf" , &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area); */ 

    /*double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);
    
    C = sqrt(A*A + B*B);

    printf("side C: %lf", C);*/
  /*int age;

  printf("\nEnter your age: ");
  scanf("%d", &age);

  if(age >= 18){
     printf("you are now signed up!");
  }
  else if(age == 0){
       printf("You can't sign up! You were just born!");
  }    
  else if(age < 0){
    printf("You haven't been born yet!");
  }
  else{
      printf("You are too young too young to sign up!");
  }*/
 // switch = A more effecient alternative to using many "else if" statements
//           allows a value to be tested for equality against many cases


  /*char grade;

  printf("\nEnter a letter grade: ");
  scanf("%c", &grade);

  switch(grade){
    case 'A':
       printf("perfect!\n");
       break;
    case 'B':
       printf("You did good!\n");
       break;
    case 'C':
       printf("You did Okay!\n");
       break;
    case 'D':
       printf("At least it's not an f!\n");
       break;
    case 'F':
       printf("YOU FAILED!\n");
       break;
    default:
       printf("Please enter only valid grades");*/

   char unit;
    float temp;

    printf("\nis the temperature in (F) or (C)?: "); 
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1lf", temp);   
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1lf", temp);

    }
    else{
        printf("\n %c is not a valid unit of measurement", unit);

    }
  
 





    return 0; 
 }