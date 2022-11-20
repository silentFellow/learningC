/* 

Variables : 
    are like a empty contaier used to store information,the container have no value , but the item inside has

Datatypes : 
    it is used to seperate and decide what type of contianer need to be used to store that particular info,
        for example : numbers(whole) are seperated in a container namely int and so on

Dataspecifiers : 
    it is used when the info is called back and used in a situation.i will detailly explain it later

*/

#include<stdio.h>

void main() {
    
    int a; //stores number from (approx -2.5 billion - +2.5 billion) , specifier %d

    unsigned int b; //stores number from (approx 0 - 6 billon) , specifier %u

    char c; //only stores a single character , specifier %c [%d is used to show numbers from -128 - +127 based on the number/letter used]

    unsigned char d; //only stores a single character , specifier %c [%d is used to show numbers from 0 - +255 based on the number/letter used]

    float e; //stores decimal values,with a precisson of 6-7 after deimal points,after that accuracy will be low , specifier %f

    double f; //stores decimal values,with a precisson of 15-16 after deimal points,after that accuracy will be low , specifier %lf

    short int g; //stores number from (approx -32.5 thousand - +32.5 thousand) , specifier %d

    unsigned short int h; //stores number from (approx 0 thousand - +64 thousand) , specifier %d

    long long int i; //stores number from (approx -3.5 quatilion - +3.5 quation) , specifier %d

    unsigned long long int i; //stores number from (approx 0 - 9 quation) , specifier %llu

}

// This Are The Major Datatypes Others Also Be Rarely Used

// all above mentioned are approximate value , for accurate value refer internet

// for all variables i just declared the variable

// you can assign value for the variables by using "=" operator