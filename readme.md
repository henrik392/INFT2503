# C++ for programmerere

## Alias jeg bruker for å kjøre programmet

runcpp (filename)
= clang++ -std=c++1y -g -O0 -fno-omit-frame-pointer -DDEBUG -Wall -Wextra $1.cpp; ./a.out

zipsolution (solutionNumber)
= tar --exclude=./solution$1.tar.gz --exclude=a.out.dSYM -czvf ./solution$1.tar.gz .
