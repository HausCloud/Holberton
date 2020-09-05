#!/usr/bin/python3


def island_perimeter(grid):
    perimeter = 0
    booly = -1
    tbooly = -1
    bbooly = -1
    lbooly = -1
    rbooly = -1
    for listy in grid:
        if 1 in listy:
            booly = 0
    if booly == -1:
        return 0
    for gidx in range(0, len(grid)):
        for lidx in range(0, len(grid[gidx])):
            if grid[gidx][lidx] == 1:
                try:
                    if gidx == 0 and grid[gidx][lidx] == 1:
                        perimeter += 1
                    else:
                        grid[gidx - 1]
                except IndexError:
                    perimeter += 1
                    tbooly = 0
                try:
                    grid[gidx + 1]
                except IndexError:
                    perimeter += 1
                    bbooly = 0
                try:
                    if lidx == 0 and grid[gidx][lidx] == 1:
                        perimeter += 1
                    else:
                        grid[gidx][lidx - 1]
                except IndexError:
                    perimeter += 1
                    lbooly = 0
                try:
                    grid[gidx][lidx + 1]
                except IndexError:
                    perimeter += 1
                    rbooly = 0
                if tbooly == -1:
                    if grid[gidx - 1][lidx] == 0:
                        perimeter += 1
                if bbooly == -1:
                    if grid[gidx + 1][lidx] == 0:
                        perimeter += 1
                if lbooly == -1:
                    if grid[gidx][lidx - 1] == 0:
                        perimeter += 1
                if rbooly == -1:
                    if grid[gidx][lidx + 1] == 0:
                        perimeter += 1
            tbooly = -1
            bbooly = -1
            lbooly = -1
            rbooly = -1

    return perimeter
