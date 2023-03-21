CC=gcc

CFLAG=-g -Wall -Werror -Wextra

MOD=../data_module
LIB=../data_libs
YET=../yet_another_decision_module

all: Quest_3 
	rm -rf *.o

build_with_static: clean Quest_3 data_process.o data_stat.o data_io.o data_stat.a
	$(CC) $(CFLAG) main_executable_module.o data_process.o data_stat.o data_io.o decision.o -L. -ldata_stat -o ../build/Quest_5
	rm -rf *.a

data_stat.a: $(LIB)/data_stat.c $(LIB)/data_stat.h
	$(CC) $(CFLAG) -c $(LIB)/data_stat.c
	ar r libdata_stat.a data_stat.o
	ranlib libdata_stat.a

Quest_3: main_executable_module.o data_process.o data_stat.o data_io.o decision.o
	$(CC) $(CFLAG) main_executable_module.o data_process.o data_stat.o data_io.o decision.o -o ../build/Quest_3

main_executable_module.o: main_executable_module.c $(YET)/decision.h $(LIB)/data_io.h $(LIB)/data_stat.h $(MOD)/data_process.h
	$(CC) $(CFLAG) -c main_executable_module.c

decision.o: $(YET)/decision.c $(YET)/decision.h
	$(CC) $(CFLAG) -c $(YET)/decision.c

data_process.o: $(MOD)/data_process.c $(MOD)/data_process.h 
	$(CC) $(CFLAG) -c $(MOD)/data_process.c

data_stat.o: $(LIB)/data_stat.c $(LIB)/data_stat.h
	$(CC) $(CFLAG) -c $(LIB)/data_stat.c

data_io.o: $(LIB)/data_io.o $(LIB)/data_io.o
	$(CC) $(CFLAG) -c $(LIB)/data_io.c

clean:
	rm -rf *.o
	rm -rf *.a

clean_all:
	rm -rf *.o
	rm -rf *.a
	rm ../build/Quest_3

rebuild: clean_all all
