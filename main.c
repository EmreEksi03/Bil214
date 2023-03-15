#include <stdio.h>
#include <math.h>

/*int main() {
    void guessGame();
    int sumOfDigits(int number);
    void numberGuesser(int num);
    int betterCalculator();
    void calculator();
    printf("Enter your name: ");
    char name[5];
    scan("%s", name);
    printf("Hello %s",name);
    calculator();
    printf("%d",betterCalculator());

    //guessGame(5);
    //printf("%d",sumOfDigits(543));
    numberGuesser(12);
    return 0;

}*/
void calculator(){
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Your output is: %d",num1+num2);
}
void Arrays(){
    int arr[] = {1,2,3,4,5};
    printf("%d",arr[2]);
}
int betterCalculator(){
    int num1;
    int num2;
    char operation;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter operation: ");
    scanf(" %c",&operation);
    printf("Enter second number: ");
    scanf("%d",&num2);

    if (operation == '+'){
        return num1 + num2;
    }
    else if (operation == '-'){
        return num1 - num2;
    }
    else if (operation == '*'){
        return num1 * num2;
    }
    else if (operation == '/'){
        return num1 / num2;
    }
}
void guessGame(int secret){
    int guess;
    printf("Enter your guess: ");
    scanf("%d",&guess);
        while (guess!=secret){
            printf("Wrong guess! Guess again: ");
            scanf("%d",&guess);
    }
    printf("Corrext!");
}
int sumOfDigits(int number){
    int result = 0;
    while (number!=0){
        result+=number%10;
        number/=10;
    }
    return result;
}
void numberGuesser(int num){
    int guess;
    printf("Makre your first guess: ");
    scanf("%d",&guess);
    while (guess!=num){
        if(num>guess){
            printf("Too low ");
            scanf("%d",&guess);
        }
        else {
            printf("Too high ");
            scanf("%d",&guess);
        }
    }
    if (guess==num){
        char again;
        printf("Congraculations! Would you like to play again? y/n");
        scanf(" %c",again);
        if (again=="y"){
            numberGuesser(num);
        }
    }
}

