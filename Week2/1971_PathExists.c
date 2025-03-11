void dfs(int node, int** adjList, int* adjSize, bool* visited) {
    visited[node] = true;
    for (int i = 0; i < adjSize[node]; i++) {
        int neighbor = adjList[node][i];
        if (!visited[neighbor])
            dfs(neighbor, adjList, adjSize, visited);
    }
}

bool validPath(int n, int** edges, int edgesSize, int* edgesColSize, int source, int destination) {
    if (source == destination)
        return true;

    int** adjList = (int**)malloc(n * sizeof(int*));
    int* adjSize = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        adjList[i] = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < edgesSize; i++) {
        int u = edges[i][0], v = edges[i][1];
        adjList[u][adjSize[u]++] = v;
        adjList[v][adjSize[v]++] = u;
    }

    bool* visited = (bool*)calloc(n, sizeof(bool));

    dfs(source, adjList, adjSize, visited);

    bool result = visited[destination];

    for (int i = 0; i < n; i++)
        free(adjList[i]);
    free(adjList);
    free(adjSize);
    free(visited);

    return result;
}


