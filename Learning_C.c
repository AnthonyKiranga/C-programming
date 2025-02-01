#include <stdio.h>
#include <stdbool.h>

 void birthday(char name[], int age)
{
   printf("\nHappy birthday dear %s!", name);
   printf("\nYou are %d years old!",  age); 
    
} 

int main(){ 
   // logical operators == && (AND) checks if two conditions are true

/*float temp = 25;
bool sunny = true;

if(temp >= 0 && temp <= 30 && sunny){
    printf("The weather is good!");
}
else{
   printf("The weather is bad!");
}*/
   //logical operators = || (OR) checks if at least one condition is true
   /* float temp = -1000;

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");        
    } 
   else{
      printf("\nThe weather is good!");
   }*/
  // logical operators = ! (NOT) reverses the state of a condition
  
   /*bool sunny = false;

    if(!sunny ){
        printf("\nIt's cloudy outside!");
    }
    else{
      printf("\nIt's sunny outside!");
    }*/
   char name[] = "Bro";
   int age = 21;

   birthday(name, age);
    
   

  return 0; 
 }