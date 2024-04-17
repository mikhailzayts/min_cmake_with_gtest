build_dir := build
cfg:
	cmake -G Ninja \
		-B $(build_dir) \
		-S . \
		-DCMAKE_BUILD_TYPE=Debug

build: cfg
	cmake --build $(build_dir)

debug: build
	lldb ./$(build_dir)/exec_target

run: build
	./$(build_dir)/exec_target

test: build
	cd ./$(build_dir)/test && ctest

clean:
	rm -rf ./$(build_dir)
