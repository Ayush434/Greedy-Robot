# Greedy-Robot
In this program you will find the shortest distance for a robot to move across a "treasure map", from the robot's starting position to the location of the treasure. This problem can be solved using a greedy algorithm, where you will always take a step closer to the treasure (and then check if it is valid).

# Program Input
The input to the program will be the max_distance value followed by the position of the robot (xr, yr), followed
by the position of the treasure (xt, yt). Assume that all five are integers and do not worry about error conditions
in inputs. Take these parameters as arguments to the program on the command line.
Invoking greed_robot
./greedy_robot max_distance robot_x robot_y treasure_x treasure_y
max_distance: maximum number of moves in one direction before a turn is required
robot_x: starting X coordinate of robot
robot_y: starting Y coordinate of robot
treasure_x: X coordinate of treasure
treasure_y: Y coordinate of treasure
For example:
./greedy_robot 2 1 3 -2 4
Corresponds to the robot starting at position (1, 3), the treasure at position (-2, 4) , and a max_distance
constraint of 2 tiles in one direction.

# Description
A robot is positioned on an integral point in a two-dimensional coordinate grid (xr, yr). There is a treasure that
has been placed at a point in the same grid at (xt, yt). All x’s and y’s will be integral values (whole numbers).
Note that there are no other constraints on the grid - the grid coordinates could be negative, for example.

![image](https://github.com/Ayush434/Greedy-Robot-C-/assets/55855818/da31b7ed-efdf-45eb-b5ad-469554ff1935)

Above: Example treasure map. [R] - Robot is located at (1, 1), [T] - Treasure is located at (3,4)
The robot can move up (North), down (South), left (West), or right (East). Commands can be given to the
robot to move one position in one of the four direction. That is, “E” moves a robot one slot East (to the right) so
if the robot was on position (1, 1), it would now be on (1, 2). The command N would move the robot one
position north so a robot at position (4, 4) would be at (4, 5). Because the robot cannot move diagonally, the
shortest distance between a robot at (xr, yr) and a treasure at (xt, yt) is
| xr – xt | + | yr - yt | = ShortestPossibleDistance
Write a recursive program which determines all the unique shortest possible paths from the robot to the
treasure with the following stipulation: The robot may never move in the same direction more than
max_distance times in a row.
NOTE 1: Inputs are given as arguments to the program.
NOTE 2: This program must be solved recursively, creating paths as the robot moves towards the treasure


# Program Output
The output of the program should be a list of all the unique shortest possible paths, followed by the number of
unique paths. Each path is output as a string of characters with each character corresponding to a direction
the Robot should move. For instance, NNEEENENE corresponds to having the robot move North, North, East,
East, East, North, East, North, East.
Notice that not all combinations of robots / treasures will have a solution, as there may not exist a
ShortestPossibleDistance path that obeys the max_distance constraint. For instance, 2 3 3 3 7 has shortest
possible distance of 4 but no way to get there in that distance without going North more than 2 times in a row.
Example
Consider the input 2 1 2 3 5 which corresponds to the max_distance 2, the robot at (1,2), and the treasure at
(3,5).

![image](https://github.com/Ayush434/Greedy-Robot-C-/assets/55855818/e96bda63-d097-4d98-829d-3138538e2d3c)

The result of this program would be the 7 paths shown below.
./greedy_robot 2 1 2 3 5
NNENE
NNEEN
NENNE
NENEN
NEENN
ENNEN
ENENN
7

![image](https://github.com/Ayush434/Greedy-Robot-C-/assets/55855818/800ac35f-f031-4bbb-870d-7c1345b1f3a9)

Above: all possible solutions to this example. NNENE (green), NNEEN (red), NENNE (light blue), NENEN
(royal blue), NEENN (yellow), ENNEN (purple), ENENN (orange).

