/*PA106/G/29043/25
Christopher Nyasimba 
program to calculate total number of occupied rooms accrooss three branches*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0)); // Initialize random number generator

    // Assign random occupancy (1 or 0) to each room
    for (branch = 0; branch < 3; branch++)
    {
        for (floor = 0; floor < 5; floor++)
        {
            for (room = 0; room < 10; room++)
            {
                chain[branch][floor][room] = rand() % 2; // Random 0 or 1
            }
        }
    }

    // Calculate total occupied rooms
    for (branch = 0; branch < 3; branch++)
    {
        for (floor = 0; floor < 5; floor++)
        {
            for (room = 0; room < 10; room++)
            {
                if (chain[branch][floor][room] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    // Display result
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}