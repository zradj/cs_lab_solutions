# cs_lab_solutions
### Authors: Zaur Rajabov and Elnama Mammadova

This repository contains the solutions for the lab exercises in the **Computer Science** course (CSCI1001). Each source file contains the solution explanation at the top alongside the solution itself.

*If you spot a mistake or have any questions, please contact us at **zrajabov17438@ada.edu.az** or **emammadova17934@ada.edu.az***

## How to use this repository

Start by cloning this repository on your local machine. Paste this line into your terminal:

`git clone https://github.com/zradj/cs_lab_solutions.git`

If you already have this repository installed, please use the following command to update your local copy if there are any changes here:

`git pull`

You can use the following command to compile all source files in a certain week. The compiled files will appear in the "test" subfolder in that week's folder (ex. `week2/test/`). Please use this command in the top directory (`cs_lab_solutions/`):

`make WEEK={week number, ex. 2}`

If you want to remove all compiled files from a certain week, please use the following command (also in the top directory):

`make clean WEEK={week number, ex. 2}`
