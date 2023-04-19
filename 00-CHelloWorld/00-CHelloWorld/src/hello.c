#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const char* HELLO_WORLD = "Hello World!";
	puts(HELLO_WORLD);
	FILE *outputFile  = fopen("output.txt", "w");
    if (outputFile == NULL){
       printf("Error! El archivo no pudo ser abierto\n");
    } else {
    	fputs(HELLO_WORLD, outputFile);
    	fclose(outputFile);
    }

	return 0;
}
