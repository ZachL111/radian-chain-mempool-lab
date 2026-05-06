# radian-chain-mempool-lab

`radian-chain-mempool-lab` keeps a focused C implementation around blockchain tooling. The project goal is to implement a C blockchain tooling project for mempool state machine modeling, using transition tables and invalid-transition tests.

## Use Case

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Radian Chain Mempool Lab Review Notes

For a quick review, compare `nonce pressure` with `proof depth` before reading the middle cases.

## Highlights

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/radian-chain-mempool-walkthrough.md` walks through the case spread.
- The C code includes a review path for `nonce pressure` and `proof depth`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Code Layout

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C addition stays small enough to inspect in one sitting.

## Run The Check

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Regression Path

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Future Work

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
