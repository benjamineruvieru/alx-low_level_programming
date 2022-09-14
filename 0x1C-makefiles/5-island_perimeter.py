#!/usr/bin/python3
"""
Technical interview preparation.
"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    pos = 0
    for row in grid:
        index = 0
        for num in row:
            if num == 1:
                perimeter = perimeter + 4
                if grid[pos+1][index] == 1:
                    perimeter = perimeter - 1
                if grid[pos][index+1] == 1:
                    perimeter = perimeter - 1
                if grid[pos-1][index] == 1:
                    perimeter = perimeter - 1
                if grid[pos][index-1] == 1:
                    perimeter = perimeter - 1
            index = index + 1
        pos = pos + 1
    return perimeter
