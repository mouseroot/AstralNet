
all: net.c energy.c
	@echo Compiling AstralNet
	gcc net.c energy.c -o net