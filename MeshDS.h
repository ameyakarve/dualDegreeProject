class Facet {
  public:
    int ID;
    int vertices[3];
    int edges[3];
    vector <int> primaryNeighbours;
    vector<int> secondaryNeighbours;
    Vector normal;
};

class Edge {
  public:
    int ID;
    int vertices[2];
    bool isOuterBoundary;
    bool isInnerBoundary;
    vector <int> prevEdges;
    vector <int> nextEdges;
    Vector direction;

};

class Vertex {
  public:
    int ID;
    vector <int> Edges;
    vector <int> Facets;
    double x;
    double y;
    double z;
}