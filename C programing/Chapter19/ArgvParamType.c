#include <stdio.h>

void ShowAllString(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main()
{
	char* str[3] = {
		"C Prpgraming",
		"C++ Programing",
		"JAVA Programing"
	};
	ShowAllString(3, str);
	return 0;
}