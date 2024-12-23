#include <iostream>
#include <string.h>
#include "../includes/consoleReader.h"

using namespace std;

string foo(string &a) {
    a = "world";

    return a;
}

int main() {
    ConsoleReader cr = {"123"};

    cr.toMap();

    return 0;
}