/*Program that will categorize a single character that is entered at the terminal, whether it is
an alphabet, a digit or a special character.
(Restriction: Without math.h)*/
#include<stdio.h>
int main (){
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    printf("Alphabet\n");}

    else if(ch>='0' && ch<='9'){
        printf("Digit\n");
    }
    else {
        printf("Special character");

    }
    return 0;
}