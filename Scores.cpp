
#include "Scores.h"

GameEntry::GameEntry(const std::string& n, int s)	// constructor
	: name(n), score(s) { }
// accessors
std::string GameEntry::getName() const
{ 
	return name; 
}
int GameEntry::getScore() const 
{
	return score; 
}


void Scores::add(const GameEntry& e) 
{	
	int maxPlayEnt = ceil(maxEntries / 2);
	int occurence = 0;

	for (int i = 0; i < maxEntries; i++)
	{
		if (entries[i].getName() == e.getName())
		{// scan for  how many entries the player has
				occurence++;
		}
	} 
	
	if (occurence >= maxPlayEnt)
	{ // exit and dont add new game entry
		return;
	}


	int newScore = e.getScore();		// score to add
	if (numEntries == maxEntries) {		// the array is full
		if (newScore <= entries[maxEntries - 1].getScore())
			return;					// not high enough - ignore
	}
	else numEntries++;				// if not full, one more entry

	int i = numEntries - 2; 			// start with the next to last
	while (i >= 0 && newScore > entries[i].getScore()) {
		entries[i + 1] = entries[i];		// shift right if smaller
		i--;
	}
	entries[i + 1] = e;				// put e in the empty spot

}


GameEntry Scores::remove(int i) throw(IndexOutOfBounds) 
{
	if ((i < 0) || (i >= numEntries))		// invalid index
		throw IndexOutOfBounds("Invalid index");
	GameEntry e = entries[i];			// save the removed object 
	for (int j = i + 1; j < numEntries; j++)
		entries[j - 1] = entries[j];		// shift entries left
	numEntries--;				// one fewer entry
	return e;					// return the removed object
}

Scores::Scores(int maxEnt) 
{			// constructor
	maxEntries = maxEnt;			// save the max size
	entries = new GameEntry[maxEntries];	// allocate array storage
	numEntries = 0;				// initially no elements
}


void Scores::printScore()
{
	std::cout << "Player Name\t\t" << "Scores" << "\n";
	for (int i = 0; i < numEntries; i++)
	{

		std::cout <<entries[i].getName()<<"\t\t\t"<<entries[i].getScore()<<"\n" ;
	}
	
}


Scores::~Scores() {				// destructor
	delete[] entries;
}
