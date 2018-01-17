#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <ncurses.h>
#define MAXWORDS 100
#define WORDLEN 11
#define DEBUG 1   // set to 0 to disable debug output

// reads words from the file
// into wl and trims the whitespace off of the end
// DO NOT MODIFY THIS PROTOTYPE
int readWords(char* wl[MAXWORDS], char* filename); 

//modifies s to trim white space off the right side
// DO NOT MODIFY THIS PROTOTYPE
void trimws(char* s);

int genPuzzle(int width, int height, char* wl[MAXWORDS], int wordCount);

int main(int argc, char* argv[]) {
// Do not modify this part. Write your code so that this works.
	char* wordlist[MAXWORDS];
	int wordCount;
	int i;
	int x=0;
	int y=0;
	int time, tri, cir, ex, sqr, r3, l3, opt, shr, r2, l2, r1, l1, lx, ly, rx, ry;
	int cursex = 0;
	int cursey = 0;
	int height;
	int width;
	
	printf("enter height of puzzle\n");
	scanf("%d", &height);
	
	printf("enter width of puzzle\n");
	scanf("%d", &width);
	
	
	wordCount = readWords(wordlist, argv[1]);
		initscr();
		
		
	if (DEBUG) {
		 
		printf("Read %d words from %s \n",wordCount, argv[1]);

		for (i = 0; i< wordCount; i++) {
			
			mvprintw(y, x, "%15s", wordlist[i]);
			x = (x+15);
		
			if( x> (5*(15))){
				x=0;
				y++;
			}
			}
			
		genPuzzle(width, height, &wordlist[MAXWORDS], wordCount);
		
		}
	
	
	
		refresh();
// Your code goes here. Don't forget to include the ncurses library 
	while (1){
		
	}
	endwin();

    return 0;
	}

// Modify this function so it trims the white space 
// off the right side of string s
void trimws(char* s) {

int i;

for(i=0; *s != ' '; i++){

	
}
s[i]=0;

}


// Modify this function so it reads words from the file
// into wl and trims the whitespace off of the end
int readWords(char* wl[MAXWORDS], char* filename) {
	FILE *fp = NULL;
	int i=0;
	fp = fopen(filename,"r"); 
	
	while(!feof(fp)){
		char words[WORDLEN];
		
		fscanf(fp, "%s", words);
		wl[i] = (char*)malloc(strlen(words) +1 );
		strcpy(wl[i], words);
		i++;
	}		
	return i;	
}

int genPuzzle(int width, int height, char* wl[MAXWORDS], int wordCount) {
	
	int i;
	int j;
	int start;
	char letter = 'A';
	int randomNum;
	
	
	for (i=0; i<height; i++){
	for (j=0; j<(width*2); j++){
		
		mvprintw(i+5, j, "%c", letter);
		j+=1;
	}
	}

}


/*
      SQUEAMISH      OSSIFRAGE          ARRAY         STRING        COMPILE         FROZEN
   SEGMENTATION          FAULT        INTEGER          FLOAT         DOUBLE         DOCTOR
        DANIELS


A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A
*/
