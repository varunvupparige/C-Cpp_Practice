#include <string.h>
#include <stdio.h>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int find(vector<int> &nodes, int a) {
    if (a == nodes[a]) {
        return a;
    }
    return nodes[a] = find(nodes, nodes[a]);
}

int Union(vector<int> &nodes, vector<int> &size, int a, int b) {
    a = find(nodes,a);
    b = find(nodes,b);

    if (a == b) {
        return 0;
    }
    else {
        if (size[a] > size[b]) {
            size[a] += size[b];
            nodes[b] = a;
        }
        return 1;
    }
}

int IslanCount(int N, int M, int *E) {

    vector<int> nodes(N);
    vector<int> size(N);

    for (int i =0; i < N; i++) {
        nodes[i] = i;
        size[i] = 1;
    }

    int islandcount = N;
    for (int i =0; i < 2*M; i = i+2) {
        islandcount -= Union(nodes,size,E[i],E[i+1]);
    }
    return islandcount;
}
