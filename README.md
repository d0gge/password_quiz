### Password_quiz
Console quiz to spend some time.

## Installation

# REQUIREMENTS
If you want to install this you have to have cmake of 3.20 or higher version. Follow link to get to the official [website](https://cmake.org/).

1. Clone repo
```
git clone https://github.com/d0gge/password_quiz.git
cd password_quiz
```

2. Generate project files with cmake

```
mkdir build ; cd build
cmake ..
```

3. Build the project with cmake

```
cmake --build .
```

To specify build type you can do as follows:

```
cmake --build . --config Debug
```

or

```
cmake --build . --config Release
```

Binary files are place at `build/bin/` on linux and `build/bin/YourBuildType` on windows
