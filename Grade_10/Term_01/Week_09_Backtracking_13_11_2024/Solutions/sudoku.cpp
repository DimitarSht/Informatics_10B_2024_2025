#include <iostream>
using namespace std;

bool isSafe(int grid[9][9], int row, int col, int num) {
    for (int x = 0; x < 9; x++)
        if (grid[row][x] == num || grid[x][col] == num || grid[row - row % 3 + x / 3][col - col % 3 + x % 3] == num)
            return false;
    return true;
}

bool solveSudoku(int grid[9][9]) {
    int row = -1, col = -1;
    bool isEmpty = true;
    for (int i = 0; i < 9 && isEmpty; i++) {
        for (int j = 0; j < 9 && isEmpty; j++) {
            if (grid[i][j] == 0) {
                row = i;
                col = j;
                isEmpty = false;
            }
        }
    }

    if (isEmpty) return true;

    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid)) return true;
            grid[row][col] = 0; // backtrack
        }
    }
    return false;
}

void printGrid(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int grid[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(grid)) {
        printGrid(grid);
    } else {
        cout << "No solution exists." << endl;
    }
    return 0;
}
