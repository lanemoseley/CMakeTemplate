# Sample Project for Testing CMake Configurations

## Setup & Build

```
cd <path_to_repo>/LearningCMake
mkdir ./build
cmake -S ./ -B ./build
```

```
make -C ./build
```

## Running the Tests

**CMake Unit Tests (from the top-level CMakeLists.txt file):**

```
ctest --test-dir ./build
```

**Boost Unit Tests:**

```
ctest --test-dir ./build/test
```

## Appendix

**Reference Projects:**
+ https://github.com/ryantherileyman/cmake-testing-grounds
+ https://github.com/albertchan/cmake-boost-demo
