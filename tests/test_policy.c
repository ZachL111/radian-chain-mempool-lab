#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {80, 89, 26, 14, 13};
    assert(score_signal(signal_case_1) == 100);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {86, 70, 14, 10, 9};
    assert(score_signal(signal_case_2) == 153);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {76, 92, 14, 8, 12};
    assert(score_signal(signal_case_3) == 176);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
