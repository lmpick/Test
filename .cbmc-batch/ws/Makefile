goto: main.goto
	goto-instrument main.goto main.goto --unwinding-assertions --pointer-check

main.goto:
	cd ../..; \
    goto-cc main.c -o .cbmc-batch/ws/main.goto
