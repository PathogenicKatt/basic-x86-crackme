
#include <stdio.h>
#include <string.h>

int checkPassword(char *input)
{
    char *correct = "thePassword";
    return strcmp(input, correct) == 0;
}

int main()
{
    char input[32];
    printf("Enter the password:");
    scanf("%31s",input);
    if(checkPassword(input))
    {
        printf("Acess granted!\n");
    }else
    {
        printf("Access Denied!!\n");
    }
    return 0;
}