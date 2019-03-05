/* Backtracking- Rat Maze Problem
   Returns all the possible paths to the maze.

*/
#include <iostream>
using namespace std;


void printPath(int path[][10], int n) {
    cout<<"Path: \n";
    for(int i=0; i<n;i++) {

        for(int j=0;j<n;j++) {

            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
}
void findPath(int maze[][10], int n, int x, int y, int path[][10]) {

    // Returns false if position if out of bounds
    if(x < 0 || x >= n || y < 0 || y >= n) return;

    // If it reached the destination then it prints the path and returns true.
    if(x == n-1 && y == n-1) {
        path[x][y] = 1;
        printPath(path, n);
        return;
    }

    // If path is not available or if we've gone through the path already then, it returns false.
    if(maze[x][y] == 0 || path[x][y] == 1) return;

    // If all the above conditions are passed than, we can walk through this path.
    path[x][y] = 1;

    // Right
    findPath(maze, n, x, y+1, path);
    // Left
    findPath(maze, n, x, y-1, path);
    // Top
    findPath(maze, n, x-1, y, path);
    // Bottom
    findPath(maze, n, x+1, y, path);

    path[x][y] = 0;
}


void findPath(int maze[][10], int n) {

    // Generates a path matrix.
    int path[10][10] = {0};

    findPath(maze, n, 0, 0, path);
}

int main() {

    int n = 4;
    int maze [10][10] = {
        // {1, 1, 0},
        // {1, 1, 0},
        // {0, 1, 1}
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    int maze2[10][10] = { {1, 0, 0, 0}, 
                          {1, 1, 1, 1}, 
                          {0, 1, 0, 1}, 
                          {1, 1, 1, 1} 
                        };
    findPath(maze2, n);
    return 0;
}