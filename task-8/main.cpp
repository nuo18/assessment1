#include <iostream>
using namespace std;

// Making a structure for the items
struct Item
{
	string name;
	int id;
};

// Function prototypes
int userChoice();
void viewItem(Item* inventory, int index, int inventorySize);
void setItem(Item* inventory, int index, int itemId, int inventorySize);
void showInventory(Item* inventory, int inventorySize);
void possibleItems();
void exitTool();

void main() {
    int inventorySize = 0;
    string command = "";

    // Getting the inventory size
    do {
        cout << "Please enter a valid inventory size (1-16): ";
        inventorySize = userChoice();
    } while (inventorySize < 1 || inventorySize > 16);
    cout << "> Initialized inventory with " << inventorySize << " slots.\n" << endl;

    // Creating the inventory
    Item* inventory = new Item[inventorySize];

    // Initializing the inventory
    for (int i = 0; i < inventorySize; i++) {
        inventory[i] = { "Empty", 0 };
    }

    // Main game loop
    while (command != "exit") {
        cout << "> ";
        cin >> command;

        // Checking the command
        try {
            if (command == "view") {
                int index = userChoice();
                viewItem(inventory, index, inventorySize);
            }
            else if (command == "set") {
                int index = userChoice();
                int itemId = userChoice();
                setItem(inventory, index, itemId, inventorySize);
            }
            else if (command == "show_all") {
                showInventory(inventory, inventorySize);
            }
            else if (command == "items") {
                possibleItems();
            }
            else if (command != "exit") {
                throw invalid_argument("> Invalid command!");
            }
        }
        catch (exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }

    delete[] inventory; // Deallocate dynamic array memory
    exitTool();
}

// All the functions
// Check for input errors
int userChoice() {
    int value;
    while (!(cin >> value)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "> Invalid input. Please enter an integer: ";
    }
    return value;
}

// Prints the item at the specified index
void viewItem(Item* inventory, int index, int inventorySize) {
    if (index >= 0 && index < inventorySize) {
        cout << "Inventory Slot " << index << " information:" << endl;
        cout << "Name: " << inventory[index].name << endl << endl;
    }
    else {
        throw out_of_range("Invalid index!");
    }
}

// Sets the item at the specified index
void setItem(Item* inventory, int index, int itemId, int inventorySize) {
    if (index >= 0 && index < inventorySize) {
        switch (itemId) {
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
            throw invalid_argument("Invalid item id!");
        }
    }
    else {
        throw out_of_range("> Invalid index!");
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
    system("exit");
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