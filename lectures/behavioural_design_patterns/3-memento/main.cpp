#include <iostream>
#include <stack>
#include "Player.h"
#include "PlayerMemento.h"

using std::cin;
using std::cout;
using std::endl;
using std::stack;

// This function acts as the "caretaker"
// Normally, we might have a separate class
// acting as the caretaker.
main()
{
  Player p;
  int choice;
  stack<PlayerMemento*> states;
  bool done;

  // Should use the Command pattern here
  // for the menu options; omitted to
  // avoid confusion between what is 
  // Memento and what is Command.
  while (!done)
  {
    cout << endl;
    cout << "       Turns Left : " << p.turnsLeft() << endl;
    cout << "       Hit Points : " << p.hitPoints() << endl;
    cout << "Experience Points : " << p.experiencePoints() << endl << endl;

    cout << "1. Attack" << endl;
    cout << "2. Undo" << endl;
    cout << "3. Quit" << endl << endl;

    cout << "Your choice: ";

    cin >> choice;

    switch (choice)
    {
      case 1:
        states.push(p.createMemento());
        cout << endl << "You attack a nearby monster!" << endl;
        p.attack();
        break;

      case 2:
        if (states.empty())
          cout << endl << "No more moves left to undo!" << endl;
        else
        {
          p.setMemento(states.top());
          delete states.top();
          states.pop();
        }
        break;

      case 3:
        done = true;
        break;

      default:
        cout << endl << "Invalid choice, please try again." << endl;
        break;
    }

    if (p.hitPoints() <= 0)
    {
      cout << "The monster has slain you." << endl;
      done = true;
    }
    else if (p.turnsLeft() == 0)
    {
      cout << "You have no turns left." << endl;
      done = true;
    }
  }
}

