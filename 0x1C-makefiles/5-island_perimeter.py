#!/usr/bin/python3
""" A function that returns the perimeter of the island described in grid """


def island_perimeter(grid):
    """ grid is a list of list of integers: 0 represents a water zone, 
    1 represents a land zone """
    perimeter = 0

    for x in range(len(grid)):
        for y in range(len(grid)):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    perimeter += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    perimeter += 1
                if y == 0 or grid[x][y - 1] == 0:
                    perimeter += 1
                if y == len(grid[x]) - 1 or grid[x][y + 1] == 0:
                    perimeter += 1
    return perimeter
