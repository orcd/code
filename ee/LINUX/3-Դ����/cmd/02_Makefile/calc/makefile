src=$(wildcard ./*.c) #查找指定路径下的所有.c文件，给src赋值
obj=$(patsubst %.c, %.o, $(src) ) #把$(src)中所有的.c替换成.o
target=calc
CFLAGS=-Wall

$(target): $(obj)
	$(CC) $^ -o $@ 

#模式匹配
%.o:%.c
	@#$(CC) -c $< -o $@ #$<所有变量
	$(CC) -c $< $(CFLAGS)

.PHONY:clean #告诉make， clean为伪目标，无论如何都要执行
clean:
	-mkdir a/b #-的作用，如果执行这个命令出错，则跳过，不要中断
	-rm $(target) $(obj) -f

