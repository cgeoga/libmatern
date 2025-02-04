
CLANG=clang
CLANG_ENZYME=/usr/lib/ClangEnzyme-19.so
OPT=opt

runtest: 
	gcc test/test_script.c -o test_script -L. -Wl,-rpath=$$(pwd) lib/libmatern.so
	./test_script
	rm -f test_script

linux:
	mkdir -p lib
	$(CLANG) reposrc/libmatern.c -fplugin=$(CLANG_ENZYME) -O3 -lm -fno-vectorize -fno-slp-vectorize -fno-unroll-loops -Wall -pedantic -shared -fPIC -o lib/libmatern.so

linux_bitcode:
	mkdir -p lib
	$(CLANG) reposrc/libmatern.c -fplugin=$(CLANG_ENZYME) -O3 -Wall -pedantic -c -emit-llvm -fno-vectorize -fno-slp-vectorize -fno-unroll-loops -o lib/libmatern.bc

linux_ir:
	mkdir -p lib
	$(CLANG) reposrc/libmatern.c -fplugin=$(CLANG_ENZYME) -O3 -Wall -pedantic -S -emit-llvm -fno-vectorize -fno-slp-vectorize -fno-unroll-loops -o lib/libmatern.ll

bitcode_apple_arm:
	mkdir -p lib
	$(CLANG) reposrc/libmatern.c -fplugin=$(CLANG_ENZYME) --target=arm64 -O3 -Wall -pedantic -c -emit-llvm -fno-vectorize -fno-slp-vectorize -fno-unroll-loops -o lib/libmatern_apple_arm.bc

