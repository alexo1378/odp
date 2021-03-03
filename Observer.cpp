
#include <iostream>
#include "Observer.h"

void Subject::addObserver(Observer* observer)
{

	// replace with isObserverDuplicate function

	for (int i = 0; i < observerQuantity; i++)
	{
		if (Observers[i] == observer)
			return;
	}

	if (observerQuantity < SIZE)
	{
		Observers[observerQuantity++] == observer;
	}

}
void Subject::removeObserver(Observer* observer)
{
	for (int i = 0; i < observerQuantity; i++)
		if (Observers[i] == observer)
		{
			for (int j = i; j < observerQuantity - 1; j++)
				Observers[j] = Observers[j + 1];
			observerQuantity--;
			break;
		}
}



class Sub
{
public:
	void addOb(int* element);
	void removeOb(int* element);

	Sub() : obCount{ 0 }, size{ 5 }
	{
		
		for (int i = 0; i < size; i++)
		{
			obArray[i] = nullptr;
		}
	}


private:
	int* obArray[5];
	int obCount;
	int size;

	
};

void Sub::addOb(int* observer)
{
	// check if observer object already exists in array
	// fix this: currently when adding 2nd item to array, it adds 2nd element to both index 0 and 1
	for (int i = 0; i < obCount; i++)
		if (obArray[i] == observer)
			return;

	if (obCount < size)
	{
		obCount++;

		// CHECK if changing below from [obCount-1] to [obCount] fixed above issue
		obArray[obCount-1] = observer;
		
	}
		// increment obCount++
		// assign observer object to array index
}

void Sub::removeOb(int* observer)
{	// currently, there has to be at least 2 items in array for this to work
	// tweak
	for (int i = 0; i < obCount; i++)
		if (obArray[i] = observer)
		{
			for (int j = 0; j < obCount - 1; j++)
				obArray[j] = obArray[j + 1];
			obCount--;
			break;

		}
}

int main()
{
	Sub subject;
	int* a;
	int b = 3;
	a = &b;

	subject.addOb(a);
	std::cout << "added observer\n";
	std::cout << "....";

	int c = 8;
	a = &c;

	subject.addOb(a);
	std::cout << "....";

	subject.removeOb(a);
	std::cout << "removed observer\n";
	std::cout << "....";



	std::cin.get();
	
}
