#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//It's a functions
int book();
void peter_Pan_storyline();

//there will be a cout ---- for easy visuals on output
int main()
{
	// A variable 
	string userName;
	// 
	int distance = 18;

	int& f_step = distance;

	//functions
	book();

	//Title 
	cout << "\n\t***Neverland that you can't escape***";
	//ask the user there name
	cout << "\n\t What is your name? ";
	cin >> userName;
	cout << "\n" << userName << ": (Look for the book)\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	system("Pause");

	cout << "\n\n\t\t (Unknow person appear)";
	cout << "\n" << userName << ": Where am I? \n";
	// distance 18feet 
	cout << "\n Unknow kid: Hello, you are in the neverland where you never grow up";
	cout << "\n Unknow kid: You need to escape because peter pan will take away your soul";
	cout << "\n Unknow kid: You need to find a book to destory neverland and peter pan";
	cout << "\n\n" << userName << ": So I need to find the book to get out of this place\n";
	cout << "\n Unknow kid: Yes, before peter pan found the book and I have to disappear.";
	cout << "\n\t\t(Unknow kids disappear) \n\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	system("Pause");

	// The distance is 18 feet the book
	cout << "\n *** The book is:" << distance << "feet away\n" << endl;
	
	// reference
	f_step = 30;
	cout << "\n Peter pan distance from you" << f_step << "miles away" << endl;

	// The user inputed name 
	cout << "\n" << userName << ": I need to find the map. ";
	cout << "\n It would help me to find it";
	cout << "\n I have to explore around because there might be a map to led me to it. \n\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	system("Pause");

	// peter pan distance
	cout << "\n Peter pan distance from you " << f_step << "Few Meters Away" << endl;

	cout << "The book is:" << f_step << "few feet away" << "Few Feet away " << endl;

	// reference addresses
	int* location = &distance;
	*location = 100;
	
	// The user is look a map
	cout << "\n" << userName << "(Found the map it was on the rock)";
	cout << "\n" << userName << ": According to this map the book should probably be in the skull island or in the hollys treasure chest. ";

	cout << "\n skull of island" << &distance << "travel" << endl;
	cout << "\n" << userName << ":I'm here at skull of island and I've to look for the book"; 
	cout << "\n" << userName << ":I can't find it in here but I found a bag.";
	cout << "\n" << userName << ":Now to look on hollys treasure chest."; 

	cout << "\n hollys treasure chest" << location << "travel" << endl;
	cout << "\n" << userName << ":I'm here at hollys treasure chest and I need to look for the book quick.";
	cout << "\n" << userName << ":I need to open the chest and need to found the key. ";
	cout << "\n" << userName << ":I found something!!!I think it's a book. ";

	// The function where it led to peter pan story
	peter_Pan_storyline();
	
	cout << "\n\nUnknow kid: Sorry " << userName << " now I can leave." << endl;
	cout << "\nUnknow kid: to espace this place you have to do the same thing that I did. ";
	cout << "\nUnknow kid: lie to them to find the book and touch them so they will stay in neverland";
	cout << "\nUnknow kid: You will leave the neverland and peter pan is away until there's a kid.";
	cout << "\nUnknow kid: He will look for someone soul and don't be catch by him.";
	return 0;
}

//functions
int book()
{
	//title
	cout << "\n :Question : Location : Answer: ";
	cout << "\n\t** Found the book before peter pan **";
	cout << "\n\t** Don't let peter pan to get the book **\n";
	system("Pause");
	return 0;
}

//function 
void peter_Pan_storyline()
{
	cout << "\nIf you read this book it will tell the story about peter pan and the neverland."; 
	cout << "\nDon't let him to get you because he's a shadow that will allow someone to stay in neverland. ";
	cout << "\nYou wouldn't leave from neverland until there's a new kids in the neverland. ";
	system("Pause");
}
