# Introduction to Embedded Systems software and Development Environments

## MOOC Details

The First module of embedded systems MOOC based on an ARM Cortex-M4F microcontroller from the University of Texas at Austin through [**edX**](https://courses.edx.org/).

Date: December, 2021

This class is 9 Hours : 
- **You can find the UT.6.20x Embedded Systems - Shape The World: [Multi-Threaded Interfacing](https://www.edx.org/course/embedded-systems-shape-world-multi-utaustinx-ut-6-20x)** that includes Modules from 11 to 16. \
  [**Certificate**](https://github.com/AhmedHassan95/ARM-Microcontrollers/blob/master/Embedded%20Systems%20-%20Shape%20The%20World%20Multi-Threaded%20Interfacing/UTAustinX%20UT.6.20x%20Certificate%20_%20edX.pdf) available.

- You can find a **[syllabus](syllabus.md)** of this course.

## Descriptions

Every lab is given as an existant project with a grading system TExaS that remotely permits to evaluate my work (and push the grade on edX MOOC). \
As a consequence, for each lab assignment, I completed an existant project given by the teaching staff with the requirements.

My contributions include:
- Global declarations (essentially for ports) and/or declarations in header files. 
- Functions defintion if already declared by instructors.
- Functions implementation otherwise.

In most of the cases, there are all these alternatives (except with the two first introduction labs).


## Requirements

**[Kiel uVsion 4](https://www.keil.com/demo/eval/armv4.htm)** - All the code/debug were done on this IDE. \
**[Stellaris/Tiva LaunchPad](http://www.ti.com/tool/ek-tm4c123gxl)** - Everything is meant to work on a EK-TM4C123G launchpad. \
**[Electronic Components](http://edx-org-utaustinx.s3.amazonaws.com/UT601x/worldwide.html)** - Some labs requires a set of extra electronic parts.


## Common Files

There are some file types which will appear in every lab assignment.

`***.uvproj` `***.uvgui` `***.uvopt` - uVision files (open `***.uvproj` to get the full project) \
`***.axf` `TExaS.h` `texas.o` - autograder files \
`tm4c123gh6pm.h` - useful address definitions for launchpad \
`startup.s` - assembly startup file
