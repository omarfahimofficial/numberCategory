#include <stdio.h>  // standard input output header file.
#include <stdlib.h> // standard library header.
#include <conio.h>  // console input output header.
#include <string.h> // string header for text.
#include <limits.h> // it had all the limits of all kind of data types.
#include <windows.h> // for Handle Structure. // to hide the cursor.

void menu();
void title();
void end();
void hidecursor();
void getting_input();
int pattern_loop();
char result_show();
void about();
int prime_number();
int palindrome_number();
int armstrong_number();
int strong_number();
void additionOfTheDigitsOf_number();
void counting_ofTheDigitsOf_number();
void reverse_number();
void factorialOf_number();
int type_checkOf_number();
int choice; // user input, for option menu to use in switch function.
int n=0,m=0; // user input: a number.
int i=0,j=0; // for using inside the loops;
int count=0; // counting outputs somewhere;
int l = 0; // l -> for storing length of the showResult text;
char c; // for getting the character at the end [M || m] - for going back to the main menu.
char title_text[30],showResult[50]; // Array type character - That means a string [30] -it can hold 30 character(including the null char).
int sum,rem,temp;
int maxLimitOf_int = INT_MAX;
int result;
int typeCheck_primeNumber=0,typeCheck_palindromeNumber=0;
int typeCheck_armstrongNumber=0,typeCheck_strongNumber=0;

void hidecursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

int main()
{
    system("title Number Category Finder - Omar Fahim");
    hidecursor();
    fflush(stdin); // clear the output buffer.
    system("cls"); // clear the console window.
    choice=0; // initializing choice as zero, every time main() function called it should be zero. [otherwise, 2nd time repeat run any kind input will take at the last input]
    system("color D0"); // putting color to the console [D - background color][0 - text color]
    printf("\n\n");  // printing some new lines
    printf("\n\t\t\t\t   \xC9");
    pattern_loop(205,54);
    printf("\xBB"); // printing the pattern using function.
    printf("\n\t\t\t\t   \xBA      WELCOME TO THE NUMBER CATEGORY CHECK PROGRAM    \xBA");
    printf("\n\t\t\t\t   \xCC");
    pattern_loop(205,54);
    printf("\xB9");
    printf("\n\t\t\t\t   \xBA  ");
    pattern_loop(177,50);
    printf("  \xBA"); // printing the pattern using function.
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1                                          \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  1. Prime number check.                  \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  2. Palindrome Number check              \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  3. Armstrong number check.              \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  4. Strong number check.                 \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  5. Addition of the digits of a number.  \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  6. Counting digits of a number.         \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  7. Reverse a number.                    \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1  8. Factorial of a number.               \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1 13. Any number type Check.               \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1 14. ABOUT                                \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1                                          \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA\t\xB1\xB1                                          \xB1\xB1    \xBA");
    printf("\n\t\t\t\t   \xBA  ");
    pattern_loop(177,50);
    printf("  \xBA"); // printing the pattern using function.
    printf("\n\t\t\t\t   \xCC");
    pattern_loop(205,54);
    printf("\xB9");
    printf("\n\t\t\t\t\t        \xB1\xB1    ENTER YOUR CHOICE: ");
    scanf("%d",&choice);
    if(choice >= 1 && choice <= 14)
    {
        menu();
    }
    else
    {
        fflush(stdin);
        printf("\a");
        system("color F4");
        printf("\n\n\t\t\t\tPlease choose a number from the MAIN MENU between 1 - 9");
        printf("\n\n\t\t\t\t\t Press any key to choose again!");
        getch();
        main();
    }
}

