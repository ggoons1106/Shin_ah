#include <stdio.h>
#include <string.h>

int convCase(int str) 
{
    const int diff = 'a' - 'A';
    if (str >= 'A' && str <= 'Z') 
        return str + diff;
    else if (str >= 'a' && str <= 'z')  
        return str - diff;
    else 
        return str;
}

int main(void) 
{
    char str[100]; 
    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);

    printf("변환된 문자열: ");
    int len = strlen(str);
    for (int i = 0; i < len ; i++) 
        putchar(convCase(str[i])); 

    return 0;
}