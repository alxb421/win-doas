/*
 Copyright (C) 2021 Alexandru Balan. All rights reserved
 This is released under the GNU Public License v3
 */
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
    char* instr = argv[1];
    (void)argc;

    string version = "WindDoas v1.2 (c) Alexandru Balan"; 

    if (argc > 1) {
        if (strcmp(instr, "-v") == 0) {
            cout << version;
        }
        else if (strcmp(instr, "whoami") == 0) {
            cout << "[`~# ] root";
        }
        else {
            CHAR czTempPath[MAX_PATH] = { 0 };
            string sPath = czTempPath;
            GetTempPathA(MAX_PATH, czTempPath);
            sPath += "win-doas.bat";
            ofstream batch;
            batch.open(sPath.c_str());
            batch << "@echo off\n"
                "powershell -Command \"Start-Process cmd -Verb RunAs -ArgumentList '/c cd /d %CD% && %*'\"\n"
                "@echo on" << endl;
            batch.close();

            string int_command = sPath.c_str();
            string mid_command = int_command + " ";
            string final_command = mid_command + argv[1];
            system(final_command.c_str());
        }
    }
    else {
        cout << "You need one command to run as Administrator! " << endl;
    }
}
