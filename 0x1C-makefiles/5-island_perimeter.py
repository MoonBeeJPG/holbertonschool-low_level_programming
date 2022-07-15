#!/usr/bin/python3
""" A function that returns the perimeter of the island described in grid """


def island_perimeter(grid):
    """ grid is a list of list of integers: 0 represents a water zone, 
    1 represents a land zone """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if i > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
