/* 
Hello here are the updates:
1. Wishes (!wish)
2. More queschons
3. You can end the game and check your score if you get tired of playing :) (command: !end)

things to add:
1. facts (give me some facts please!)
2. more queschons! always need to make it more interesting :D
*/ 

#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

string queschons[] = {"What is the capital of Canada?", "What is the capital of Greece?", "What is the capital of the United States?", "What is the capital of Mexico?", "What is the capital of South Africa?", "What is the capital of Australia?", "What is the capital of Japan?", "Which country has the largest population?", "Who is the current prime minister of Israel? (Last name) ", "What is the capital of Israel?", "How many countries are there in Southeast Asia?", "How many presidents have there been in Singapore?", "How many presidents have there been in the United States?", "In which year did India gain its independence?", "In which year was the Republic of China formed by Mao Zedong?", "How many stars does the India flag have?", "Who is the current prime minister of Japan? (full name)", "Who was the first president of the United States? (full name)", "Who was the second president of the United States? (full name)", "Who was the third president of the United States (full name)", "In which year did the first astronauts land on the moon?", "Which US president was elected into office in 1969? (last name)", "Three US presidents have faced impeachment - Donald Trump, Andrew Johnson and who? (full name)", "In which year was the United Nations established?", "What was used before the baton was invented to conduct?", "You could be arrested for drinking what in ancient Turkey?", "What is the capital of Bulgaria?", "What is the capital of Belarus?", "What is the capital of Estonia?", "What is the capital of Lithuania?", "Who is the only US president to serve two non-consecutive terms in office? (last name)", "What is the country with the second highest population?", "What is China's population (1dp did you think I was that bothered)", "Who invented the telephone (last name)", "Where were the 1936 Olympics held? (city)", "In what year did the Vietnam War end?", "What is the largest city by population in India?", "What is the largest city by population in the world?", "Who wrote The Picture of Dorian Gray? (full name)", "Who wrote Oliver Twist? (full name)", "Which novel starts with the line, \"It was a bright cold day in April, and the clocks were striking thirteen\"?", "What is the largest city in Europe by population?", "Which city in China has the largest population?", "Which sport is Andy Murray mostly associated with?", "What is the capital of Chile?", "What is the smallest country in the world?", "Alberta is a province of which country?", "What is the only letter that does not appear in any US state", "What is the only vowel not used as the first letter of a US state?", "What is the most common letter used on the keyboard?", "Where would you find the River Thames? (city)", "What is the longest river in the world?", "Which English city was once known as Duroliponte?", "The first successful vaccine was introduced by Edward Jenner in 1796. Which disease did it guard against?", "Who won the FIFA Women's World Cup in 2019?", "What piece of fruit is found at the top of the men's Wimbledon trophy?", "With what sport is the word \"Wimbledon\" associated with?", "Which nuts are used in marzipan?", "Which vitamin is the only one that you will not find in an egg?", "What is Japanese sake made from?", "Which singer has the most UK Number One singles ever?", "What is David Bowie’s real name?", "Who is the only musician ever to have been awarded the Nobel prize for literature?", "Which year was the Premier League founded?", "Which singer was known amongst other things as 'The King of Pop'?", "Which footballer has the most Instagram followers as of 2020?", "T or F - Vietnamese is an official language in Canada", "T or F - An emu can fly", "T or F - a woman has walked on the moon", "T or F - President Theodore Roosevelt's son was called Kermit", "Which city will host the 2028 Olympic Games?", "In what year did The Beatles split up?", "What is the nationality of Jusin Bieber?", "What is the largest landlocked country in the world by size?", "Which state was Donald Trump born in?", "What language is spoken in Brazil?", "What is the capital of Finland?", "What country's capital is Reykjavik?", "What do Lord of the Rings author J.R.R. Tolkien’s initials stand for?", "Who authored The Hunger Games book series?", "What is the best selling novel of all time?", "Which planet is nearest to the sun?", "How many novels did Roald Dahl write?", "Where is the smallest bone in a human located?", "How many hearts does an octopus have?", "How many stomachs do cows have?", "What is the name of the pig in Charlotte’s Web?", "George Orwell's 1984 was published in what year?", "Elon Musk is the CEO of which global brand?", "What does GIF stand for?", "Name the actress who plays the role of Eleven in Stranger Things.", "What was the first film to be released in the Marvel Cinematic Universe?", "What position does Harry play on the Quidditch team?", "How many Pirates of the Caribbean films have been released?", "Which year did the Vietnam War start?", "Which year did the European Union first introduce the Euro as currency?", "Which artist painted the Mona Lisa?", "Which one of the ancient seven wonders of the world are still standing? (full name)", "What is the name of the party Hitler was in?", "What is the world's largest railway station?", "What does Entomology study?", "Which continent is Eritrea in?", "What is the capital of Bosnia and Herzegovina?", "What is the state capital of California?", "In which year did Hitler become the councillor of Germany?", "Who wrote To Kill a Mockingbird?", "Who appears on the US $50 note? (last name)", "Fill in the blank: an A4 paper is 210mm * ___mm", "Who appears on the US $100 note (full name)", "Who appears on the most currencies?", "How many currencies does Queen Elizabeth II appear on?", "What was the first country to print Queen Elizabeth II on their dollar bills?", "Who is the prime minister of India? (last name)", "Elon Musk is a citizen of USA, Canada and what other country?", "Who is the richest person in the world? (full name)", "Two people co-founded Apple: Steve jobs and...? (last name)", "What is the capital of Colombia?", "What is the capital of Brazil?", "What is the capital of Bolivia?", "What is the second tallest mountain in the world?", "What is the least visited country in the world?", "Who was the first US president to own a car? (full name)", "What was Constantinople now known as?", "Where were the hanging gardens located?", "Which Greek philosopher wrote The Republic and The Laws?", "Which book starts with the words, \"Call me Ishmael\"?", "What is the capital of Andorra?", "What is the largest city (in terms of population) in Switerland?", "In Little Women, there are four sisters - Amy, Meg, Jo and who else?", "What is the state capital of Montana?", "What is the state capital of New York?", "Who was the first person to travel to space? (full name)", "In which year was the Soviet Union dissolved?", "Which year was Germany unified (after WW2)?", "In which year did the Cuban Missile Crisis occur?", "What is the smallest province in Canada?", "Darjeeling is a type of tea that comes from which country?", "What is the official language of Trinidad and Tobago?", "What is the basic unit of currency for Yemen?", "In which sport is the Cy Young Trophy awarded?", "Eureka – is the state motto of what state?", "Who is the only person to have won two Nobel prizes? (full name)", "Kiki Haakenson, a policeman's daughter, was the worlds first what?", "Guayaquil is the largest city in what country?", "What is the capital of Ecuador?", "Which country owns the Galapagos Islands?", "Which country owns Easter Island?", "What type of animal is a Samoyed?", "What is the fastest breed of dog?", "What company first invented the modern mouse?", "Who wrote the epic poem Samson Agonites? (full name)", "What is the best score in blackjack?", "Charles Osborne had what for 69 years?", "In Ancient Mesopotamia people worshiped what?", "Which vegetable has the highest sugar content?", "Which disease was once known as white plague?", "What element counts about 2 percent in steel?", "In which US state is the Badlands National Park?", "With which sport was American ‘Babe Ruth’ most commonly associated?", "What does a.m. stand for?", "What is the currency of Peru?", "What is a group of rhinos called?", "What is a group of owls called?", "What is the capital of Serbia?", "What was the first Disney movie ever made?", "In which year was Wikipedia founded?", "Which river has the largest drainage basin?", "What instrument is used to detect an earthquake?", "Which country's currency is the Ngultrum?", "Which year was the printing press invented by Johannes Gutenberg?"};

