target=app
CPPFLAGS=-I./include
path=./src
src=$(wildcard $(path)/*.c)
obj=$(patsubst %.c, %.o, $(src))

msrc=$(wildcard ./*.c)
mobj=$(patsubst %.c, %.o, $(msrc))

$(target):$(obj) $(mobj)
	@echo $^
	$(CC) $^ -o $@

%.o:%.c
	@echo $<
	$(CC) -c $< $(CPPFLAGS) -o $@
	
.PHONY:clean
clean:
	-rm $(obj) $(mobj) $(target) -rf
