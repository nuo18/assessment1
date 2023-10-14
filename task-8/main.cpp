#include <iostream>
using namespace std;

// Making a structure for the items
struct Item
{
	string name;
	int id;
};

// Function prototypes
void viewItem(Item* inventory, int index);
void setItem(Item* inventory, int index, int itemId);
void showInventory(Item* inventory, int inventorySize);
void possibleItems();
void exitTool();

void main()
{
    // Declaring the variables
    int inventorySize = 0;
    string command = "";
    
    // Asking the user to enter the size of the inventory within the range of 1 to 16
    do {
        cout << "Please enter an inventory size (1-16): ";
        cin >> inventorySize;
    } 
    while (inventorySize < 1 || inventorySize > 16);
    cout << "> Initialized inventory with " << inventorySize << " slots.\n" << endl;

    // Creating a dynamic array of structs
    Item* inventory = new Item[inventorySize];
    
    // Initializing the inventory with empty slots
    for (int i = 0; i < inventorySize; i++)
    {
		inventory[i] = { "Empty", 0 };
	}

    // The main game loop
    while (command != "exit")
    {
        // Asking the user to enter a command
		// cout << "Please enter a command: ";
        // Waiting for user input
        cout << "> ";
		cin >> command;

		// Checking the command
        // view <number>
        if (command == "view")
        {
			// Declaring the variables
			int index = 0;

            // No need to ask the user to enter the index of the item as it is already entered in the command with a space
			cin >> index;
            cout << endl;

			// Checking if the index is within the range
            if (index >= 0 && index < inventorySize)
            {
				// Calling the viewItem function
				viewItem(inventory, index);
			}
            else
            {
				// Printing an error message
				cout << "Invalid index!" << endl;
                cout << endl;
			}
		}
        // set <index> <item_id>
        else if (command == "set")
        {
			// Declaring the variables
			int index = 0;
			int itemId = 0;

			cin >> index;
			cin >> itemId;

			// Checking if the index is within the range
            if (index >= 0 && index < inventorySize)
            {
				// Calling the setItem function
				setItem(inventory, index, itemId);
			}
            else
            {
				// Printing an error message
				cout << "Invalid index!" << endl;
			}
		}
        // show_all
        else if (command == "show_all")
        {
			// Calling the showInventory function
            cout << endl;
			showInventory(inventory, inventorySize);
		}
        // items
        else if (command == "items")
        {
			// Calling the possibleItems function
            cout << endl;
			possibleItems();
		}
        // exit
        else if (command == "exit")
		{ }
        // Invalid command
        else
        {
			// Printing an error message
            cout << endl;
			cout << "Invalid command!" << endl;
            cout << endl;
		}
    }
}

// All the functions
// Prints the item at the specified index
void viewItem(Item* inventory, int index)
{
	// Printing the item at the specified index
	cout << "Inventory Slot " << index << " information:" << endl;
	cout << "Name: " << inventory[index].name << endl;
    cout << endl;
}

// Sets the item at the specified index
void setItem(Item* inventory, int index, int itemId)
{
	// Setting the item at the specified index
    switch (itemId)
    {
	case 0:
		inventory[index] = { "Empty", 0 };
		break;
	case 1:
		inventory[index] = { "Shield", 1 };
		break;
	case 2:
		inventory[index] = { "Potion", 2 };
		break;
	case 3:
		inventory[index] = { "Gloves", 3 };
		break;
	default:
		cout << "Invalid item id!\n" << endl;
		break;
	}
}

// Shows all the slots in the inventory
void showInventory(Item* inventory, int inventorySize)
{
	// Printing all the items in the inventory
	cout << "Inventory:" << endl;
    for (int i = 0; i < inventorySize; i++)
    {
		cout << "- Slot " << i << ": " << inventory[i].name << endl;
	}

    cout << endl;
}

// Shows all the items that can be set in the inventory
void possibleItems()
{
	// Printing all the items
	cout << "> Items:" << endl;
	cout << "- 0: Empty" << endl;
	cout << "- 1: Shield" << endl;
	cout << "- 2: Potion" << endl;
	cout << "- 3: Gloves\n" << endl;
}

// Exits the tool
void exitTool()
{
	// Exiting the tool
	cout << "Exiting the tool...\n" << endl;
}

//In this challenge, you should build an inventory system using a dynamically
    //allocated array of structs.

    //There should also be an array of all possible inventory items, so that
    //the user can set inventory slots to one of these values. Each index into this
    //array could be classes as an "item id"


    //The player should be able to:
    //- Specify the size of the inventory (1 - 16 slots)
    //- Type commands to interact with the inventory, like so:
    //  - "view <number>"         -> Prints out details of the inventory slot index specified by number.
    //  - "show_all"              -> Shows all slots in the inventory.
    //  - "set <index> <item_id>" -> Sets the inventory specified by #index to the item #item_id
    //  - "items"                 -> Shows all the items you can possibly set a slot to, along with their ids.
    //  - "exit"                  -> Exits the tool

    //Invalid choices (such as setting or viewing and invalid index) should also be handled. 

    //An example of the commands:
    //  - "view 0"  -> Shows details of the first inventory slot
    //  - "set 0 2" -> Sets the first inventory slot to item id #2

    //-------------

    //An example list of items:
    // - 0: Empty
    // - 1: Shield
    // - 2: Potion
    // - 3: Gloves

    //An example session with these items might look like:

    // Please enter an inventory size: 8
    // > Initialized inventory with 8 slots.
    //
    // > view 0
    //
    // Inventory Slot 0 information:
    // Name: Empty
    //
    // > set 0 2
    // > view 0
    //
    // Inventory Slot 0 information:
    // Name: Potion
    //
    // > items
    // - 0: Empty
    // - 1: Shield
    // - 2: Potion
    // - 3: Gloves
    //
    // > show_all
    //
    // Inventory: 
    // - Slot 0: Potion
    // - Slot 1: Empty
    // - Slot 2: Empty
    // - Slot 3: Empty
    // - Slot 4: Empty
    // - Slot 5: Empty
    // - Slot 6: Empty
    // - Slot 7: Empty
    //
    // > exit