string ans[] = {"OTTAWA", "ATHENS", "WASHINGTON DC", "MEXICO CITY", "PRETORIA", "CANBERRA", "TOKYO", "CHINA", "NETANYAHU", "JERUSALEM", "11", "7", "45", "1947", "1949", "0", "SHINZO ABE", "GEORGE WASHINGTON", "JOHN ADAMS", "THOMAS JEFFERSON", "1969", "NIXON", "BILL CLINTON", "1945", "VIOLIN BOW", "COFFEE", "SOFIA", "MINSK", "TALLINN", "VILNIUS", "CLEVELAND", "INDIA", "1.4 BILLION", "BELL", "BERLIN", "1975", "MUMBAI", "TOKYO", "OSCAR WILDE", "CHARLES DICKENS", "1984", "ISTANBUL", "SHANGHAI", "TENNIS", "SANTIAGO", "VATICAN CITY", "CANADA", "Q", "E", "E", "LONDON", "NILE", "CAMBRIDGE", "SMALLPOX", "USA", "PINEAPPLE", "TENNIS", "ALMONDS", "VITAMIN C", "RICE", "ELVIS PRESLEY", "DAVID JONES", "BOB DYLAN", "1992", "MICHAEL JACKSON", "CRISTIANO RONALDO", "F", "T", "F", "T", "LOS ANGELES", "1970", "CANADIAN", "KAZAKHSTAN", "NEW YORK", "PORTUGUESE", "HELSINKI", "ICELAND", "JOHN RONALD REUEL", "SUZANNE COLLINS", "DON QUIXOTE", "MERCURY", "19", "EAR", "3", "4", "WILBUR", "1949", "TESLA", "GRAPHICS INTERCHANGE FORMAT", "MILLIE BOBBY BROWN", "IRON MAN", "SEEKER", "5", "1955", "1999", "LEONARDO DA VINCI", "PYRAMIDS OF GIZA", "NAZI", "GRAND CENTRAL TERMINAL", "INSECTS", "AFRICA", "SARAJEVO", "SACRAMENTO", "1933", "HARPER LEE", "GRANT", "297", "BENJAMIN FRANKLIN", "QUEEN ELIZABETH II", "33", "CANADA", "MODI", "SOUTH AFRICA", "JEFF BEZOS", "WOZNIAK", "BOGOTA", "BRASILIA", "LA PAZ", "K2", "TUVALU", "THEODORE ROOSEVELT", "ISTANBUL", "BABYLON", "PLATO", "MOBY DICK", "ANDORRA LA VELLA", "ZURICH", "BETH", "HELENA", "ALBANY", "YURI GAGARIN", "1991", "1990", "1962", "PRINCE EDWARD ISLAND", "INDIA", "ENGLISH", "RIAL", "BASEBALL", "CALIFORNIA", "MARIE CURIE", "MISS WORLD", "ECUADOR", "QUITO", "ECUADOR", "CHILE", "DOG", "GREYHOUND", "XEROX", "JOHN MILTON", "21", "HICCUPS", "PIGEONS", "ONION", "TUBERCULOSIS", "CARBON", "SOUTH DAKOTA", "BASEBALL", "ANTE MERIDIAN", "SOL", "CRASH", "PARLIAMENT", "BELGRADE", "SNOW WHITE AND THE SEVEN DWARFS", "2001", "CONGO", "SEISMOGRAPH", "BHUTAN", "1439"};

