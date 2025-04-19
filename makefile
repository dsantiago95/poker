CFLAGS = -g
src_files := $(wildcard *.c)
obj_files := $(src_files:.c=.o)
hdr_files := $(wildcard *.h)

main: $(obj_files)
	$(CC) $(CFLAGS) -o main $(obj_files)

$(obj_files): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o
