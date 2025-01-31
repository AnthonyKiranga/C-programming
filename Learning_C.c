#include <stdio.h>
#include <stdbool.h>
  
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

  int x = 5;
  int y = 2;

  //int z = x + y;
  //int z = x - y;
  //int z = x * y;
  //float z = x / (float) y;
  //int z = x % y;
  //x++;
  y--;
  printf("%d",y);


    return 0; 
}