// 2019-01-30 10:XX
#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>

int
main(int argc, char *argv[])
{
	puts("Lispy Version 0.0.0.0.3");
	puts("Press CTRL+C to exit\n");

	while (1) {
		char *input = readline("lispy> ");
		add_history(input);
		printf("No you're a %s\n", input);
		free(input);
	}

	return 0;
}
