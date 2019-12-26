CC = g++
CFlag = -c
EXEFILE = BSTree.exe
LFlag = -o
OBJS = main.o instruction.o menu.o
$(EXEFILE):$(OBJS)
	$(CC) $(LFlag) $@ $(OBJS)
main.o:main.cpp instruction.h
	$(CC) $(CFlag) main.cpp
instruction.o:instruction.cpp instruction.h BSTree.h menu.h
	$(CC) $(CFlag) instruction.cpp
menu.o:menu.cpp menu.h BSTree.h
	$(CC) $(CFlag) menu.cpp
clean:
	rm ./*.o
deleteexe:
	rm ./$(EXEFILE)
