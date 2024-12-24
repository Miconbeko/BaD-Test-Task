# BaD 2024 Puzzle Solver

This C++ console app is a solution for test task for BaD 2024 Winter program.

## Task
![Task body](https://i.imgur.com/b8dZaQg.png)
## Compilation

To compile the executable from source files, you need:

 - GNU C++ compiler (I use g++ with gcc version 14.2.1)

Compilation steps:

 - Clone repo
 - Open terminal in project directory
 - Compile including all source files `g++ src/* -o badpuzzle`

## Usage

You can use "help" command to get the usage:

    Usage:
    ./badpuzzle [command]
    
    Avaliable commands:
            ./badpuzzle console
                    Read puzzle pieces from console, separated by ENTER. To stop enter '-'
    
            ./badpuzzle file <FILE_PATH>
                    Read puzzle pieces from the file in FILE_PATH, separated by ENTER. Make sure that there is no whitespace at the end

## Solution
The recursive DFS algorithm is used to visit all possible vertices and find the longest sequence of puzzle pieces. All visited vertices are marked, so one vertex cannot be visited twice. After all the neighbors of the vertex have been visited and calculated, it becomes unmarked, so it can be used in other, potentially longer sequences.

Therefore, the program is quite slow. I tried to develop an optimization that would cache the computed routes to make the algorithm faster. Because I got stuck on solving the problem of circles in the graph, this solution was abandoned.

Another optimization that was implemented was the structuring of the graph. Instead of creating a node for each piece of the puzzle, one node represents the prefix of the pieces and the edges represent the pieces. This allows us to create a smaller, size-optimized graph.

C++ was chosen to provide more opportunities to create more time and space optimized code along with OOP ideas.

## Used materials

 - C++ manuals, documentation: https://en.cppreference.com/w/
 - C++ documentation and usage: https://www.geeksforgeeks.org/


