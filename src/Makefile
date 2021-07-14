

OBJS = history.o tokenizer.o uimain.o
CFLAGS= -g -O3


uimain: $(OBJS)

	cc -o uimain $(CFLAGS) $(OBJS)

$(OBJS): history.h tokenizer.h

clean:
	rm -f *.o uimain

run:uimain  
	./uimain
