output: main.o median.o Student_info.o grade.o
	g++ main.o median.o Student_info.o grade.o -o grade_students

main.o: main.cpp
	g++ -c main.cpp

median.o: median.cpp median.h
	g++ -c median.cpp

Student_info.o: Student_info.cpp Student_info.h
	g++ -c Student_info.cpp

grade.o: grade.cpp grade.h
	g++ -c grade.cpp
