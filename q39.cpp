#include <stdio.h>
#include <limits.h>

#define V 5 // Number of vertices in the graph

// Function to find and print the minimum edge in the graph
void findMinimumEdge(int graph[V][V]) {
    int minEdge = INT_MAX;

    // Traverse the adjacency matrix to find the minimum edge
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[i][j] != 0 && graph[i][j] < minEdge) {
                minEdge = graph[i][j];
            }
        }
    }

    printf("Minimum Edge in the Graph: %d\n", minEdge);
}

int main() {
	
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    findMinimumEdge(graph);

    return 0;
}
