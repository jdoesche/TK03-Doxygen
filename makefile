CC = g++
CFLAGS = -g -Wall -Wextra

default: employee

employee:		Employee.o Supervisor.o Officer.o main.o
	$(CC) $(CFLAGS) -o employee Employee.o Supervisor.o Officer.o main.o

Employee.o:	Employee.cpp Employee.h
	$(CC) $(CFLAGS) -c Employee.cpp

Supervisor.o:	Supervisor.cpp Supervisor.h
	$(CC) $(CFLAGS)	-c Supervisor.cpp

Officer.o:	Officer.cpp Officer.h
	$(CC) $(CFLAGS) -c Officer.cpp

main.o:	main.cpp Employee.h Supervisor.h Officer.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) employee *.o *~