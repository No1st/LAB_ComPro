#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* card structure definition */
struct card {
  const char *face; /* define pointer face */
  const char *suit; /* define pointer suit */
}; /* end structure card */

typedef struct card Card; /* new type name for struct card */

/* prototypes */
void fillDeck(Card wDeck[], const char *wFace[], const char *wSuit[]);
void shuffle(Card wDeck[]);
void deal(const Card wDeck[]);

int main(void) {
  Card deck[52]; /* define array of Cards */

  /* initialize array of pointers */
  const char *face[] = {"Ace",  "Deuce", "Three", "Four", "Five",
                        "Six",  "Seven", "Eight", "Nine", "Ten",
                        "Jack", "Queen", "King"};

  /* initialize array of pointers */
  const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

  srand(time(NULL));          /* randomize */
  fillDeck(deck, face, suit); /* load the deck with Cards */
  shuffle(deck);              /* put Cards in random order */
  deal(deck);                 /* deal all 52 Cards */

  return 0; /* indicates successful termination */
} /* end main */

/* place strings into Card structures */
void fillDeck(Card wDeck[], const char *wFace[], const char *wSuit[]) {
  for (int i = 0; i < 52; i++) {
    wDeck[i].face = wFace[i % 13];
    wDeck[i].suit = wSuit[i / 13];
  }
} /* end function fillDeck */

/* shuffle cards */
void shuffle(Card wDeck[]) {
  for (int i = 0; i < 52; i++) {
    int j = rand() % 52;
    Card temp = wDeck[i];
    wDeck[i] = wDeck[j];
    wDeck[j] = temp;
  }
} /* end function shuffle */

/* deal cards */
void deal(const Card wDeck[]) {
  for (int i = 0; i < 52; i++) {
    printf("%5s of %-15s", wDeck[i].face, wDeck[i].suit);
    if ((i + 1) % 4 == 0)
      printf("\n");
  }
} /* end function deal */
