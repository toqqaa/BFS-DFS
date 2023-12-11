# BFS and DFS Algorithms

This repository contains implementations of Breadth-First Search (BFS) and Depth-First Search (DFS) algorithms in C++.
The algorithms are applied to a 2D grid representing a maze or terrain, finding the shortest path between specified start and end points.
## BFS Algorithm

The BFS algorithm is implemented to traverse a grid, considering only horizontal and vertical movements with a specified movement priority (up, right, left, down)).
It starts from a specified starting point and explores neighboring cells in layers, ensuring the shortest path to the goal is found.
The Output of BFS.cpp
![BFS ](BFS.png)

## DFS Algorithm

The DFS algorithm is implemented to traverse the grid with a specified movement priority (up, right, left, down). It starts from a specified starting point and explores as far as possible along each branch before backtracking.
The Output of BFS.cpp
![DFS ](DFS.png)

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




