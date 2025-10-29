/*PA106/G/29043/25
Christopher Nyasimba 
this program is to calculate the number of vacant rooms and occupied rooms using 2d array */



#include <stdio.h>

int main()
{
    int i, j;
    int occupancy[5][10] = {
        {0,1,0,1,0,1,1,0,0,1},
        {1,0,1,0,1,0,0,1,1,0},
        {1,1,1,0,0,1,1,0,0,1},
        {0,1,1,1,0,1,0,1,0,1},
        {1,1,0,1,1,0,1,0,1,0}
    };

    printf("ROOM OCCUPANCY MATRIX (1 = Occupied, 0 = Vacant)\n");
    printf("-------------------------------------------------\n");

    // Display matrix and calculate occupancy per floor
    for (i = 0; i < 5; i++)
    {
        int occupied = 0;
        int vacant = 0;

        printf("Floor %d: ", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("%d ", occupancy[i][j]);
            
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("\nOccupied: %d | Vacant: %d\n\n", occupied, vacant);
    }

    return 0;
}