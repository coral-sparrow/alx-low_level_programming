#!/usr/bin/python3
''' calculating the island perimeter '''


def island_perimeter(grid):
    '''
        calculating the perimeter of the island by calculating every
        cell sides that contribute to the perimeter
                #          up
                #  right  *cel*  left
                #         down

        cells are squared of side 1
        cell side that is facing another cell is deducted
        from calculation, then counting all sides * side_lenght (1)
    '''
    original_grid_dims = (len(grid), len(grid[0]))
    perimeter = 0
    padded_grid = [[0] + row + [0] for row in grid]

    # padding grid to handle edge cases
    padded_grid = [[0] * len(padded_grid[0])] +\
        padded_grid + [[0] * len(padded_grid[0])]
    for row in range(1, original_grid_dims[0] + 1):
        for col in range(1, original_grid_dims[1] + 1):
            if padded_grid[row][col] == 1:
                # normal case the
                #          up
                #  right  *cel*  left
                #         down
                tmp_grid = [
                    padded_grid[row + 1][col],
                    padded_grid[row - 1][col],
                    padded_grid[row][col + 1],
                    padded_grid[row][col - 1]
                ]
                perimeter_cells = [1 for x in tmp_grid if x == 0]
                perimeter += sum(perimeter_cells)
    return perimeter
