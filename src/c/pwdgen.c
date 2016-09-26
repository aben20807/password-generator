#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void printInfo();

int main(int argc, char *argv[]){
	printInfo();
	char command[10];
	while(true){
		printf(">");
		gets(command);
		//printf(command);
		if(strcmp(command, "exit") == 0){
			printf("\nBye Bye~\n");
			break;
		}
		else if(strcmp(command, "mode") == 0){
			printf("\n1:\n");
		}
		else if(strcmp(command, "help") == 0){
			printInfo();
		}
		else{
			printf("\n%s::Not exist this command, sorry~ OuO\n", command);
			continue;
		}
	}
	return 0;
}

void printInfo(){
	printf("\n%s\n%s\n%s\n%s\n%s\n%s\n",
			"┌───────────────────────────┐",
			"│  INFO                     │",
			"│  >mode                    │",
			"│  >exit                    │",
			"│  >help                    │",
			"└───────────────────────────┘");
}
