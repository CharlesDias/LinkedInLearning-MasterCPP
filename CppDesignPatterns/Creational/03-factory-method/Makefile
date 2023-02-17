all: run
	@echo ""
	@echo "Done!"

build: clean
	@echo "--- Configure and Build CMake -----------------------------"
	cmake -S . -B build
	cmake --build build -- -j4
	@echo ""

run: build
	./build/app/app

memo-leak: build
	valgrind --tool=memcheck --leak-check=yes -s ./build/app/app leak

doxygen:
	@echo "--- Build Coverage-----------------------------------------"
	cmake --build build --config Debug --target docs -j4
	@echo ""

clean:
	@echo ""
	@echo "---- Clean build folder -----------------------------------"
	rm -rf build
	rm -rf docs/html
	@echo ""

###############################################
# Phony
# 
.PHONY: all build run memo-leak doxygen clean