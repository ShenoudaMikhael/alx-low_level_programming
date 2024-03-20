#!/usr/bin/python3
"""island_perimeter Module"""


def island_perimeter(grid):
    """return island perimeter"""
    height = len(grid)
    if height == 0:
        return 0
    width = len(grid[0])
    if width == 0:
        return 0
    ccc = []
    for h in range(0, height):
        for w in range(0, width):
            if grid[h][w] == 1:
                ccc.append((h, w))

    p = 0
    for q in ccc:
        cp = 4
        if grid[q[0] - 1][q[1]] == 1:
            cp -= 1
        if grid[q[0] + 1][q[1]] == 1:
            cp -= 1
        if grid[q[0]][q[1] + 1] == 1:
            cp -= 1
        if grid[q[0]][q[1] - 1] == 1:
            cp -= 1
        p += cp
    return p
