Shallow Trouble vs. Deep Relief
========================

This repository contains two C++ source files:

*   `ShallowCopy.cpp`
*   `DeepCopy.cpp`

This guide will walk you through how to compile and run these files on your local machine using a C++ compiler, such as `g++`.

Prerequisites
-------------

To execute the C++ files, you’ll need the following:

1.  **C++ Compiler** (such as `g++`)
2.  **Command Line Interface (CLI)**

If you don’t already have a C++ compiler installed, follow these steps to install `g++` on your platform.

### Installing g++

*   **Linux** (Ubuntu/Debian-based):
    
        sudo apt-get install g++
    
*   **macOS** (using [Homebrew](https://brew.sh/)):
    
        brew install gcc
    
*   **Windows**:
    1.  Download and install [MinGW](http://www.mingw.org/).
    2.  Add `g++` to your system's PATH so that it can be run from the command line.

Once `g++` is installed, you can proceed with compiling the C++ files.

Compiling the C++ Files
-----------------------

Navigate to the directory where the C++ files are located using the command line. You will need to compile each file separately.

### Step-by-Step Instructions

#### 1\. Compiling `ShallowCopy.cpp`

To compile the `ShallowCopy.cpp` file, run the following command in your terminal:

    g++ -o shallowcopy ShallowCopy.cpp

This command does the following:

*   `g++`: Invokes the GNU C++ compiler.
*   `-o shallowcopy`: Specifies the output executable file name (`shallowcopy`).
*   `ShallowCopy.cpp`: The C++ source file to be compiled.

This will create an executable named `shallowcopy` (or `shallowcopy.exe` on Windows) in the current directory.

#### 2\. Compiling `DeepCopy.cpp`

Similarly, to compile the `DeepCopy.cpp` file, run the following command:

    g++ -o deepcopy DeepCopy.cpp

This will create an executable named `deepcopy` (or `deepcopy.exe` on Windows).

Running the Executables
-----------------------

Once the files have been compiled successfully, you can execute them.

### Step-by-Step Execution

#### 1\. Running `shallowcopy`

After compiling `ShallowCopy.cpp`, run the executable:

*   **Linux/macOS**:
    
        ./shallowcopy
    
*   **Windows**:
    
        shallowcopy.exe
    

This will execute the `shallowcopy` program, and you should see the output in your terminal.

#### 2\. Running `deepcopy`

Similarly, to execute `DeepCopy.cpp`, use the following command:

*   **Linux/macOS**:
    
        ./deepcopy
    
*   **Windows**:
    
        deepcopy.exe
    

The program will run, and its output will be displayed in the terminal.

Recap of Commands
-----------------

Here is a summary of all the commands you will use to compile and run the files:

### For `ShallowCopy.cpp`:

*   **Compile**:
    
        g++ -o shallowcopy ShallowCopy.cpp
    
*   **Run** (Linux/macOS):
    
        ./shallowcopy
    
*   **Run** (Windows):
    
        shallowcopy.exe
    

### For `DeepCopy.cpp`:

*   **Compile**:
    
        g++ -o deepcopy DeepCopy.cpp
    
*   **Run** (Linux/macOS):
    
        ./deepcopy
    
*   **Run** (Windows):
    
        deepcopy.exe
    

Troubleshooting
---------------

### Common Errors and Solutions

1.  `g++: command not found`:
    *   Make sure that `g++` is installed and added to your system’s PATH. On Windows, ensure that MinGW is correctly set up.
2.  **Permission Denied (Linux/macOS)**:
    *   If you encounter a permission issue when trying to run the executable, ensure that it has execute permissions:
        
            chmod +x shallowcopy
        
            chmod +x deepcopy
        
3.  **Compilation Errors**:
    *   Ensure that the file names are correctly spelled in the compile command.
    *   If the compiler shows any syntax errors, carefully read the error messages and correct any issues in the C++ code.

License
-------

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.

Contact
-------

If you encounter any issues or have any questions, feel free to reach out or open an issue on this repository. Happy coding!