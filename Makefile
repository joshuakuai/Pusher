cc=g++
exe=main
obj=test.o Pusher.o
cfgs=-lssl -lcrypto

$(exe):$(obj)
	$(cc) -o $(exe) $(obj) $(cfgs)

test.o:test.cpp
	$(cc) -c test.cpp
Pusher.o:Pusher.cpp
	$(cc) -c Pusher.cpp

clean:
	rm -rf *.o main