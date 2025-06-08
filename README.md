# 🎮 Coloring Game (Minimum Repainting Steps)

## Problem Summary
### You are given a row of n painted cells. Each cell i has an initial color c[i]. Your goal is to make all cells the same color using the minimum number of repaint operations.

## Rules:
Two cells i and j are in the same color component if every cell between them (inclusive) has the same color.

You can choose any component that contains your initially selected cell and repaint it to any color.

You can only change components that include your starting cell (which is chosen once and not counted as a move).

Output the minimum number of repaint steps needed to make all cells the same color.

## Time complexity:

* The code first removes consecutive duplicates from the array → **O(n)**.
* Then it fills a 2D DP table using nested loops → **O(n²)** in the worst case.
* Each DP state is computed in **constant time**.

** Total Time Complexity: O(n²)**
(where `n` is the number of cells in the original input).


## 
hw4-anyl-algo
