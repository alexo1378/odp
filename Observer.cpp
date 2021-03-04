
#include <iostream>
#include "Observer.h"

void Subject::addObserver(Observer* observer)
{

	// replace with isObserverDuplicate function

	for (int i = 0; i < observerCount; i++)
	{
		if (Observers[i] == observer)
			return;
	}

	if (observerCount < SIZE)
	{
		observerCount++;
		Observers[observerCount - 1] = observer;
	}

}
void Subject::removeObserver(Observer* observer)
{
	for (int i = 0; i < observerCount; i++)
		if (Observers[i] == observer)
		{
			for (int j = i; j < observerCount; j++)
				Observers[j] = Observers[j + 1];
			observerCount--;
			break;
		}
}


int main()
{

	return 0;
}
