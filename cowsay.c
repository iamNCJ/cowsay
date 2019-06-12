#include <stdio.h>
#include <string.h>
#define PRINTLINE(x) printf(" ");\
    				 for (i = 0; i < len + 2; i++)\
    				 	printf("%c", x);\
    				 printf("\n")

const char cowBody[] = "\t\\   ^__^\n\t \\  (oo)\\_______\n\t    (__)\\       )\\/\\\n\t         ||----w |\n\t         ||     ||\n";

int main(int argc, char const *argv[])
{
	if (argc > 1) // to avoid segmentation fault
	{
		int len = strlen(argv[1]), i;
		PRINTLINE('_');
	    printf("< %s >\n", argv[1]);
	    PRINTLINE('-');
	    printf("%s\n", cowBody);
	}
	return 0;
}
