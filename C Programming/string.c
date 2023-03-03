#include<stdio.h>
#include<string.h>

void string_input() {
    char str[100];
    int ch = ' ';
    int i = 0;
    printf("Enter String : ");
    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("String : %s \n", str);
}

void salting(char password[]) {
    char salt[] = "123";
    char new_password[125];
    strcpy(new_password, password);
    strcat(new_password, salt);
    printf("Salted Password : %s \n", new_password);
}

void slice(char str[], int n, int m) {
    char slice[100];
    int j = 0;
    for(int i = n; i < m; i++, j++)
        slice[j] = str[i];
    slice[j] = '\0';
    printf("Slice : %s", slice);
}

int count_vowel(char str[]) {
    int count = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u')
            count++;
    }
    return count;
}

void character_present(char str[], char ch) {
    for(int i = 0; i < strlen(str); i++) {
        if(ch == str[i]) {
            printf("character %c is present in %s", ch, str);
            return;
        }
    }
    printf("character %c is not present in %s", ch, str);
}

int main() {
    // strings
    // -> a character array terminated by a '\0' (null character)
    // null character denoted string termination

    // string format specifier -> "%s"

    // 2 ways to initialize string
    char name_one[] = {'A', 'd', 'i', 't', 'y', 'a', '\0'};
    char name_two[] = "Aditya";

    printf("name one : %s \n", name_one);
    printf("name two : %s \n", name_two);

    char first_name[30];
    char last_name[30];

    printf("Enter first name : ");
    scanf("%s", &first_name);
    printf("Enter last name : ");
    scanf("%s", &last_name);

    printf("First Name : \n");
    for(int i = 0; first_name[i] != '\0'; i++) {
        printf("\tcharacter %d : %c \n", i, first_name[i]);
    }

    printf("Last Name : \n");
    for(int i = 0; last_name[i] != '\0'; i++) {
        printf("\tcharacter %d : %c \n", i, last_name[i]);
    }

    // scan can't take multiword string with spaces

    // gets(str)
    // -> input a multiword string
    // -> dangerous and outdated

    // fgets(str, n, file)
    // -> stops when n - 1 char input or new line entered

    // puts(str)
    // -> output a string

    // char name[50];
    // gets(name);
    // fgets(name, 50, stdin);
    // puts(name);

    // string using pointer

    // store string in the memory & the assigned address is stored in the char pointer 'str_one'
    char *str_one = "Hello World"; // can be reinitialized
    char str_two[] = "Hello World"; // can't be reinitialized

    char name[100];
    printf("Enter name : ");
    scanf("%s", name);
    int length = 0;
    while(*(name + length) != '\0')
        length++;

    printf("Length of name (using pointer and checking null character) : %d \n", length);
    printf("Length of name (using strlen() method) : %d \n", strlen(name));


    // strcpy() -> copy a string to another string
    char new_name[100];
    strcpy(new_name, name);
    printf("New name : %s \n", new_name);

    // strcat() -> concat two string
    char word_one[] = "Hello";
    char word_two[] = "World!";
    strcat(word_one, word_two);
    printf("Concated string : %s \n", word_one);

    // strcmp()
    // returns 0 if first == second
    // returns +ve if first > second
    // returns -ve if first < second

    if(strcmp(word_one, word_two) == 0)
        printf("both string is equal \n");
    else if(strcmp(word_one, word_two) < 0)
        printf("string one is greater than string two \n");
    else
        printf("string one is smaller than string two \n");

    // string input using charaters
    string_input();

    // salting
    salting("test");

    return 0;
}
