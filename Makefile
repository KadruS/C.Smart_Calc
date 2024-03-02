CFLAGS=-std=c11 -Wall -Werror -Wextra 
TESTS=tests/*tests.c
FLAG_TEST=-lcheck
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
LEAKS=leaks -atExit -- ./test/test

# For app
QT_DIR=untitled
INSTALL_DIR=calcula
BUILD_DIR=build
PROGRAM=$(QT_DIR)
DOC=CalReadme
ARCH_NAME=archiveCal
LIB_DIR=logic

ifeq ($(shell uname), Linux)
	FLAG_TEST +=-lsubunit -lm
	LEAKS=valgrind --tool=memcheck --leak-check=yes ./test/test
endif

all: install

build:
	mkdir -p $(BUILD_DIR)
	qmake -o $(BUILD_DIR)/makefile $(QT_DIR)/untitled.pro; cd $(BUILD_DIR); make; cd ..

install: build
	mkdir -p $(INSTALL_DIR)
	cp -r $(BUILD_DIR)/$(PROGRAM) $(INSTALL_DIR)/$(PROGRAM)
	open $(INSTALL_DIR)
	rm -rf $(BUILD_DIR)

uninstall:
	rm -rf $(INSTALL_DIR)

dvi:
	makeinfo --html $(DOC).texi
	open ./$(DOC)/index.html

dist:
	rm -rf $(ARCH_NAME)
	mkdir -p $(ARCH_NAME)/src
	cp Makefile *.texi *.h $(ARCH_NAME)/src
	cp -r $(QT_DIR)/ $(ARCH_NAME)/src/$(QT_DIR)
	cp -r *.c $(ARCH_NAME)/src
	cp -r tests/ $(ARCH_NAME)/src
	tar -cvzf $(ARCH_NAME).tgz $(ARCH_NAME)/
	rm -rf $(ARCH_NAME)/

smart_cal.a:$(OBJS)
	ar -rc smart_cal.a $^
	ranlib smart_cal.a
	rm -rf *.o

test: clean smart_cal.a
	mkdir test
	gcc --coverage $(CFLAGS) $(TESTS) smart_cal.a $(FLAG_TEST) -o test/test -g
	./test/test

gcov_report:
	mkdir greport
	gcc --coverage $(SRCS) $(TESTS) $(FLAG_TEST) -o greport/greport
	./greport/greport
	lcov -t "test" -o smart_cal.info -c -d .
	genhtml -o ./report smart_cal.info
	open ./report/index.html

style:
	clang-format -n --style=google *.c *.h ./tests/*.c ./tests/*.h
	clang-format -i --style=google *.c *.h ./tests/*.c ./tests/*.h

leaks:
	$(LEAKS)

cppcheck:
	cppcheck *.c *.h tests/*.c tests/*.h

clean:
	-rm -rf *.o *.gcno *.gcda *.info  test smart_cal.a gcov_report report greport a.out *.txt *.dSYM build calcula CalReadme calculator archiveCal archiveCal.tgz

debug:
	gcc smart_cal.c stack.c queue.c -g -lm

