#include <stdio.h>
#include "maze.h"

int main() {
    int rows = 10;
    int cols = 10;
    int maze[10][10];

    generate_maze(maze, rows, cols);
    printf("Generated Maze:\n");
    print_maze(maze, rows, cols);

    if (solve_maze(maze, 0, 0, rows, cols)) {
        printf("Maze solved:\n");
        print_maze(maze, rows, cols);
    } else {
        printf("No solution found for the maze.\n");
    }

    return 0;
}
