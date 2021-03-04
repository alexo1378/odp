#include <iostream>
#include "Observer.h"

void Subject::AddObserver(Observer* observer)
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
	// loop through 
	for (int i; i < observerCount; i++)
		Observers[i]->Update();


}

int main()
{
	std::cout << "line";
	return 0;
}
