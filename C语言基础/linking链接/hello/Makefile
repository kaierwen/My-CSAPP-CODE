# CFLAGS="-static"

BINS := hello hello_no_pie hello_static hello.o
all: ${BINS}

hello: hello.c
		gcc -g -o $@ $^
# 以上命令的解释如下：
# 第7行的$@代表的是第6行的第一个文本hello，第7行的$^代表的第6行中的第二个文本hello.c
# 所以第7行的（gcc -g -o $@ $^） => (gcc -g -o hello hello.c)，$@ $^是缩写的意思

hello_no_pie: hello.c
		gcc -g -o $@ -fno-pie -no-pie $^
# (gcc -g -o $@ -fno-pie -no-pie $^) => (gcc -g -o hello_no_pie -fno-pie -no-pie hello.c)
# -fno-pie参数是以绝对地址进行编译

hello_static: hello.c
		gcc -g -o $@ -static $^
# (gcc -g -o $@ -static $^) => (gcc -g -o hello_static -static hello.c)

hello.o: hello.c
		gcc -g -c -o $@ $^
# (gcc -g -c -o $@ $^) => (gcc -g -c -o hello.o hello.c)
clean:
		rm -rf ${BINS}