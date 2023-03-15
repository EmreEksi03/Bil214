#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <sys/time.h>

char *reverse(char *input)
{
    int len = strlen(input);

    char *output = malloc(len);
    for (int i = 0; i < len; i++) {
        output[len - i - 1] = input[i];
    }
    output[len] = '\0';
    return output;
}
int factorial(int a){

    if(a < 0)
        return 0;
    else if(a==0 || a==1)
        return 1;
    else
        return a*(factorial(a-1));
}
float taylor(float x,int M){
    float output = 0.0;
    for (int n=0;n<M;n++){
        output += (pow(x,n)/ factorial(x));
    }
    return output;
}
int main()
{
    printf("%s","In the given code the 'char output[len];' line is wrong because it only creates a local variable in the function.\n"
                "To fix this we can use malloc to allocate memory to this variable.\n"
                "This way the variable still exists after the function is executed.\n");

    printf("%s","In the given code the 'output' variable does not have a null terminator in the end.\n");

    printf("%s","Write a string: \n\n");

    char input[20];
    scanf("%s", input);
    char *string = reverse(input);
    printf("%s", string);
    free(string);
    printf("\n\n");

    struct timeval begin, end;
    gettimeofday(&begin, 0);
    for (int i=0;i<1000;i++){
        float x = (float)rand()/(float)(RAND_MAX);
        taylor(x,10);
        taylor(x,15);
        taylor(x,18);
    }
    gettimeofday(&end, 0);
    long microseconds = end.tv_usec - begin.tv_usec;
    printf("The total running time is: %lli microseconds.",microseconds);
    return 0;
}
