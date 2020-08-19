sub_project=$1

mkdir $sub_project

echo "add_subdirectory($sub_project)" >> Cmakelist.txt

touch $sub_project/main.c

echo "#include<stdio.h>" >> $sub_project/main.c
echo "int main(void) {" >> $sub_project/main.c
echo "return 0;" >> $sub_project/main.c
echo "}" >> $sub_project/main.c

touch $sub_project/Cmakelist.txt
echo "cmake_minimum_required(VERSION 3.5)" >> $sub_project/Cmakelist.txt 
echo "project($sub_project)" >> $sub_project/Cmakelist.txt 
echo "add_executable($sub_project main.c)" >> $sub_project/Cmakelist.txt 

cmake -G Xcode
