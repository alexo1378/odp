#pragma once

#define SIZE 8

class Observer
{
public:
	virtual ~Observer() {};
	virtual void Update() = 0;
protected:
	Observer() {};
};

class Subject
{
public:
	virtual ~Subject() {};
	void AddObserver(Observer* observer);
	void RemoveObserver(Observer* observer);
	void Notify();

private: // private means, can only be accessed by the functions above
	Observer *Observers[SIZE]; // declare array of pointers, can only hold pointers to Observer data type.
	int observerCount;

protected:
	Subject() : observerCount(0)
	{
		for (int i = 0; i < SIZE; i++)
			Observers[i] = nullptr; // this is just assigning null ptrs to our array
	}


};

// define isObserverDuplicate function
