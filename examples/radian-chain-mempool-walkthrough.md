# Radian Chain Mempool Lab Walkthrough

This note is the quickest way to read the extra review model in `radian-chain-mempool-lab`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 196 | ship |
| stress | nonce pressure | 211 | ship |
| edge | settlement risk | 145 | ship |
| recovery | proof depth | 114 | watch |
| stale | event finality | 203 | ship |

Start with `stress` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The useful comparison is `nonce pressure` against `proof depth`, not the raw score alone.
