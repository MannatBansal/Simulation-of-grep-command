#include "../inc/function.h"

int main(){
	printf("1.Case Insensitive search\n2.print file line\n3.search all files in current directory\n4.search files with given extension\n5.search files with same name\n6.Whole word search\n7.Exit\n");

	int ch;
	while(1)
	{
		printf("Enter the type of search: ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				{
					cis();
					break;
				}
			case 2:
				{
					pfl();
					break;
				}
			case 3:
				{
					satf();
					break;
				}
			case 4:
				{
					sfwe();
					break;
				}
			case 5:
				{
					sfwn();
					break;
				}
			case 6:
				{
					wws();
					break;
				}
			case 7:
				{
					printf("Exitting...\n");
					return EXIT_SUCCESS;
					break;
				}
			default:
				{
					printf("Invalid choice..\n");
					break;
				}
		}
	}
}
