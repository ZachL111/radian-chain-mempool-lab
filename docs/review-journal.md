# Review Journal

The cases below are the review handles I would use before changing the implementation.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 196, lane `ship`
- `stress`: `nonce pressure`, score 211, lane `ship`
- `edge`: `settlement risk`, score 145, lane `ship`
- `recovery`: `proof depth`, score 114, lane `watch`
- `stale`: `event finality`, score 203, lane `ship`

## Note

The useful failure mode here is a wrong decision on a named case, not a vague style disagreement.