void menu()
{
    switch(choice)
    {
    case 1:
        system("cls");
        strcpy(title_text,"PRIME NUMBER CHECK  ");
        title(title_text);
        getting_input();
        prime_number();
        break;
    case 2:
        system("cls");
        strcpy(title_text,"PALINDROME NUMBER CHECK");
        title(title_text);
        getting_input();
        palindrome_number();
        break;
    case 3:
        system("cls");
        strcpy(title_text,"ARMSTRONG NUMBER CHECK  ");
        title(title_text);
        getting_input();
        armstrong_number();
        break;
    case 4:
        system("cls");
        strcpy(title_text,"STRONG NUMBER CHECK  ");
        title(title_text);
        getting_input();
        strong_number();
        break;
    case 5:
        system("cls");
        strcpy(title_text,"ADDITION OF THE DIGITS");
        title(title_text);
        getting_input();
        additionOfTheDigitsOf_number();
        break;
    case 6:
        system("cls");
        strcpy(title_text,"COUNTING DIGITIS   ");
        title(title_text);
        getting_input();
        counting_ofTheDigitsOf_number();
        break;
    case 7:
        system("cls");
        strcpy(title_text,"REVERSE A NUMBER  ");
        title(title_text);
        getting_input();
        reverse_number();
        break;
    case 8:
        system("cls");
        strcpy(title_text,"FACTORIAL OF A NUMBER ");
        title(title_text);
        getting_input();
        factorialOf_number();
        break;
    case 13:
        system("cls");
        strcpy(title_text,"TYPE CHECK      ");
        title(title_text);
        type_checkOf_number();
        break;
    case 14:
        system("cls");
        strcpy(title_text,"ABOUT         ");
        title(title_text);
        about();
        break;
    default:
        printf("\a");
        system("color F4");
        printf("\n\n\t\t\t\t Please choose a number from the MAIN MENU between 1 - 9");
        printf("\n\n\t\t\t\t\t Press any key to choose again!");
        getch();
        getchar();
        main();
    }
    getch();
}

void title(char* title)
{
    int a = 176;
    int t = 205,t1=203,t2=202,t3=186,t4=219;
    system("color E0");
    printf("\n\n");
    printf("\n\t\t\t\t\t %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C",t,t1,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t1,t);
    printf("\n\t\t\t\t\t %C%C%C %23.23s %C%C%C%",t4,t3,t4,title,t4,t3,t4);
    printf("\n\t\t\t\t\t %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C",t,t2,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t,t2,t);
    printf("");
    printf("");
    printf("");
}

void end()
{
    int a = 176;
    printf("\n\n");
    printf("\n\t\t\t\t\t  %C%C%C%C%C%C%C%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C|    M - Main Menu    |%c%c%c%c",a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C| Enter - Check Again |%c%c%c%c",a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C|    Q - Quit Program |%c%c%c%c",a,a,a,a,a,a,a,a);
    printf("\n\t\t\t\t\t  %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
    printf("\t\t\t\t\t\t\t");
    c = getch();
    if(c == 'M' || c == 'm')
        main();
    else if(c == 'q' || c == 'Q')
        exit(1);
    else
    {
        if(choice == 1)
        {
            system("cls");
            strcpy(title_text,"PRIME NUMBER CHECK  ");
            title(title_text);
            getting_input();
            prime_number();
        }
        else if(choice == 2)
        {
            system("cls");
            strcpy(title_text,"PALINDROME NUMBER CHECK");
            title(title_text);
            getting_input();
            palindrome_number();
        }
        else if(choice == 3)
        {
            system("cls");
            strcpy(title_text," ARMSTRONG NUMBER CHECK ");
            title(title_text);
            getting_input();
            armstrong_number();
        }
        else if(choice == 4)
        {
            system("cls");
            strcpy(title_text,"STRONG NUMBER CHECK  ");
            title(title_text);
            getting_input();
            strong_number();
        }
        else if(choice == 5)
        {
            system("cls");
            strcpy(title_text,"ADDITION OF THE DIGITS");
            title(title_text);
            getting_input();
            additionOfTheDigitsOf_number();
        }
        else if(choice == 6)
        {
            system("cls");
            strcpy(title_text,"COUNTING DIGITIS   ");
            title(title_text);
            getting_input();
            counting_ofTheDigitsOf_number();
        }
        else if(choice == 7)
        {
            system("cls");
            strcpy(title_text,"REVERSE A NUMBER   ");
            title(title_text);
            getting_input();
            reverse_number();
        }
        else if(choice == 8)
        {
            system("cls");
            strcpy(title_text,"FACTORIAL OF A NUMBER ");
            title(title_text);
            getting_input();
            factorialOf_number();
        }
        else if(choice == 13)
        {
            system("cls");
            strcpy(title_text,"TYPE CHECK      ");
            title(title_text);
            type_checkOf_number();
        }
        else if(choice == 14)
        {
            system("cls");
            strcpy(title_text,"ABOUT        ");
            title(title_text);
            type_checkOf_number();
        }
    }
}

char result_show(char* showresult)
{
    printf("\n\t\t\t\t\t");
    pattern_loop(220,35);
    printf("\n\t\t\t\t\t\xDB %30s  \xDB",showresult);
    printf("\n\t\t\t\t\t");
    pattern_loop(223,35);
}

int prime_number(int m)
{
    // Only assigning m as n when the user choose option 9.
    // otherwise input and the function parameter comes with the same variable name, [result, n = -1].
    // and we can't change that because the Algorithm runs with the same and only variable -> n;
    if(choice == 13)
        n=m;
    typeCheck_primeNumber=0;
    // Here starts the normal algorithm.
    int c = 219;
    count = 0;
    printf("\n\t\t");
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            if(choice != 13){
            printf("\n\t\t\t\t\t       ");
            pattern_loop(220,22);
            printf("\n\t\t\t\t\t       %c %4d / %3d == %4d %c  ",c,n,i, n/i,c);
            }
            count++;
        }
    }
    // this if runs for the Type checking of the number.
    if(choice == 13)
    {
        if(count==0)
            typeCheck_primeNumber++;
        return typeCheck_primeNumber;
    }
    else if(count==0)
    {
        strcpy(showResult,"It's a Prime Number      ");
        result_show(showResult);
    }
    else
    {
        strcpy(showResult,"It's Not a Prime Number  ");
        result_show(showResult);
    }
    end();

}