string greetings[] = {"Top of the day to you!", "Good day!", "I miss you :(", "Hehe!", "Hope you're having a great day!", "I like your name hehe", "Your name is cool! :D", "Mrrw!", "Yay!"};

// string facts[] = {"Fun fact: 56% of typing is done with your left hand!", "Fun fact: There are 187,888 lakes in Finland larger than 5 ares (500 square metres). Lol bet you didn't know that!"};

int question = 1; // question number
int q = 0; // randomized question
int clues = 0; // number of clues given
set<int>s; // to check for repeat queschons
void ask(); // asking question
void answer(); // input answer
void firstclue(); // give first clue
void moreclue(); // give next clues, if any
void init(); // initialize
void wrong(); // say correct answer 
void points(); // add points
char answerq[100]; // hint
string name; // name of person playing 
int points1 = 0; // number of points 
int correctans = 0; // number of queschons answered correctly
string a; // answer input
bool repeat = false; // check if it is repeat queschon
int wish = 0; // wishes lol 
void facts(); // give facts, sometimes!

void init() {
  cout << "Enter your name! ";
  getline(cin, name);
  int thing = rand() % sizeof(greetings)/sizeof(greetings[0]);
  cout << "Hello, " << name << "! " << greetings[thing] << endl;
  cout << "If you want to read credits, type !credits\n\n";
}

