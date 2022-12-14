#include "../inc/function.h"

void sfwe() {
	DIR *d;
	struct dirent *dir;
	char path[10];
	d = opendir(".");
	printf("Enter the file extention with (.) ::");
	scanf("%s",path);
	if(d) {
		while((dir = readdir(d)) != NULL) {
			if(strstr(dir->d_name, path)) {
				printf("%s\n", dir->d_name);
			}
		}
		closedir(d);
	}
}