int palindrome_number(int m)
{
    sum = 0, rem = 0,temp = 0; // Declaring n,sum,rem as 0, so that if it runs again after calculation does not take the previous calculations value.
    // when the choice is 13,
    if(choice == 13)
        n = m;
    typeCheck_palindromeNumber=0;
    // only then the value of the parameter will assign as the main algorithm value [n]/[temp];
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    if(choice == 13)
    {
        if(n == sum)
            typeCheck_palindromeNumber++;
        return typeCheck_palindromeNumber;
    }else{}
    printf("\n\t\t\t\t\t      ");
    pattern_loop(193,24);
    printf("\n\t\t\t\t\t      \xBA Reversed Number: %d \xBA",sum);
    if(n == sum)
    {
        strcpy(showResult,"It's a palindrome Number  ");
        result_show(showResult);
    }
    else
    {
        strcpy(showResult,"It's a palindrome Number  ");
        result_show(showResult);
    }
    end();
}

int armstrong_number(int m)
{
    sum = 0, rem = 0,temp = 0; // Declaring n,sum,rem as 0, so that if it runs again after calculation does not take the previous calculations value.
    // assigning the function argument value to n for the algorithm. when user choose the 13 no option.
    if(choice == 13)
        n = m;
    typeCheck_armstrongNumber=0;
    // assigning the value of 'n' to 'temp' to use in the Algorithm,
    // and use the value of 'n' later to check if 'algorithm's output' and 'n'[input] value is equal.
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem*rem*rem);
        temp = temp / 10;
    }
    if(choice == 13)
    {
        if(n == sum)
            typeCheck_armstrongNumber++;
        return typeCheck_armstrongNumber;
    }
    if(choice != 13){
    printf("\n\t\t\t\t\t      ");
    pattern_loop(193,24);
    printf("\n\t\t\t\t\t      \xBA Reversed Number: %d \xBA",sum);
    if(n == sum)
    {
        strcpy(showResult,"It's a Armstrong Number   ");
        result_show(showResult);
    }
    else
    {
        strcpy(showResult,"It's not an Armstrong Number  ");
        result_show(showResult);
    }
    end();
    }
}
int strong_number(int m)
{
    sum = 0, rem = 0,temp = 0; // Declaring n,sum,rem as 0, so that if it runs again after calculation does not take the previous calculations value.
    //
    if(choice == 13)
        n = m;
    typeCheck_strongNumber = 0;
    //
    temp = n;
    if(choice != 13){
    printf("\n\t\t\t\t   ");
    pattern_loop(196,45);
    }
    while(temp != 0)
    {
        rem = temp % 10;
        int fact = 1;
        if(choice != 13)
            printf("\n\t\t\t\t         %d! = ",rem);
        for(i=1; i<=rem; i++)
        {
            if(choice != 13)
            {
                if(i==rem)
                    printf("%d",i);
                else
                    printf("%d x ",i);
            }
            fact = fact * i;
        }
        if(choice != 13)
            printf(" = %d",fact);
        sum = sum + fact;
        temp = temp / 10;
    }
    if(choice != 13){
    printf("\n\t\t\t\t   ");
    pattern_loop(196,45);
    printf("\n");
    }
    if(choice == 13)
    {
        if(n == sum)
            typeCheck_strongNumber++;
        return typeCheck_strongNumber;
    }
    printf("\n\t\t\t\t   ");
    pattern_loop(193,45);
    printf("\n\t\t\t\t   \xBA Factorial Summation of the Digits: %6d \xBA",sum);
    printf("\n\t\t\t\t   ");
    pattern_loop(194,45);
    if(n == sum){
        strcpy(showResult,"It's a Strong Number  ");
        result_show(showResult);
    }
    else{
        strcpy(showResult,"It's Not a Strong Number  ");
        result_show(showResult);
    }
    end();
}
void additionOfTheDigitsOf_number()
{
    sum = 0, rem = 0,temp = 0; // Declaring n,sum,rem as 0, so that if it runs again after calculation does not take the previous calculations value.
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    printf("\n\n\n\t\t\t\t         ");
    pattern_loop(193,34);
    printf("\n\t\t\t\t         \xBA Addition of the Digits: %6d \xBA",sum);
    printf("\n\t\t\t\t         ");
    pattern_loop(194,34);
    end();
}
void counting_ofTheDigitsOf_number()
{
    sum = 0, rem = 0,temp = 0; // Declaring n,sum,rem as 0, so that if it runs again after calculation does not take the previous calculations value.
    temp = n;
    while(temp != 0)
    {
        temp = temp / 10;
        count++; // declared as a global variable at the very first of this program.
    }
    printf("\n\n\n\t\t\t\t         ");
    pattern_loop(193,34);
    printf("\n\t\t\t\t         \xBA Digits of the number are: %4d \xBA",count);
    printf("\n\t\t\t\t         ");
    pattern_loop(194,34);
    count=0;
    end();
}
void reverse_number()
{
    sum = 0, rem = 0,temp = 0; // Declaring n,sum,rem as 0, so that if it runs again after calculation does not take the previous calculations value.
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    printf("\n\n\n\t\t\t\t         ");
    pattern_loop(193,32);
    printf("\n\t\t\t\t         \xBA The Reversed Number: %7d \xBA",sum);
    printf("\n\t\t\t\t         ");
    pattern_loop(194,32);
    end();
}
void factorialOf_number()
{
    sum = 0, rem = 0,temp = 0; // Declaring n,sum,rem as 0, so that if it runs again after calculation does not take the previous calculations value.
    temp = n;
    // Making the number positive || Absolute number.
    temp = abs(temp);
    int fact = 1;
    printf("\n\n\n\t\t\t\t     \xB2 %d! =",temp);
    for(i=temp; i>=1; i--)
    {
        if(i == 1)
            printf(" %d",i);
        else
            printf(" %d X",i);
        fact = fact * i;
    }
    // Making the value negative again, if the user entered less than 0[negative value];
    if(n<0)
        fact = -fact;

    printf("\n\n\n\t\t\t\t     ");
    pattern_loop(193,40);
    printf("\n\t\t\t\t     \xBA The Factorial of the number: %7d \xBA",fact);
    printf("\n\t\t\t\t     ");
    pattern_loop(194,40);

    if(fact<=0){
        if(n>0)
            printf("\n\n\t\t SORRY! Could not show the result because the factorial of this number is more than : '%d' \
                \n\t\t Which is the maximum integer limit of your computer. So, it'not possible to show the value.",maxLimitOf_int);
        }
    if(fact>0){
        if(n<0)
            printf("\n\n\t\t SORRY! Could not show the result because the factorial of this number is more than : '%d' \
                \n\t\t Which is the maximum integer limit of your computer. So, it'not possible to show the value.",maxLimitOf_int);
    }
        end();
}
int type_checkOf_number()
{
    int result_prime=0,result_palindrome=0,result_armstrong=0,result_strong=0;
    printf("\n\n\n\t\t\t\t\t        Enter a number: ");
    scanf("%d", &n);
    result = 0;
    result_prime = prime_number(n);
    result_palindrome = palindrome_number(n);
    result_armstrong = armstrong_number(n);
    result_strong = strong_number(n);
    printf("\n\n\n\t\t\t\t        ");
    pattern_loop(193,36);
    if(result_prime == 1)
        printf("\n\t\t\t\t\t      It's a Prime Number");
    if(result_prime == 1 && (result_palindrome == 1 || result_armstrong == 1 || result_strong))
        printf(" and also");
    if(result_palindrome == 1)
        printf("\n\t\t\t\t\t   It's a Palindrome Number");
    if(result_prime == 1 && (result_palindrome == 1 || result_armstrong == 1 || result_strong))
        printf(" and also");
    if(result_armstrong == 1)
        printf("\n\t\t\t\t\t   It's a Armstrong Number");
    if(result_prime == 1 && (result_palindrome == 1 || result_armstrong == 1 || result_strong))
        printf(" and also");
    if(result_strong == 1)
        printf("\n\t\t\t\t\t      It's a Strong Number");
    if(result_prime == 0 && result_palindrome == 0 && result_armstrong == 0 \
            && result_strong == 0)
        printf("\n\t\t\t\t        This number does not match any category \
                \n\t\t\t\t        It's just a normal number.");
    printf("\n\t\t\t\t         ");
    pattern_loop(194,36);
    end();
}

