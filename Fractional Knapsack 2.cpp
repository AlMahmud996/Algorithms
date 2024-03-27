#include<iostream>

struct GroceryItem {
    float weight;
    float cost;
};

void knapsack(int n, GroceryItem items[], float capacity) {
    float totalCost = 0;
    float remainingCapacity = capacity;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= remainingCapacity) {
            totalCost += items[i].cost;
            remainingCapacity -= items[i].weight;
            std::cout << "Adding " << items[i].weight << "kg of item worth " << items[i].cost << "tk\n";
        }
    }

    std::cout << "\nTotal cost: " << totalCost << "tk\n";
}

int main() {
    const int numItems = 4;
    GroceryItem items[numItems] = {
        {3, 470},
        {2, 230},
        {3, 360},
        {5, 500}
    };

    float capacity = 10;

    std::cout << "Grocery items and their prices:\n";
    for (int i = 0; i < numItems; i++) {
        std::cout << "Item " << i+1 << ": " << items[i].weight << "kg - " << items[i].cost << "tk\n";
    }

    std::cout << "\nShopping bag capacity: " << capacity << "kg\n\n";

    knapsack(numItems, items, capacity);

    return 0;
}
