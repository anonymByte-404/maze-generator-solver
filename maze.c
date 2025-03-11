#include <stdio.h>
#include <stdlib.h>
#include "maze.h"

void generate_maze(int maze[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            maze[i][j] = (rand() % 2); 
        }
    }
    maze[0][0] = 0;
    maze[rows-1][cols-1] = 0;
}

void print_maze(int maze[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}

int solve_maze(int maze[][10], int x, int y, int rows, int cols) {
    if (x == rows - 1 && y == cols - 1) {
        return 1;
    }

    if (x >= 0 && x < rows && y >= 0 && y < cols && maze[x][y] == 0) {
        maze[x][y] = 2;

        if (solve_maze(maze, x + 1, y, rows, cols) || 
            solve_maze(maze, x, y + 1, rows, cols) ||
            solve_maze(maze, x - 1, y, rows, cols) || 
            solve_maze(maze, x, y - 1, rows, cols)) {
            return 1;
        }

        maze[x][y] = 0;
    }

    return 0;
}
