// second-squirel

#include <stdlib.h>
#include <stdio.h>

void manyLines();
void printLine();

int main() {
	// Initial lines
	manyLines();
	// Actual line
	printf( "1 Go find the golden nut!\n" );
	// Final lines
	manyLines();
}

void manyLines() {
	int r;
	r = rand() % 500;
	r += 1000;
	for( int i = 0; i < r; i++ ) {
		printLine();
	}
}

void printLine() {
	int r;
	// Number to print
	r = rand() % 100;
	while( r == 1 ) {
		r = rand();
	}
	// Print number
	printf( "%d ", r );
	// Line length
	r = rand() % 20;
	r += 20;
	// Print line
	for( int i = r; i > 0; i-- ) {
		r = rand() % 30;
		r += 97;
		if( r >= 123 ) {
			r = 32;
		}
		printf( "%c", r );
	}
	// Newline
	printf( "\n" );
}
