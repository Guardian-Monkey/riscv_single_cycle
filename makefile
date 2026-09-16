run:
	cmake -S . -G Ninja -B build
	cmake --build build

clean:
	rm -r build && mkdir build
	rm *.vcd