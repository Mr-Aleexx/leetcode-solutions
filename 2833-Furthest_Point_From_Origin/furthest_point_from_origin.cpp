#include <iostream>

int furthestDistanceFromOrigin(std::string moves) {
        
    int n = moves.length();

    int r = 0;
    int l = 0;

    for(char c : moves) {
	if (c == 'R') r += 1;
	if (c == 'L') l += 1;
    }

    return r >= l ? n - 2*l : n - 2*r;

}


int main () {
    

    std::string moves = "L_RL__R";

    std::cout << furthestDistanceFromOrigin(moves) << '\n';

    return 0;
}
