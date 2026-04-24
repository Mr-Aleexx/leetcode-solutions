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
    

    std::string moves = "L_RL__RRLLRLLRLR_L_RL_LLR_LR_L_LLRLRLRL_LLRLLLLR_R_LR_LR_LLLRL_L_RLLRLRLRRLR_RL_RLLRLRRRLL_R_LR_LR_L_RLRL_R_LLRLR_L_RL_RL_L_RL_RL_L_RLL_RL_LR_L_RL_RL_LR_LRLLL_LR_LR_LL_RL_RL_LLLRL_RLRL_RLRL_RL_RL_RL_RL_R_RR_LR_LR_RL_LR_L_LRLR_RLRL_LRL_LRLR_R_L___RL_R_RR_L_";

    std::cout << furthestDistanceFromOrigin(moves) << '\n';

    return 0;
}
