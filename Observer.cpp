#include <iostream>
#include "Observer.h"

void Subject::AddObserver(Observer* observer)
{



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
void Subject::RemoveObserver(Observer* observer)
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

void Subject::Notify()
{
	for (int i{}; i < observerCount; i++)
		Observers[i]->Update();
}


