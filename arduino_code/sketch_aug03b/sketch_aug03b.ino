class Card {
  char suit;
  int value;

  public:
    Card(char, int);
    char getSuit() {return suit;}
    int getValue() {return value;}
};

Card::Card(char x,int y) {
  suit = x;
  value = y;
}

class Deck {
  Card* cards[52];
  int topCard = 0;

  public:
    Deck();
    Card* draw();
    void reset();
    void shuffle();
    
};

Deck::Deck() {
   char possibleSuits[4] = {'H','C','S','D'};
   int possibleValues[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
   for(int i = 0;i < 52; i++) {
    for(int x = 0; x < 4; x++) {
      for (int j = 0; j < 13;j++) {
          Card* car(possibleSuits[x],possibleValues[j]);
          cards[i] = car;
        }
      }
    }
}

Card* Deck::draw() {
  if (topCard >= 52) {
    Serial.print("No cards left");
  }
  else{
  Card* top = cards[topCard];
  topCard++;
  return top;
  }
}

void Deck::reset(){
  char possibleSuits[4] = {'H','C','S','D'};
   int possibleValues[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
   for(int i = 0;i < 52; i++) {
    for(int x = 0; x < 4; x++) {
      for (int j = 0; j < 13;j++) {
          Card* car(possibleSuits[x],possibleValues[j]);
          cards[i] = car;
        }
      }
    }
}

void Deck::shuffle() {
  for(int i = 0; i < 52; i++) {
    int random1 = random(52);
    int random2 = random(52);
    Card* savedCards = cards[random1];
    cards[random1] = cards[random2];
    cards[random2] = savedCards;
  }
}

void setup() {
  
}

void loop() {
  
}
