CFLAGS += -g

compile: linked_list.o linked_list.c

clean:
	rm *.o
	rm test

test: linked_list.o linked_list_test.c
	gcc $(CFLAGS) -o test linked_list_test.c linked_list.o
