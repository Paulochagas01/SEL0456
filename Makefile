ALL = main

all: $(ALL)

main: main.o function1.o function2.o function3.o
	gcc -o $@ $^ -lm

%.o: %.c
	gcc -c $<

clean:
	rm -f *.o $(ALL)

distclean: clean