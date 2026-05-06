#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {76, 20, 11, 57};
    assert(domain_review_score(item) == 196);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
