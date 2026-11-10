# Limitations and ethics

- Catalogue data are illustrative; do not treat sample titles/metadata as verified institutional records.
- Recommendations are transparent heuristics, not objective quality judgements. Rating/popularity signals can reinforce popularity bias.
- Reading histories may be sensitive personal data. A production deployment should minimise collection, obtain meaningful consent, enforce access control, define retention/deletion, and never expose individual histories.
- Search is case-insensitive byte-oriented matching, not Unicode-aware linguistic search.
- The compact CSV parser is intended for the supplied files, not arbitrary escaped CSV input.
- CRT currently restricts moduli to primes and uses signed 64-bit arithmetic; large products can overflow.
- This release is a functional academic foundation with explicit syllabus gaps, not a production service or a complete response to every listed assignment item.
