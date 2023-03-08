## Generating the build environment for the filesystem app
This project uses C++20 with GCC. To build from the source code do as follows:

```
cmake -S . -B buildtree
```

The previous command tells cmake to build the source code in the current directory (using `.`) with the `-S` flag which
is the source flag and then to generate a `buildtree` directory with the `-B` flag.


## Build the auto-generated buildtree into exe

To generate an exe, first require to issue cmake to build the generated build artifacts from the previous `cmake -S . -B buildtree` step. To build the buildtree do the following:

```
cmake --build buildtree/
```
or 

To clean the build files first and follow with a new build do the following:
```
cmake --build <build-dir> --clean-first
```

To totally clean the build do the following:
```
cmake --build <build-dir> -t clean
```


## Run the app

To run the app do the following;

```
./buildtree/filesystem_app
```