void getting_input()
{
    n = 0;
    printf("\n\n\n\t\t\t\t\t        Enter a number: ");
    scanf("%d", &n);
    fflush(stdin);

}

int pattern_loop(int ch,int pn)
{
    for(int i=1; i<=pn; i++)
        printf("%c",ch);
}

void about(){
    hidecursor();
    system("color C0");
    printf("\n\t\t\t     \xC9");
    pattern_loop(205,54);
    printf("\xBB"); // printing the pattern using function.                              |
    printf("\n\t\t\t     \xBA      WELCOME TO NUMBER CATAGORY APPLICATION  -1.0    \xBA");
    printf("\n\t\t\t     \xCC");
    pattern_loop(205,54);
    printf("\xB9");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xBA Developer : Omar Fahim                               \xBA");
    printf("\n\t\t\t     \xBA Site      : https://sites.google.com/view/omarfahim  \xBA");
    printf("\n\t\t\t     \xBA email     : omarfahimofficial@gmail.com              \xBA");
    printf("\n\t\t\t     \xBA Version   : 1.0 - 09 Sept 2020 [Wednesday]           \xBA");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xBA     This application is made with C Programming      \xBA");
    printf("\n\t\t\t     \xBA     Language. It's just a fun application to         \xBA");
    printf("\n\t\t\t     \xBA          practice and Develop my skills.             \xBA");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xBA    I also make the program in a very complicated     \xBA");
    printf("\n\t\t\t     \xBA          way to make it with in less codes.          \xBA");
    printf("\n\t\t\t     \xBA      You can visit my site to observe the codes.     \xBA");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xBA   please feel free to email me for any kind of help  \xBA");
    printf("\n\t\t\t     \xBA           and to give any kind of suggestions        \xBA");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xBA                     'THANK YOUR'                     \xBA");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xBA                                                      \xBA");
    printf("\n\t\t\t     \xC8");pattern_loop(205,54);printf("\xBC");
    getch();
    main();
}
