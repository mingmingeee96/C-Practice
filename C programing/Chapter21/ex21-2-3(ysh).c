#include <stdio.h>
#include <string.h>


typedef struct info
{
    char name[30];
    char age[10];
} info;

info split_info(char *input)
{
    info user;
    int i = 0, j = 0;

    while (input[i] != ' ')
    {
        user.name[i] = input[i];
        i++;
    }
    user.name[i++] = '\0';
    while (input[i])
        user.age[j++] = input[i++];
    user.age[j - 1] = '\0';
    return user;
}

int is_diff(char *str1, char *str2)
{
    return strcmp(str1, str2);
}

void compare_name(char *name1, char *name2)
{
    if (is_diff(name1, name2))
        printf("다른 이름\n");
    else
        printf("같은 이름\n");
}

void compare_age(char *age1, char *age2)
{
    if (is_diff(age1, age2))
        printf("다른 나이\n");
    else
        printf("같은 나이\n");
}

void print_info(info *users)
{
    for (int i = 0; i < 2; i++)
        printf("\nuser%d|이름|%s|나이|%s|\n", i + 1, users[i].name, users[i].age);
}

void init_info(info *users)
{
    char input[50];

    for (int i = 0; i < 2; i++)
    {
        printf("user%d: name age 입력\n", i + 1);
        fgets(input, sizeof(input), stdin);

        users[i] = split_info(input);
    }
}

int main(void)
{
    info users[2];

    init_info(users);
    print_info(users);
    compare_name(users[0].name, users[1].name);
    compare_age(users[0].age, users[1].age);
    return 0;
}