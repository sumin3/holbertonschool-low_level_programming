#!/usr/bin/python3
def island_perimeter(grid):
    result = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] != 1:
                        result += 1
                except:
                    result += 1
                try:
                    if grid[i + 1][j] != 1:
                        result += 1
                except:
                    result += 1
                try:
                    if grid[i][j + 1] != 1:
                        result += 1
                except:
                    result += 1
                try:
                    if grid[i][j - 1] != 1:
                        result += 1
                except:
                    result += 1
    return (result)
