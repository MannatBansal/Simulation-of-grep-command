#include "../inc/function.h"

void pfl() {
	char string[2000];
	char student[100];
	int line_number = 1;

	FILE *in_file = fopen("../docs/file.txt", "r");
	if (in_file == NULL) {
		printf("Error file missing\n");
		exit(1);
	}
	printf("Please enter a word::");
	if (scanf("%s", student) != 1) {
		printf("No input\n");
		exit(1);
	}
	while (fgets(string, sizeof string, in_file)) {
		if (strstr(string, student)) {
			printf("line number is: %d\n", line_number);
		}
		if (strchr(string, '\n')) {
			line_number += 1;
		}
	}
	fclose(in_file);
}