void ask() {
  clues = 0;
  repeat = false;
  int size1 = sizeof(queschons)/sizeof(queschons[0]);
  // cout << size << endl;
  // size1++;
  q = rand() % size1;
  // q++;
  if (s.find(q) == s.end()) {
    repeat = true;
    s.insert(q);
    cout << "Question #" << question << ": " << queschons[q] << " ";
    question++;
    for (int i=0; i<ans[q].length(); i++) answerq[i] = '_';
  }
  else if (s.size() == size1-2) {
    cout << "Thank you! " << name << ", you have " << points1 << "points! (Correct answers: " << correctans << ")";
    exit(EXIT_FAILURE);
  }
}

void firstclue() {
  cout << queschons[q] << " ";
  int length = ans[q].length();
  cout << "Hint: ";
  for (int i=0; i<ans[q].length(); i++) cout << answerq[i];
  cout << "\n";
  clues++;
  answer();
}

void moreclue() {
  cout << queschons[q] << " ";
  // randomize a number of letters to give clue which has to be smaller than length()/2
  int letters = rand() % ans[q].length() + ans[q].length()/2;
  letters/=2;
  // then randomize pos
  for (int i=0; i<letters; ++i) {
    int let = rand() % ans[q].length();
    answerq[let-1] = ans[q][let-1];
  }
  cout << "Hint: ";
  for (int i=0; i<ans[q].length(); i++) cout << answerq[i];
  cout << "\n";
  clues++;
  answer();
}

void answer() {
  getline(cin, a);
  for (int i=0; i<a.length(); i++) a[i] = toupper(a[i]);
  int x;
  if (ans[q].length()/2 < 3) x = ans[q].length()/2;
  else x = 3;
  if (a == "!END") {
    cout << "Thank you, " << name << "! Hope you had fun! You earned " << points1 << " points (correct answers: " << correctans << ")";
    exit(EXIT_FAILURE);
  }
  else if (a == "!CREDITS") {
    cout << "Obviously, credits go to me. However thank you Neha. And Whale. And Blue Grapes. And Chloe whom I sent it to but she didn't say anything. That is all\n";
    cout << "NOW GIVE A LEGITIMATE ANSWER ";
    answer();
  }
  else if (a == "IDK") {
    cout << "haha too bad ";
    answer();
  }
  else if (a == "!WISH") {
    if (wish == 3) {
      cout << "U greedy pig. Only 3 wishes lah stupid I told u so ";
      if (clues == 0 && clues < x) firstclue();
      else if (clues < x) moreclue();
    }
    else if (wish == 0) {
      cout << "Good job you found this! So... you have three wishes and each time I'll (I referring to me, obviously) give you the answer (and you'll get full marks yay!) and we'll just carry on with life! Like how it should be.\n";
      cout << "The answer is " << ans[q] << "!";
      clues = 0;
      wish++;
      points();
    }
  }
  else if (a == ans[q]) {
    cout << "Yes, " << ans[q] << "!";
    points();
  }
  else if (clues == 0 && clues < x) firstclue();
  else if (clues < x) moreclue();
  else wrong();
}

void wrong() {
  cout << name << ", you got it wrong! The correct answer was " << ans[q] << " (Press ENTER to continue)";
  getchar();
  cout << "\n\n";
}

void points() {
  if (clues == 0) {
    points1 += 5;
    cout << " " << name << " +5\n\n";
    correctans++;
  }
  else if (clues == 1) {
    points1 += 3;
    cout << " " << name << " +3\n\n";
    correctans++;
  }
  else if (clues == 2) {
    points1 += 2;
    cout << " " << name << " +2\n\n";
    correctans++;
  }
  else if (clues == 3) {
    points1++;
    cout << " " << name << " +1\n\n";
    correctans++;
  }
}

int main() {
  srand (time(NULL));
  init();
  while (true) {
    ask();
    if (repeat) {
      answer();
    }
  }
}