#ifndef MAZE_H
#define MAZE_H

void generate_maze(int maze[][10], int rows, int cols);
void print_maze(int maze[][10], int rows, int cols);
int solve_maze(int maze[][10], int x, int y, int rows, int cols);

#endif
