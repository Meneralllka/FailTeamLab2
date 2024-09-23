# FailTeamLab2

This repository is maintained by the Fail Team, which includes Abdirakhman Onabek, Daniil Filimonov, and Kir Smolyarchuk. It is structured as a ROS (Robot Operating System) workspace.

## Project Overview

This project is intended to develop and test various robotics-related software components using ROS.

### Repository Structure

- **.idea/**: Contains project-specific settings for JetBrains IDEs like PyCharm or CLion.
  
- **.vscode/**: Holds Visual Studio Code workspace settings. These settings ensure consistent development environments across team members using VS Code.
  
- **build/**: This directory contains the results of the build process. When you compile your ROS packages using `catkin_make`, the build files are generated and stored here. This includes object files, libraries, and other intermediate files necessary for creating the final executables.
  
- **devel/**: After building the workspace, the `devel` directory contains the development space for your project. This includes setup files and environment variables specific to the project, which are necessary for running the compiled nodes and scripts. The setup file in this directory (`setup.bash`) must be sourced to ensure your terminal session has the correct ROS environment variables.
  
- **src/**: This is where the source code for your ROS packages resides. Each package in the `src` directory is a self-contained unit that can include nodes, libraries, configuration files, and more. Typically, you'll find:
  - **CMakeLists.txt**: A script for CMake to define the build process.
  - **package.xml**: Defines package information, dependencies, and versioning.

### Getting Started

1. **Clone the Repository**:  
   Clone the repository to your local machine using the following command:
   ```bash
   git clone https://github.com/Meneralllka/FailTeamLab2.git
   ```
   
2. **Build the Workspace**:  
   Navigate into the cloned directory and build the ROS workspace:
   ```bash
   cd FailTeamLab2
   catkin_make
   ```
   
3. **Set Up the Environment**:  
   Source the setup file to configure your environment for ROS:
   ```bash
   source devel/setup.bash
   ```
   
4. **Run ROS Nodes**:  
   Launch your ROS nodes or test your packages using ROS commands:
   ```bash
   rosrun <package_name> <node_name>
   ```
