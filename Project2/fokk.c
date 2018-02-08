
#include <stdio.h>
#include <string.h>
#include <conio.h>

#define THISLONG 256

void fokk();

int cards(int shuffles);
void createDeck(aCard *aDeck);


//define struct of cards here
typedef struct  {
	char suit; // Spades, Hearts, Clovers, Diamonds
	char card; // 2,3,4,5,6,7,8,9,10, J, Q, K, A
} aCard;

aCard *theDeck[51];

void createDeck( aCard  *aDeck) {
	int i, cardno, suit;
	for (i = 0; i <= 51; i++) {
		suit = i % 4;
		cardno = i % 13;
		aDeck[i].suit = suit;
		aDeck[i].card = cardno;
	}

	return;

}


// on function to creae the deck
// another function  to shuffle

void main()
{

	//fokk();
	cards(2);
	createDeck(theDeck);
	return;

}


/*
int cards(int shuffles) {
	

	// fill deck , a deck can by an array of cards...
	int cardno, suit;

	aCard aDeck[51];

	for (int i = 0; i <= 51; i++) {
		cardno = i % 13;  // populate cards
		suit = i % 4;
		printf("Card no: %d, suit: %d\n", cardno, suit);
		aDeck[i].card = cardno;
		aDeck[i].suit = suit;
	}



	_getch();
	return 0;
}

















void fokk() {

	char text[THISLONG];
	char front[THISLONG], back[THISLONG];
	int len, fhalf;
	int i;
	printf("Enter a string less than 50 chars: ");
	//scanf_s("%s", text, 10);

	fgets(text, THISLONG, stdin);

	len = strlen(text);
	fhalf = len / 2;

	for (i = 0; i <= len; i++)
	{
		printf("Char nr [%d] is - %c - \n", i, text[i]);
	}


	printf("text is: %s anbd is %d characters long. \n", text, len);
	printf("First half is: %s and second half is %s. \n", front, back);

	_getch();
	return;
}

*/