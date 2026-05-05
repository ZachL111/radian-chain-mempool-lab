#include "policy.h"

enum {
    THRESHOLD = 153,
    RISK_PENALTY = 6,
    LATENCY_PENALTY = 4,
    WEIGHT_BONUS = 3
};

int score_signal(Signal signal) {
    return signal.demand * 2 + signal.capacity + signal.weight * WEIGHT_BONUS
        - signal.latency * LATENCY_PENALTY - signal.risk * RISK_PENALTY;
}

const char *classify_signal(Signal signal) {
    return score_signal(signal) >= THRESHOLD ? "accept" : "review";
}
