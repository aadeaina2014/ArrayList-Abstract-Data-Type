#include <cstdlib>
//
#include "Scores.h"
using namespace::std;


int main()
{
	Scores gameScores(10);
	GameEntry thisGame1("Mike", 1105);
	gameScores.add(thisGame1);
	GameEntry thisGame2("Rob", 750);
	gameScores.add(thisGame2);
	GameEntry thisGame3("Paul", 720);
	gameScores.add(thisGame3);
	GameEntry thisGame4("Anna", 660);
	gameScores.add(thisGame4);
	GameEntry thisGame5("Rose", 590);
	gameScores.add(thisGame5);
	GameEntry thisGame6("Jack", 510);
	gameScores.add(thisGame6);
	GameEntry thisGame7("Gill", 740);
	gameScores.add(thisGame7);
	GameEntry thisGame8("Mark", 80);
	gameScores.add(thisGame8);
	GameEntry thisGame9("Mark", 80);
	gameScores.add(thisGame9);
	GameEntry thisGame10("Mark", 80);
	gameScores.add(thisGame10);
	GameEntry thisGame11("Mark", 80);
	gameScores.add(thisGame11);
	GameEntry thisGame12("Mark", 80);
	gameScores.add(thisGame12);
	GameEntry thisGame13("Mark", 80);
	gameScores.add(thisGame13);
	GameEntry thisGame14("Mark", 80);
	gameScores.add(thisGame14);
	gameScores.printScore();
	system("Pause");
	return EXIT_SUCCESS;
}