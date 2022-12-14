#include "../inc/function.h"

void cis() {
	int i,l;
	int flag=0, ln=1;
	
	char string[2000], pattern[20], upattern[20];
	FILE *in_file=fopen("../docs/file.txt","r");
	if(in_file == NULL) {
		printf("File missing.");
		exit(1);
	}
	printf("Enter the pattern: ");
	if(scanf("%s", pattern) !=1 ) {
		printf("No input.");
		exit(1);
	}
	l = strlen(pattern);
	for(i=0; i<l;i++) {
		upattern[i] = toupper(pattern[i]);
	}


	while (fgets(string, sizeof string, in_file)) {
		l = strlen(string);
		for(i=0; i<l; i++) {
			string[i] = toupper(string[i]);
		}
		if(strstr(string, upattern)) {
			printf("Found: %s\n", pattern);
			flag=1;
			//exit(1);
			goto tag;
		}
		if(strchr(string, '\n')) {
			ln +=1;
		}
	}
	if(flag==0) {
		printf("Not Found.");
	}
tag: fclose(in_file);
}
