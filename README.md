# esp32-utility
Docs: [![couldn't get build status](https://api.travis-ci.com/wolffshots/esp32-utility.svg?branch=main "Current doc build status")](https://wolffshots.github.io/esp32-utility/index.html)

some helper functions for printing out some information and processing agnostic data

## how to use project

1. run ```git submodule add git@github.com:wolffshots/esp32-utility.git components/esp32-utility``` in your main project
2. configure project if needed
3. ```#include "utility.h"``` should give you access to this component.

if the above steps don't work then you may need to run ```git submodule init components/esp32-utility``` 
and then ```git submodule update --remote --recursive``` in your main project

## folder contents

the component **esp32-utility** contains one source file in C language [utility.c](utility.c). the file is located in root folder.

esp-idf projects are build using cmake. the project build configuration is contained in `CMakeLists.txt` files that provide set of directives and instructions describing the project's source files and targets (executable, library, or both). 

below is short explanation of remaining files in the project folder.

```
├── include                     header file directory
│   └── utility.h               the header file for this component
├── .gitignore                  describes what files and folders git should ignore
├── CMakeLists.txt              base project cmake file (describes dependencies, include dir and src dir)
├── component.mk                component make file
├── Kconfig.projbuild           kconfig description file to add build time vars
├── LICENSE.md                  MIT license file
├── README.md                   this file
└── utility.c                   core src file of the component
```

for more information on structure and contents of esp-idf projects, please refer to Section [Build System](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/build-system.html) of the esp-idf programming guide.

## documentation

automatically generated API documentation (doxygen) is available [here](https://wolffshots.github.io/esp32-utility/index.html).

## license

the code in this project is licensed under the MIT license - see LICENSE for details.

# helpful commands
- ```git submodule update --remote --recursive``` - updates the checked out modules to the most recent commit to their main branch

# todo
 
 - [x] nothing for now