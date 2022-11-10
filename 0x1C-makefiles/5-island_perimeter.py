#!/usr/bin/python3
def island_perimeter(grid):
    perimeter = 0
    for row in range(0, len(grid)):
        for zone in range(0, len(grid[row])):
            if grid[row][zone] == 1:
                if zone < len(grid[row]) - 1 and grid[row][zone + 1] == 0:
                    perimeter = perimeter + 1
                if zone > 0 and grid[row][zone - 1] == 0:
                    perimeter = perimeter + 1
                if row > 0 and grid[row - 1][zone] == 0:
                    perimeter = perimeter + 1
                if row < len(grid) - 1 and grid[row + 1][zone] == 0:
                    perimeter = perimeter + 1
                if row == 0 or row == len(grid) - 1:
                    perimeter = perimeter + 1
                if zone == 0 or zone == len(grid[row]) - 1:
                    perimeter = perimeter + 1
return perimeter
