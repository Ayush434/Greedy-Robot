//
// Created by ayush on 4/20/2024.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void findPaths(int max_distance, int x, int y, int tx, int ty, string path, vector<string>& paths, char lastMove = ' ', int lastMoveCount = 0) {
    int distance = abs(x - tx) + abs(y - ty);
    
    if (distance == 0) {
        paths.push_back(path);
        return;
    }

    if (distance > 0) {
        if (y < ty && (lastMove != 'N' || lastMoveCount < max_distance)) {
            findPaths(max_distance, x, y + 1, tx, ty, path + 'N', paths, 'N', lastMove == 'N' ? lastMoveCount + 1 : 1);
        }

        if (y > ty && (lastMove != 'S' || lastMoveCount < max_distance)) {
            findPaths(max_distance, x, y - 1, tx, ty, path + 'S', paths, 'S', lastMove == 'S' ? lastMoveCount + 1 : 1);
        }

        if (x < tx && (lastMove != 'E' || lastMoveCount < max_distance)) {
            findPaths(max_distance, x + 1, y, tx, ty, path + 'E', paths, 'E', lastMove == 'E' ? lastMoveCount + 1 : 1);
        }

        if (x > tx && (lastMove != 'W' || lastMoveCount < max_distance)) {
            findPaths(max_distance, x - 1, y, tx, ty, path + 'W', paths, 'W', lastMove == 'W' ? lastMoveCount + 1 : 1);
        }
    }
}



int main(int argc, char* argv[]) {


    if(argc != 6){
        return -1;
    }

    int max_distance = atoi(argv[1]);
    int robot_x = atoi(argv[2]);
    int robot_y = atoi(argv[3]);
    int treasure_x = atoi(argv[4]);
    int treasure_y = atoi(argv[5]);

    if(max_distance <= 0){
        return -1;
    }else if(robot_x == treasure_x && robot_y == treasure_y){
        cout << "Already there"<<endl;
        return 0;
    }else{

        vector<string> paths;
        findPaths(max_distance, robot_x, robot_y, treasure_x, treasure_y, "", paths);

        for (const string& path : paths) {
            cout << path << endl;
        }
        cout << paths.size() << endl;

    }
    return 0;
}
