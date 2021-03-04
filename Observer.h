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

	
protected:
	Subject() : observerCount(0)
	{
		for (int i = 0; i < SIZE; i++)
			Observers[i] = nullptr;
	}
private:
	Observer* Observers[SIZE]; // array of pointers
	int observerCount;

};

// define isObserverDuplicate function
