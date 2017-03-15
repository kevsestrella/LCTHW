#include <stdio.h>

int main( int argc, char * argv[] ) {

	char letter = 0;
	for(int i = 1; argv[i] ; i++) {
		for (int j = 0; letter = argv[i][j], letter; j++) {
			switch(letter) {
				case 'A':case 'I':case 'U':case 'E':case 'O':
				case 'a':case 'i':case 'u':case 'e':case 'o':
				
					printf("%d: '%c'\n", j,letter);	
				break;
				case 'Y':
				case 'y':
					if( j > 2 ){				
						printf("%d: '%c'\n", j,letter);
						break;
					}
				default:
					printf("%d: '%c' is not a vowel\n", j, 
								letter);
			}
		}
	}
return 0;
}
