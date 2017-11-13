#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

#define inf 9999999

struct Coordinate{
    int x;
    int y;
};

struct Cable{
    double length;
    std::pair<Coordinate,Coordinate> coordinates;

    Cable(){};
    Cable(Coordinate t_c1, Coordinate t_c2, double t_length){
        coordinates = std::make_pair(t_c1,t_c2);
        length = t_length;
    }
};

struct TSPSolution{
    double weight;
    std::vector<Cable> cables;

    TSPSolution(){};
    TSPSolution(const std::vector<Cable> t_cables, const double t_weight): cables(t_cables), weight(t_weight){};
};


TSPSolution calcSolution(std::vector<Coordinate> coordinates, std::vector<int> order){
    double weight = 0;
    std::vector<Cable> cables;
    for(int i = 0; i<order.size()-1; ++i){
        Coordinate c1 = coordinates[order[i]];
        Coordinate c2 = coordinates[order[i+1]];
        double deltaY = abs(c1.y - c2.y);
        double deltaX = abs(c1.x - c2.x);
        double toAdd = sqrt(deltaX*deltaX + deltaY*deltaY)+16;
        weight += toAdd;
        cables.push_back(Cable(c1,c2,toAdd));
    }
    return TSPSolution(cables,weight);
}

TSPSolution tsp(const std::vector<Coordinate> coordinates, int visited, std::vector<int> order){
    if(visited == (1 << coordinates.size())-1){
        return calcSolution(coordinates, order);
    }
    TSPSolution minSolution = TSPSolution();
    minSolution.weight = inf;
    for(int i = 0; i<coordinates.size(); ++i){
        if(((1 << i) & visited) == 0){
            std::vector<int> newOrder = order;
            newOrder.push_back(i);

            TSPSolution candidate = tsp(coordinates, visited | (1 << i), newOrder);

            minSolution = candidate.weight < minSolution.weight? candidate:minSolution;
        }
    }
    return minSolution;
}

int main() {
    std::cout.precision(2);
    int n;
    int tc = 1;
    while(std::cin >> n && n != 0){
        std::vector<Coordinate> computers;
        while(n--){
            Coordinate c = Coordinate();
            std::cin >> c.x;
            std::cin >> c.y;
            computers.push_back(c);
        }
        TSPSolution a = tsp(computers, 0, std::vector<int>());
        std::cout << "**********************************************************\n";
        std::cout << "Network #" << tc++ << '\n';
        for(const auto cable:a.cables){
            std::cout << "Cable requirement to connect (" << std::fixed << cable.coordinates.first.x << ',' << cable.coordinates.first.y << ") to (" << cable.coordinates.second.x << ',' << cable.coordinates.second.y << ") is " << cable.length << " feet." << '\n';
        }
        std::cout << "Number of feet of cable required is "  << a.weight << ".\n";
    }
}