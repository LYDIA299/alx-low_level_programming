#!/usr/bin/python3
""" Defines an island perimeter """


def island_perimeter(grid):
    """
    Args:
        grid(list): list of list
    Return:
        The perimeter of the island defined in grid
    zero(0) represents water and one(1) represents the land
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
