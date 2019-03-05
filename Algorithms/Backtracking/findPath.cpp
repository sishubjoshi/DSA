/* Backtracking- Rat Maze Problem
   Returns if Path exists or not. It checks for only one path.

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
bool findPath(int maze[][10], int n, int x, int y, int path[][10]) {

    // Returns false if position if out of bounds
    if(x < 0 || x >= n || y < 0 || y >= n) return false;

    // If it reached the destination then it prints the path and returns true.
    if(x == n-1 && y == n-1) {
        path[x][y] = 1;
        printPath(path, n);
        return true;
    }

    // If path is not available or if we've gone through the path already then, it returns false.
    if(maze[x][y] == 0 || path[x][y] == 1) return false;

    // If all the above conditions are passed than, we can walk through this path.
    path[x][y] = 1;

    // Right
    if(findPath(maze, n, x, y+1, path)) {
        path[x][y] = 0;
        return true;
    }
    // Left
    if(findPath(maze, n, x, y-1, path)) {
        path[x][y] = 0;
        return true;
    }
    // Top
    if(findPath(maze, n, x-1, y, path)) {
        path[x][y] = 0;
        return true;
    }
    // Bottom
    if(findPath(maze, n, x+1, y, path)) {
        path[x][y] = 0;
        return true;
    }

    return false;
}


bool findPath(int maze[][10], int n) {

    // Generates a path matrix.
    int path[10][10] = {0};

    return findPath(maze, n, 0, 0, path);
}

int main() {

    int n = 3;
    int maze [10][10] = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 1, 1}
    };

    findPath(maze, n)?cout<<"Yes":cout<<"No";

    return 0;
}