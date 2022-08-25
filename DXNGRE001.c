#include <stdio.h>
#include <math.h>
#include <string.h>

    // b)
#define TITLE "DECIMAL TO RADIX-i converter"
#define AUTHOR "Greg Dixon"
#define YEAR "2022"

void Dec2RadixI(int decValue, int radValue){
    char nums[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    int bits = ceil(log2(decValue)/log2(radValue)) ;
    printf("%d\n", bits);

    char out[bits] ;
    for(int i = bits; i > 0; i--) {
        out[i] = nums[(decValue%radValue)];
        decValue = decValue/radValue;
        //printf("%c", out[i]);
    }
    for (int j = 0; j <= bits; j++){
        printf("%c",out[j]);
    }
 

}

int main(){
    // a)
    printf("*****************************\n");
    printf("%s\n",TITLE);
    printf("Written by: %s\n",AUTHOR);
    printf("Date: %s\n",YEAR);
    printf("*****************************\n");

    // c)
    int n;
    int r = 2 ;
    /*****************************************************
     
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("The number you have entered is %d\n",n);

    // d)
    printf("Enter a radix for the converter between 2 and 16: ");
    scanf("%d", &r);
    printf("The radix you have entered is %d\n", r);

    ****************************************************/

    // e) while loop
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n>0){
        while (n>0 && r>1 && r<17){
            printf("The number you have entered is %d\n", n);
            printf("Enter a radix for the converter between 2 and 16: ");
            scanf("%d", &r);
            if (r<17 && r>1){
                printf("The radix you have entered is %d\n", r);
                // f)
                int x = log2(n);
                printf("The log2 of the number is %d\n", x);
                // g)
                int y = n/r;
                printf("The integer result of the number divided by %d is %d\n", r,y);
                // h)
                int z = n%r;
                printf("The remainder is %d\n", z);
                
                // actual code
                printf("The radix-%d value is ",r);
                Dec2RadixI(n,r);

                printf("\n");
                printf("Enter a decimal number: ");
                scanf("%d", &n);
            }
            else{
                printf("EXIT\n");
            }
        }
    }
    else{
        printf("EXIT\n");
    }
    /*********INCLUDED IN MAIN CODE WHILE LOOP *****************
    // f)
    //int x = log2(n);
    //printf("The log2 of the number is ");
    //printf("%d\n", x);

    // g)
    int y = n/r;
    printf("The integer result of the number divided by ");
    printf("%d", r);
    printf(" is ");
    printf("%d\n", y);

    // h)
    int z = n%r;
    printf("The remainder is ");
    printf("%d\n", z);

    **********************************************************/
    return 0;
}