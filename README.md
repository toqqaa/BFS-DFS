

# BFS and DFS Algorithms

This repository contains implementations of Breadth-First Search (BFS) and Depth-First Search (DFS) algorithms in C++.
The algorithms are applied to a (5x5) grid representing a maze or terrain, finding the shortest path between specified start and end points.
## Table of Contents

- [BFS Algorithm]
- [DFS Algorithm]
- [Usage]
## BFS Algorithm

The BFS algorithm is implemented to traverse a grid, considering only horizontal and vertical movements with a specified movement priority (up, right, left, down)).
It starts from a specified starting point and explores neighboring cells in layers, ensuring the shortest path to the goal is found.
The output of BFS.cpp of the shortest path :
![bfsshortest](https://github.com/toqqaa/BFS-DFS/assets/145803764/f46b4f2d-a641-4d3a-af7e-9e86ea0e6bfa)

The Output of BFS.cpp of the steps to research:
![BFS](https://github.com/toqqaa/BFS-DFS/assets/145803764/08d9347d-0e77-41ab-8636-1453a0d8eaff)


## DFS Algorithm

The DFS algorithm is implemented to traverse the grid with a specified movement priority (up, right, left, down). It starts from a specified starting point and explores as far as possible along each branch before backtracking.
The output of DFS.cpp of the shortest path :
![dfsshortest](https://github.com/toqqaa/BFS-DFS/assets/145803764/19415549-1e65-47ab-9bb9-f3af584475bd)
The Output of DFS.cpp of the steps to research:
![DFS](https://github.com/toqqaa/BFS-DFS/assets/145803764/0b28ac54-9992-4aa8-92c7-3b4eceabe536)

Given input matrix with obstacles represented by -1
int grid[ROW][COL] = {
        {-1, 2, 3, -1, -1},
        {6, 7, -1, -1, -1},
        {11, 12, 13, -1, -1},   
        {-1, 17, 18, 19, -1},
        {-1, 22, -1, -1, 25}};
With starting point = {3, 1} and Goal point = {0,1}

## Usage

Clone the repository:

   ```bash
   git clone https://github.com/toqqaa/BFS-DFS.git
   cd BFS-DFS
## How to Run

3. Compile the code using the following command:
 For BFS code :
   g++ -o BFS BFS.CPP
   ./BFS
For DFS code :
   g++ -o DFS DFS.CPP
   ./DFS




