# Template Package
This template package is a placeholder for people to see how to create a package and how a package folder structure should look like.
## Create Package
To create a package go into sub-code/src/
```bash
cd src/
```
and execute the command
```bash
ros2 pkg create --build-type ament_cmake --license Apache-2.0 [package_name]
```

## File Structure
The final structure should look like:

```
sub-code/src/
  your_package/
    include/        [Holds all C++ header files]
    src/            [Holds all C++ source code files]
    scripts/        [Holds all Python source code files]
    launch/         [Holds python launch files specific to the package]
    config/         [Holds configuration files, usually .yaml]
    msg/            [Holds custom ros2 message definitions]
    srv/            [Holds custom ros2 service definitions]            
    action/         [Holds custom ros2 action definitions]
    test/           [Holds all unit tests and test data]
    CMakeLists.txt  [Required definition of how to build the code and dependencies for C++ code]
    LICENSE         [Not too important, just choose Apache-2.0]
    package.xml     [Defines package properties and dependencies]
    README.md       [Describe the package for documentation purposes]
```

Include only the directories you incorparate, no need for an `/action/` directory if you have no custom defined actions.