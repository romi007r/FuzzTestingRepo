# FuzzTestingRepo — Win32 Fuzzing Samples

This repository contains small Windows/Win32 sample programs used for learning and experimenting with software fuzz testing in a controlled environment.

## Purpose

The samples are intended for:

- local fuzzing experiments;
- harness development practice;
- compiler/sanitizer experiments;
- crash reproduction and debugging practice;
- security-testing education on code you are authorized to test.

They are not a production application and should not be treated as a benchmark for the security of unrelated software.

## Responsible use

Run fuzzing only against software and environments you own or are authorized to assess. Prefer disposable local environments for experiments that can crash processes or generate large numbers of artifacts.

## Getting started

Inspect the sample source and project files in the repository, build them with a compatible Windows development toolchain, and use the resulting local binaries with the fuzzing workflow you are evaluating.

Exact build and fuzzing commands depend on the selected compiler, instrumentation and fuzzer, so the repository intentionally does not prescribe one universal toolchain.

## Scope

This repository is a compact sample/learning project. Larger fuzzing methodology, evidence handling and responsible-disclosure work should live in the appropriate dedicated research project rather than being mixed into these examples.
