#pragma once

#define SIZE 4

class Observer;

class Subject
{
public:
	virtual ~Subject() {};
	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);
	



	Subject() : observerQuantity(0) 
	{ 
		for (int i = 0; i < SIZE; i++) 
			Observers[i] = nullptr; 
	}
private:
	Observer* Observers[SIZE]; // array of pointers
	int observerQuantity;

};

// define isObserverDuplicate function
